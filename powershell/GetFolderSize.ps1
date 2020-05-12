# target folder
$startFolderSaiwks0759 =  '\\saiwks0759\A9_Build'
$startFolderNAS =  '\\gameloft.org\sai\Android_Publishing\Asphalt9\Build'
$startFolderSAI04 =  '\\sai-data04.gameloft.org\Android_Publishing\Asphalt9\Build'

$targetFolders= "$startFolderSaiwks0759", 
                "$startFolderNAS", "$startFolderNAS\Android", "$startFolderNAS\iOS","$startFolderNAS\Windows",
                "$startFolderNAS\Android\Amazon", "$startFolderNAS\Android\Googleplay", "$startFolderNAS\Android\HMS","$startFolderNAS\Android\Samsung",
                "$startFolderNAS\iOS\macOS",
                "$startFolderSAI04" , "$startFolderSAI04\Android", "$startFolderSAI04\Windows","$startFolderSAI04\iOS"

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
    Get-ChildItem -force $targetFolder -ErrorAction SilentlyContinue | ? { $_ -is [io.directoryinfo] } | % {
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

