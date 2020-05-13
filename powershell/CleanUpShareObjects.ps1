# target
$startFolderGame =  'D:\inteam\FrameworkAndroid'
$startFolderDoc =  'E:\Projects'
$startFolderDev =  'D:\inteam\Build'
$startFolderC =  'C:\DevTools'

$targetFolders= "$startFolderDoc", 
                "$startFolderGame"
                
                 

$filterObjectName = ""

# output
$date = "$(Get-Date)".Replace('/','_').Replace(' ','_').Replace(':','_')
$outputFolder = 'E:\learning\ProgramingTech\powershell\powershell'
$outputFile = "$outputFolder\ListFolderDelete_$date.xlsx" #csv or xlsx/xls/txt
New-Item "$outputFile" -ItemType File 

# save list files to delete
$folderName = 'Folder name'
$folderSize = 'Folder size (MB)'

$NewLine = "{0},{1}" -f $folderName,$folderSize
$NewLine | add-content -path $outputFile
$isFilesList = false

foreach  ($targetFolder in $targetFolders)
{
    $NewLine = "{0},{1}" -f '', ''
    $NewLine | add-content -path $outputFile
    Get-ChildItem -recurse -force $targetFolder -Filter $filterObjectName -ErrorAction SilentlyContinue |? { $_ -is [io.directoryinfo] } | % {
        $len = 0
        Get-ChildItem -recurse -force $_.fullname -ErrorAction SilentlyContinue | % { $len += $_.length }
        #get size  | Where-Object Name -Like '*`Android*' 
        $folderName = $_.fullname
        $folderSize= '{0:N2}' -f ($len / 1MB)       

        $folderSize = $folderSize.Replace(',','')
        "Folder $folderName : $folderSize"

        #input to data object
        $NewLine = "{0},{1}" -f $folderName , $folderSize
        $NewLine | add-content -path $outputFile
    }
}

$isFilesList = true
 # open file
 Invoke-Item "$outputFile"
 write-host ""

# prompt user
if($isFilesList -eq (true)) {
    $msgBoxInput = [System.Windows.MessageBox]::Show('Please check list files to delete. Do you want to start deleting files?',
                   'Warning',
                   [System.Windows.Forms.MessageBoxButtons]::OKCancel,
                   [System.Windows.Forms.MessageBoxIcon]::Warning)
    switch($msgBoxInput)
    {
         "OK" {
             write-host "_______________________________________________________________________________"
             write-host ""
             write-host "                 Starting delete files..."
             write-host "_______________________________________________________________________________"
             foreach  ($targetFolder in $targetFolders)
             {
                 Get-ChildItem -recurse -force $targetFolder -Filter $filterObjectName -ErrorAction SilentlyContinue |? { $_ -is [io.directoryinfo] } | % {
                     $len = 0
                     Get-ChildItem -recurse -force $_.fullname -ErrorAction SilentlyContinue | % { $len += $_.length }
                  
                     $folderName = $_.fullname
                     $folderSize= '{0:N2}' -f ($len / 1MB)       
                     $folderSize = $folderSize.Replace(',','')

                     #Delete
                     "Delete $folderName : $folderSize "
                     #Remove-Item -Recurse -Force -Confirm:$false "$folderName" -ErrorAction SilentlyContinue
                 }
             }

         } 
         "Cancel" {
             write-host "Cancel task"
         } 
    }
}