#include <stdio.h>
#include <string.h>
#include "main.h"
int main(){
    FILE *fp = NULL;
    char directory[100];
    char buffer[200];
    printf("Cadett. VERSION 0.1. -Adriel Morales\n");
    printf("Paste in the directory for the file you want to scan.\n");
    fgets(directory, 100, stdin);
    directory[strlen(directory) - 1] = 0;
    fopen(directory, "r");
    printf("Counting... MEMORY ADDRESS FOR BUFFER %x\n", &buffer);
    vowelChecker(buffer, fp);
    
    return 0;
}