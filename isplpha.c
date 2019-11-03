#include<stdio.h> 
#include<stdlib.h> 
  
int main() 
{ 
    char str[] = "12abc12"; 
  
    int alphabet = 0, i; 
    for (i=0; str[i]!= '\0'; i++) 
    { 
        
        if (isalpha(str[i]) != 0) 
            alphabet++; 
  }
        
    printf("Alphabetic_letters = %d", alphabet); 
  
    return 0; 
} 
