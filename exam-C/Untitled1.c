#include <stdio.h>
#include <string.h>

#define max-w 5
#define max-l 10

int main() 
{
    char words[max-w][max-l];  
    char temp[max-l];  
    int i, j;


    printf("Enter 5 words:\n");
    for (i = 0; i < max-w; i++) {
        printf("Word %d: ", i + 1);
        scanf("%9s", words[i]);  
    }

    
    for (i = 0; i < max-w - 1; i++) {
        for (j = 0; j < max-w- i - 1; j++) {
            if (strcmp(words[j], words[j + 1]) > 0) {
             
                strcpy(temp, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], temp);
            }
        }
    }

    
    printf("\nWords in ascending order:\n");
    for (i = 0; i < max-w; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}

