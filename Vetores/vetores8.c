#include <stdio.h>

int main()
{
    //inica todos os indicies
	int n[5]={23,24,65,97,12};
    int i;
	//começa na ordem descrescente de 5 a 0
    for(i=5;i>=0;i--){
        printf("%d\n",n[i]);
    }
    return 0;
}
