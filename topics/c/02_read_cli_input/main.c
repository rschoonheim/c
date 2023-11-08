#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * Convert to lowercase, remove dubble spaces and remove leading and trailing spaces
 * @param input
 * @return
 */
char normalize_input(char *input) {

    /**
     * Transform the input to a
     * lowercase string.
     */
    for (int i = 0; input[i]; i++) {
        input[i] = tolower(input[i]);
    }

    /**
     * Replace dubbel spaces with a
     * single space
     */
    int i, j;
    for (i = 0, j = 0; i < strlen(input); i++) {
        if (!(input[i] == ' ' && input[i + 1] == ' ')) {
            input[j++] = input[i];
        }
    }
    input[j] = '\0';

    /**
     * Remove leading and trailing spaces
     */
    int k = 0;
    while (input[k] == ' ') {
        k++;
    }

    if (k > 0) {
        for (int i = 0; i < strlen(input); i++) {
            input[i] = input[i + k];
        }
    }

    int l = strlen(input) - 1;
    while (input[l] == ' ') {
        input[l] = '\0';
        l--;
    }

    return *input;
}

int main() {
    int application_state = 0;
    while (application_state != 1) {
        printf("Enter a command: ");
        char command[100];
        scanf("%[^\n]", command);
        normalize_input(command);

        printf("You entered: %s\n", command);

        if (strcmp(command, "exit") == 0) {
            printf("Exiting...\n");
            application_state = 1;
        }

        while (getchar() != '\n');
    }


    return 0;

}