***Installation of SEAL Library***
Requirements/Dependencies
  clang++ (sudo apt update && sudo apt install clang)
  GNU G++ (sudo apt update && sudo apt install build-essential)
  CMake (sudo snap install cmake --classic)

cd
git clone https://github.com/microsoft/SEAL.git
cmake -S . -B build
cmake --build build
sudo cmake --install build

***Run SealDemo files***

Download/Clone Source repository from git
  git clone <git repository url>
Initializing git in current directory
  git init
  
**Git configuration****
Set the name that will be attached to your commits and tags.
  git config --global user.name <user name>
Set the e-mail address that will be attached to your commits and tags.
  git config --global user.email <email id>
Enable some colorization of Git output.
  git config --global color.ui auto

****Git branch****
Check the branch
  git branch
To change the branch
  git checkout -b <branch name> or
  git switch -c <new branch> 
To delete the branch 
  git checkout -D <branch name>

****Update your files then do the following****
Check for changes
  git status
If changed, add changes to staging area
  git add --all or git add <file name>
Commit the changes made in staging area
  git commit -m "description"
Syncronize staging and git remote repository (use token as password)
  git push origin <branch name>
