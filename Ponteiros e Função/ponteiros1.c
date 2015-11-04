#include <stdio.h>
//tente compilar o código sem os ponteiros pra ver a diferença
int f (int x, int *y)
{
	*y = x + 3;
	return y + 4;
}

int main(){
	
	int a =5, b = 3;
	int c = f(a,b);
	
	printf("a = %d, b = %d, c = %d",a,b,c);
}
