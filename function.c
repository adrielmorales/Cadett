#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char vowelChecker(char buffer[200], FILE *fp){
    printf("Hello!\n");
    printf("MEMORY ADDRESS FOR BUFFER (2) %x\n", &buffer);
    printf("%s", buffer);
    while(fgets(buffer, 200, fp) != NULL){
        printf("Hello!");
    }
    printf("%s", buffer);
    printf("Hello!");
    return buffer;
}