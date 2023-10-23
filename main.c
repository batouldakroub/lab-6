#include <stdio.h>
#include <string.h>

int main() {
    char input[256];
    int letters[26] = {0}; 

    printf("Please enter text strings:\n");

    while (1) {
        fgets(input, sizeof(input), stdin); 
        if (strlen(input) == 1 && input[0] == '\n') {
            break;
        }

        for (int i = 0; input[i] != '\0'; i++) {
            char c = input[i];
            if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
                if (c >= 'a' && c <= 'z') {
                    c = c - 'a' + 'A';
                }
                letters[c - 'A']++;
            }
        }
    }

    for (int i = 0; i < 26; i++) {
        char letter = 'A' + i;
        printf("%c: %d\n", letter, letters[i]);
    }

    return 0;
}
