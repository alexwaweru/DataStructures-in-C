#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(){
    // Read the string from standard input
    char string[300];
    printf("Enter a string: ");
    gets(string);
    int n = strlen(string);
    printf("%d\n", n);

    // Create an array of all 128 possible ascii characters.
    int characters[128];
    for (int i=0; i < 128; i++){
        characters[i] = 0;
    }

    // Loop through the string to get duplicate characters
    for (int i=0; i<n; i++){
        int temp = (int)string[i];
        if (characters[temp] == 1){
            printf("%s has duplicate characters!\n", string);
            return 0;
        } else {
            characters[temp] = 1;
        }
    }
    printf("%s has all unique characters!\n", string);
    return 0;
}