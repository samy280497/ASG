//speechtest.c
//Written by: Bill Heaster
//TheCreator a7 ApexLogic |)0T net 

#include <string.h>
#include <stdio.h>
#include "speechSynthesisFunctions.h"

int main(void)
{
    
    char myS[255];
    
    strcpy(myS, "hello world, this is some text  i will be reading to you. what do you think?");
    int len = strlen(myS);
    
    
    speakInit();
    
    speak(myS, len);
    
    changeRange(100);
    
    speak(myS, len);  
    
    changePitch(10);
    
    speak(myS, len);
    
    
    speakCleanup();
    return 0;
}
