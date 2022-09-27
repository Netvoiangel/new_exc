#include <stdio.h>


void newChBackward(char *str, char ch)
{
    printf("%s\n", str);
    
    int i = 0;
    char neWch[sizeof(str) + 1];
//    printf("%d - %d\n", sizeof(str), sizeof(neWch));
    while (str[i] != '\0') {
//        printf("%c\n", str[i]);
        if ((i) > sizeof(str)){
        neWch[i] = str[i];
        }
        else newch[]
        i ++;
    }
    neWch[sizeof(str)] = ch;
    printf("%s\n", neWch);
    printf("\n\n\n\n");
}


void newChForward(char *str, char ch)
{
    printf("%s\n", str);
    
    int i = 0;
    char neWch[sizeof(str) + 1];
//    printf("%d - %d\n", sizeof(str), sizeof(neWch));
    neWch[0] = ch;
    while (str[i] != '\0') {
//        printf("%c\n", str[i]);
        neWch[i + 1] = str[i];
        i ++;
    }
    printf("%s\n", neWch);
    printf("\n\n\n\n");
}


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
    printf("\n\n\n\n");
}


int main()
{
//    deleteProbel("  1 2  44");
//    newChForward("1234", '0');
    newChBackward("1234", '0');
    return 0;
}
