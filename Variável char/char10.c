#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int minuscula(char str[])
{
    int i = 0;
    int minusculo = 0;
    int maiuscula = 0;
    while(i < strlen(str)){
        if(str[i] >='a' && str[i] <='z'){
            minusculo++;
        }
        if(str[i] >='A' && str[i] <='Z'){
            maiuscula++;
        }
        i++;
    }
    if(minusculo == strlen(str)){
                return 1;
    }
    if(maiuscula == strlen(str)){
        return 0;
    }
}

int main()
{
    if(minuscula("DAVI")==1){
        printf("Minusculo");
    }
    else{
        printf("Maiusculo");
    }
    return 0;
}
