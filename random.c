#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <unistd.h>



char randchar(){
    //seed random with seconds time
    srand( (unsigned)time(0) );

    short asciiUpperCase = 65;

    short letters =26;
    //get a random letter using ascii then return the letter
    char randomLetter = (char)(rand()%letters + asciiUpperCase);
    //sleep one second to reset the rand seed
    sleep(1);
    return randomLetter;

}
