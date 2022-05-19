#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void* rot13(char* input)  {

int i; 
int length;
length = strlen(input);

 for(i=0; i<length; i++){
    
    if isalpha(input[i]){
    if(input[i]>='a' && input[i]<= 'm'){
        input[i] = input[i]+13;
    } else if(input[i]>='n' && input[i]<= 'z'){
        input[i] = input[i]-13;
    } else if(input[i]>='N' && input[i]<= 'Z'){
        input[i] = input[i]-13;
    } else if(input[i]>='A' && input[i]<= 'M'){
        input[i] = input[i]+13;}
 
    }
putchar(input[i]);

}}


int main( int argc, char **argv)  { 
    
   rot13(argv[1]);
    
    return 0;
}

