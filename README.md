# Installation of SEAL Library <br />
## Requirements/Dependencies <br />
```
  clang++ (sudo apt update && sudo apt install clang)
  GNU G++ (sudo apt update && sudo apt install build-essential)
  CMake (sudo snap install cmake --classic)
```
## Install seal library <br />
```
git clone https://github.com/microsoft/SEAL.git
cmake -S . -B build
cmake --build build
sudo cmake --install build
```

# Run SealDemo files <br />

## Download/Clone Source repository from git <br />
```
git clone <git repository url>
Initializing git in current directory <br />
git init <br />
```
## Git configuration <br />
### Set the name that will be attached to your commits and tags. <br />
```git config --global user.name <user name> ```
### Set the e-mail address that will be attached to your commits and tags.
```git config --global user.email <email id> ```
### Enable some colorization of Git output. <br />
```git config --global color.ui auto ```

## Git branch <br />
### Check the branch <br />
```git branch```
### To change the branch <br />
```git checkout -b <branch name> ``
or <br />
```git switch -c <new branch> ```
### To delete the branch
```git checkout -D <branch name> ```

##Update your files then do the following <br />
###Check for changes <br />
```git status ```
###If changed, add changes to staging area <br />
```git add --all or git add <file name> ```
###Commit the changes made in staging area <br />
```git commit -m "description" ```
###Syncronize staging and git remote repository (use token as password) <br />
```git push origin <branch name> ```
