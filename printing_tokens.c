#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *s;
    s = malloc(1024 * sizeof(char));  
    if (s == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    scanf("%[^\n]", s); 
    s = realloc(s, strlen(s) + 1); 
  
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ') {
            printf("\n");  
        } else {
            printf("%c", s[i]); 
        }
    }

    free(s); 
    return 0;
}
