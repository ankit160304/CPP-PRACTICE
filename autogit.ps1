$folder = "C:\Users\Ankit Gupta\Desktop\coding\c++"

Set-Location $folder

Write-Host "Auto GitHub is running..."
Write-Host "Watching for file changes..."

$watcher = New-Object System.IO.FileSystemWatcher
$watcher.Path = $folder
$watcher.IncludeSubdirectories = $true
$watcher.EnableRaisingEvents = $true

$action = {
    Start-Sleep -Seconds 10

    Set-Location "C:\Users\Ankit Gupta\Desktop\coding\c++"

    $changes = git status --porcelain

    if ($changes) {
        git add .
        git commit -m "Auto update"
        git push
        Write-Host "GitHub updated!"
    }
}

Register-ObjectEvent $watcher "Changed" -Action $action
Register-ObjectEvent $watcher "Created" -Action $action
Register-ObjectEvent $watcher "Deleted" -Action $action
Register-ObjectEvent $watcher "Renamed" -Action $action

while ($true) {
    Start-Sleep -Seconds 5
}