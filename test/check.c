#include <stdio.h>

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        FILE *file = fopen(argv[i], "r");
        if (!file) {
            perror("Error opening file");
            return 1;
        }

        fseek(file, 0, SEEK_END);
        if (ftell(file) > 0) {
            fseek(file, -1, SEEK_END);
            char lastChar = fgetc(file);
            if (lastChar != '\n') {
                printf("File %s does not end with a newline\n", argv[i]);
            }
        }

        fclose(file);
    }

    return 0;
}

