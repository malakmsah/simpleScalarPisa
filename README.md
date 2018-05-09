# Simple Scalar

Vagrant machine with installed Simple Scalar simulator(PISA architecture).

- Pre-requistes: 
1. Oracle virtual box (version 5.1 or older)
https://www.virtualbox.org/wiki/Download_Old_Builds_5_1

2. Vagrant
https://www.vagrantup.com/docs/installation/

3. Git
https://git-scm.com/downloads

- Set up steps:
1. Install pre-requistes.
2. Open terminal (cmd of windows)
3. Create directory
mkdir archi
4. Go to this directory
cd archi
5. clone this repository
6. go to the recpository folder
7. run in terminal:
vagrant up
8. run terminal 
vagrant ssh
-- Now you are inside the virtual machine.
9. go to below directory to find simpleScalar installation.
cd /var/www


* Note:
All the files under /var/www inside the vagrant machine, you will find them in a folder called 'sites' outside the machine.
