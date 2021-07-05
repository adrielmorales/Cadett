//
//  main.c
//  Cadett
//
//  Created by Adriel Morales on 7/5/21.
//

#include <stdio.h>
#include <string.h>

#include "function.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    FILE *fp;
    int counter;
    char directory[100];
    printf("Cadett. VERSION 0.1. -Adriel Morales\n");
    printf("Paste in the directory for the file you want to scan.\n");
    fgets(directory, 100, stdin);
    directory[strlen(directory) - 1] = 0;
    fp = fopen(directory, "r");
    counter = vowelChecker(fp);
    printf("There are %d Vowels!\n", counter);
    return 0;
}
