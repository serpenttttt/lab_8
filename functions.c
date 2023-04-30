#include "functions.h"
#include "macros.h"

char *input_string(char *string) {
    char input;
    for (int i = 0; (input = getchar()) != '\n'; ++i) {
        string = (char *) realloc(string, sizeof(char) * (i + 1));
        string[i] = input;
        string[i + 1] = '\0';
    }
    return string;
}

int strend(char *s, char *t) {
    int length_s = strlen(s);
    int length_t = strlen(t);

    int j = 0;

    for (int i = length_s - length_t; i <= length_s; ++i) {
        if (s[i] == t[j]){
            ++j;
            continue;
        }
        else return 0;
    }
    return 1;
}

void shell_sort(char **array, int amount_of_elements) {

    int distance = amount_of_elements / 2;

    while (distance >= 1) {
        for (int i = 0; i < (amount_of_elements - distance); ++i) {
            int j = i;
            while (j >= 0) {
                if (strlen(array[j]) > strlen(array[j + distance]))
                    swap(char *, array[j + distance], array[j])
                j--;
            }
        }
        distance /= 2;
    }
}
