#include <stdio.h>

int main(void) {
    int was_space = 0;    
    int c;                 

    while ((c = getchar()) != EOF) {
        if (c == ' ') {  
            if (!was_space) {           
                putchar(c);         
                was_space = 1;             
            }
        } else {                         
            putchar(c);                 
            was_space = 0;                
        }
    }
    return 0;
}