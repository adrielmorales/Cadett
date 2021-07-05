//
//  function.c
//  Cadett
//
//  Created by Adriel Morales on 7/5/21.
//

#include <stdio.h>
#include <stdlib.h>
#include "function.h"

int vowelCounter(char text){
  if(text == 'A' || text == 'E' || text == 'I' || text == 'O' || text == 'U' || text == 'a' || text == 'e' || text == 'i' || text == 'o' || text == 'u'){
    return 1;
  }
  return 0;
}

int vowelChecker(FILE* fp){
  char text[200];
  int counter;
    int vowels = 0;
  while(fgets(text, 200, fp)){
    for(int i=0; i<200; i++){
      counter = vowelCounter(text[i]);
      if(counter == 1){
          vowels++;
      }
    }
  }
    return vowels;
}
