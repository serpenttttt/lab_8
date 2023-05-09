#include "functions.h"

int main() {

    puts("Task1\n"
         "Input s:");

    char *s = (char *) malloc(sizeof(char));
    char *t = (char *) malloc(sizeof(char));

    s = input_string(s);
    puts("Input t:");
    t = input_string(t);

    printf("Function's response: %d\n\n", strend(s, t));

    puts("Task2\n"
         "Input the length of the array");

    int array_length;

    if (scanf("%d", &array_length)) {

        clear_stdin();

        char **array = (char **) malloc(sizeof (char *) * array_length);

        for (int i = 0; i < array_length; ++i) {
            array[i] = (char *) malloc(sizeof (char));
            array[i] = input_string(array[i]);
            fflush(stdin);
        }

        shell_sort(array, array_length);

        puts("\nSorted:");

        for (int i = 0; i < array_length; ++i) {
            printf("%s\n", array[i]);
        }

    } else puts("Incorrect length");

    return 0;
}
