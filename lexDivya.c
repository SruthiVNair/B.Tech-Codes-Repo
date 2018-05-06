#include <stdio.h>

#include <string.h>

char symTable[5][7] = { "int", "void", "float", "char", "string" };

int main() {
    int i, j, k = 0, flag = 0;
    char string[7];
    char str[] = "int main(){printf(\"Hello\");=;return 0;}";
    char *ptr;
    printf("\n Splitting string \t\"%s\" \tinto tokens:\n", str);
    ptr = strtok(str, " (){};""");
    printf("\n\n");
    while (ptr != NULL) {
        printf ("%s\n", ptr);

        for (i = k; i < 5; i++) {
            memset(&string[0], 0, sizeof(string));
            for (j = 0; j < 7; j++) {
                string[j] = symTable[i][j];
            }

            if (strcmp(ptr, string) == 0) {
                printf("\tKeyword\n\n");
                break;
            } else
            if (string[j] == 0 || string[j] == 1 || string[j] == 2 ||
                string[j] == 3 || string[j] == 4 || string[j] == 5 ||
                string[j] == 6 || string[j] == 7 || string[j] == 8 ||
                string[j] == 9) {
                printf("\tConstant\n\n");
                break;
            } else {
                printf("\tIdentifier\n\n");
                break;
            }
        }
        ptr = strtok(NULL, " (){};""");
        k++;
    }

    return 0;
}
