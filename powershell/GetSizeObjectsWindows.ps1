# target folder
$startFolderGame =  'D:\inteam'
$startFolderDoc =  'E:\'
$startFolderDev =  'C:\'
$startFolderC =  'C:\DevTools'

$targetFolders= "$startFolderDev", 
                "$startFolderGame", "$startFolderGame\Game", "$startFolderGame\UnitTest","$startFolderGame\FrameworkTools",
                "$startFolderC",
                "$startFolderDoc" , "$startFolderDoc\learning\ProgramingTech"

# output
$date = "$(Get-Date)".Replace('/','_').Replace(' ','_').Replace(':','_')
$outputFolder = 'E:\learning\ProgramingTech\powershell\powershell'
$outputFile = "$outputFolder\ListFolderSize_$date.xlsx" #csv or xlsx/xls/txt
New-Item "$outputFile" -ItemType File 

#header
$folderName = 'Folder name'
$folderSize = 'Folder size (MB)'

$NewLine = "{0},{1}" -f $folderName,$folderSize
$NewLine | add-content -path $outputFile

foreach  ($targetFolder in $targetFolders)
{
    $NewLine = "{0},{1}" -f '', ''
    $NewLine | add-content -path $outputFile
    Get-ChildItem -recurse -force $targetFolder -ErrorAction SilentlyContinue | ? { $_ -is [io.directoryinfo] } | % {
        $len = 0
        Get-ChildItem -recurse -force $_.fullname -ErrorAction SilentlyContinue | % { $len += $_.length }
        #get size
        $folderName = $_.fullname
        $folderSize= '{0:N2}' -f ($len / 1MB)       

        $folderSize = $folderSize.Replace(',','')
        "Folder $folderName : $folderSize"

        #input to data object
        $NewLine = "{0},{1}" -f $folderName , $folderSize
        $NewLine | add-content -path $outputFile
    }

}

