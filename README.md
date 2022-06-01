# Installation of SEAL Library <br />
## Requirements/Dependencies <br />
  clang++ (sudo apt update && sudo apt install clang)<br />
  GNU G++ (sudo apt update && sudo apt install build-essential)<br />
  CMake (sudo snap install cmake --classic)<br />

## Install seal library <br />
```
git clone https://github.com/microsoft/SEAL.git <br />
cmake -S . -B build <br />
cmake --build build <br />
sudo cmake --install build <br />
```

# Run SealDemo files <br />

## Download/Clone Source repository from git <br />
git clone <git repository url>
Initializing git in current directory <br />
git init <br />
  
## Git configuration <br />
### Set the name that will be attached to your commits and tags. <br />
git config --global user.name <user name> <br />
### Set the e-mail address that will be attached to your commits and tags. <br />
git config --global user.email <email id> <br />
### Enable some colorization of Git output. <br />
git config --global color.ui auto <br />

## Git branch <br />
### Check the branch <br />
git branch <br />
### To change the branch <br />
git checkout -b <branch name> or <br />
git switch -c <new branch> <br />
### To delete the branch <br />
git checkout -D <branch name> <br />

##Update your files then do the following <br />
###Check for changes <br />
git status <br />
###If changed, add changes to staging area <br />
git add --all or git add <file name> <br />
###Commit the changes made in staging area <br />
git commit -m "description" <br />
###Syncronize staging and git remote repository (use token as password) <br />
git push origin <branch name> <br />
