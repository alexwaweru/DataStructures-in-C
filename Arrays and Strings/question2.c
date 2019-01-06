#include <stdlib.h>
#include <stdio.h>
#include <string.h>


void reverse(char *str){
    char* end = str;
    char tmp;
    if (str) {
        while (*end){ /* Find end of the string */
            ++end;
        }
        --end; /* Set 1 char back since last char is null */

        /* Swap characters from start of the string with the end of the 
         * string, until the pointer meet in the middle */
        while (str < end){
            tmp = *str;
            *str++ = *end;
            *end-- = tmp;
        }
    }
}

int main(){
    char string[300];
    printf("Enter a string: ");
    gets(string);
    reverse(string);
    printf("%s\n", string);
    return 0;
}