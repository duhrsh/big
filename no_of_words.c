#include <stdio.h>

int main() {
    char str[100];
    int word = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); //didnt use gets(str) cuz its removed in C11

    for (int i = 0; str[i] != '\0'; i++) {
        if ((i == 0 || str[i - 1] == ' ') && (str[i] != ' ' && str[i] != '\n')) {
            word++;
        }
    }

    printf("Number of words: %d\n", word);
    return 0;
}
