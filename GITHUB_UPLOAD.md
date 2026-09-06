# Upload This Repository to GitHub

## Option A — GitHub Website

1. Create a new repository on GitHub.
2. Suggested repository name:
   `xv6-processinfo-scheduling-project`
3. Extract `xv6-final-github-repository.zip`.
4. Upload the extracted files and folders.
5. Commit the upload.

## Option B — Git command line

Open a terminal inside the extracted repository folder and run:

```bash
git init
git add .
git commit -m "Initial project upload"
git branch -M main
git remote add origin https://github.com/YOUR_USERNAME/xv6-processinfo-scheduling-project.git
git push -u origin main
```

Replace `YOUR_USERNAME` with your GitHub username.

## Before Publishing

Do not upload:

- Ubuntu ISO files
- VirtualBox `.vdi` disks
- passwords
- private keys
- unrelated machine files

If you later add the complete xv6 source tree, retain MIT xv6's original license/copyright notices.
