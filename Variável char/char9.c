#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

    char frase[500], frase1[500], c;
    int i, j=0, flag = 0;

    for (i=0; c!='\n'; i++)
    {    scanf("%c", &c);
        frase[i] = c;
    }
    frase[i-1] = '\0';
    for (i=0; i < strlen(frase); i++)
    {    if (frase[i] == ' ')
        {    if (flag == 0)
            {    frase1[j] = ' ';
                j++;
                flag = 1;
            }
        }
        else
        {    frase1[j] = frase[i];
            j++;
            flag = 0;
        }

    }
    frase1[i] = '\0';

    printf("%s\n", frase1);
}
