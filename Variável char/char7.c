#include <stdio.h>
#include <string.h>

int main(void) {
    char str[] = "Localhost yeah yeah";
    int aux;
    for(aux = 0; aux < strlen(str); aux++) {
        if(str[aux] == ' ') {
            str[aux] = str[aux + 1];
        }
    }
    printf("%s\n", str);
    return 0;
}
