#include <stdio.h>

void deleteProbel(char *str)
{
    printf("%s\n", str);
    char str_out[sizeof(str)];
    int i = 0, j = 0;
    while (str[i] != '\0') {
        if ((int)(str[i]) != 32) {
            str_out[j] = str[i];
            j ++;
        }
        i ++;
    }
    printf("%s\n", str_out);
}


int main()
{
    deleteProbel("  1 2  44");
    return 0;
}
