$folder = "C:\Users\Ankit Gupta\Desktop\coding\c++"

Set-Location $folder

Write-Host "====================================="
Write-Host "      Auto GitHub Sync Started"
Write-Host "====================================="
Write-Host "Watching: $folder"
Write-Host "Checking every 10 seconds..."
Write-Host ""

while ($true) {

    try {
        # Check whether there are any changes
        $changes = git status --porcelain

        if ($changes) {

            Write-Host "$(Get-Date -Format 'HH:mm:ss') - Changes detected!"

            # Add all new/modified/deleted files
            git add .

            # Check again after git add
            $stagedChanges = git diff --cached --quiet

            if ($LASTEXITCODE -ne 0) {

                # Create commit
                git commit -m "Auto update $(Get-Date -Format 'yyyy-MM-dd HH:mm:ss')"

                # Push to GitHub
                git push origin main

                Write-Host "$(Get-Date -Format 'HH:mm:ss') - GitHub updated successfully!"
                Write-Host ""
            }
        }

    }
    catch {
        Write-Host "Error: $($_.Exception.Message)"
    }

    # Wait 10 seconds before checking again
    Start-Sleep -Seconds 10
}