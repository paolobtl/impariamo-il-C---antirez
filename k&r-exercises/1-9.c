#include <stdio.h>

int main(void) {
    int found = 0;    
    int c;                 

    while ((c = getchar()) != EOF) {
        if (c == ' ') {  
            if (found == 0) {           
                putchar(c);         
                found = 1;             
            }
        } else {                         
            putchar(c);                 
            found = 0;                
        }
    }
    return 0;
}