# Embedded Operating system

# Tools
-Typora
-Draw IO
-shutter
-visual studio code 
-log in github
-voko screen

-Embedded system vs general purpose system
-Two and three layer embedded system

-Modularize project and code
-file system
    -Root FS
    -Dictionary structure
-Shell
    -Environment variable
    -PATH,USER
    -Custom Environment variable
-Section
    -.txt => PC/IP
    -.data => Global initialise variable
    -.bss => Global uninitialise variable
    -heap => dynamic allocation of memory
    -stack => Return address and local variable
-Build process
-Hex dump vs execution under embedded linux
-ELF
-makefile
-Parallelism
    -pseudo parallelism
    -true parallelism

# c
 -Header (importance of header file)
 -Library
    -static library(.a) => ar
    -Dynamic library(.so) => gcc -shared -fPIC
    -difference between static and dynamic library
 -Declaration=>fuction
 -Definiton=>fuction
 -Process
 -Program under execution
 -CPU management called process management
 -read about typedef
 -System call and library call
 -PID and PPID
    -getpid()
    -getppid()
# spaces 
-Address space 
-user space -> various user application reside
-kernel space -> place os resides
-segmentation fault -> trying to illegal memory 
-PCB -> Data structure that hold the information about the process
-
# FORK
-parent_id
-child_id
## INTER PROCESS COMMUNICATION
-Pipes
-Named pipes
-Process state diagram
        -create
        -ready
        -running
        -waiting
        -exit
# THREAD
 -Definition
 -Need of thread
 -Types of thread
    -kernel level thread
    -user level thread
 -Component of thread
    -program counter
    -register set 
    -stack

# VALGRIND
 -memleak -> check the memory leak in the program
# EXEC
 - Through this command in bash shell a sub shell will be created by default
# RACE CONDITION
 - That coditions spawned mismanagement of resources thats why it needs
        process synchronization
            -mutex
            -recursion
            -semaphore
# communication through
    -shared memory 
    -message queue
    -barriers
# MEMORY MANAGEMENT 


