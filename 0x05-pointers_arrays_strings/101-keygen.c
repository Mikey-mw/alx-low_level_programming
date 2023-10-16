#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    char password[12];
    int i;
    srand(time(NULL));

    for (i = 0; i < 11; i++) {
        int random_char = rand() % 94 + 33; // Generate a random printable character
        password[i] = (char)random_char;
    }

    password[11] = '\0'; // Null-terminate the string
    printf("%s\n", password);
    return 0;
}
