int main() 
{ 
    char str[] = "12abc12"; 
  
    int number = 0, i; 
    for (i=0; str[i]!= '\0'; i++) 
    { 
        if (isdigit(str[i]) != 0) 
            number++; 
    } 
  
    printf("Decimal_digits = %d\n", number); 
  
    return 0; 
} 
