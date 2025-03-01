#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() 
{
    char *s = malloc(1024 * sizeof(char));
    int freq[10] = {0};

    scanf("%s", s); 
    s = realloc(s, strlen(s) + 1); 

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= '0' && s[i] <= '9') { 
            freq[s[i] - '0']++; 
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", freq[i]);
    }

    free(s);
    return 0;
}
