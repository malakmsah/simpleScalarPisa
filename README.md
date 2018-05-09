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
`mkdir archi`
4. Navigate to this directory
`cd archi`
5. Clone this repository
6. Navigate to the recpository folder
7. Run in terminal
`vagrant up`
8. Run terminal 
`vagrant ssh`
-- Now you are inside the virtual machine.
9. Navigate to below directory to find simpleScalar installation.
`cd /var/www`

- Usage after set up:
- Navigate to the repository directory and run:
1. `vagrant up`
2. `vagrant ssh`
- After you finish working run in terminal:
1. `exit`
2. `vagrant halt`

* Note:
All the files under `/var/www` inside the vagrant machine, you will find them in a folder called `sites` outside the machine.
