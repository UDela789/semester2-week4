
/*
Name:Delalorm Kunutsor
Student ID: gmbp0709
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    // define appropriate data to hold your answer
    char buffer[100];

    // process the command-line data using appropriate string functions
    strcat(buffer, argv[1]);
     for( int k=2; k<argc; ++k ) {
        strcat(buffer, "-");
        strcat(buffer, argv[k]);
    }

    printf("%s\n",buffer); // use only this single print statement in your submitted code

    return 0;
}