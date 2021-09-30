# Defrost version 1.0 

A user friendly Password generator written in C++. 

## About 

Defrost is a Password generating tool written entirely in C++. A first version for the FrostByte password generator which can be used in cyber penetration tests for possible brute-forcing vulnerabilities. On first run the program prompts the user to enter the name they're target's full names and date of birth. After valid details have been entered the program then generates a list based on the details entered above. 
The program returns results with a list of 6 potential passwords.

##  How to Install

clone this repository then compile using g++ or clang++

### Linux Installation 
``` 
git clone https://github.com/rybernet/Defrost_Passwds.git 

cd Defrost_Passwds/ 

g++ -O3 -pthread ./*.cpp -lncursesw -o defrost_passwds 
 
``` 

### How to run 

To run the program :
                   defrost-passwds
Alternative Linux command to run the program :
                 ./defrost-passwds

Change to the directory where you saved the compiled file and run the command above and enter details when the program asks for user input.
