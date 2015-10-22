#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//declarações de funções
bool ehPrimo(int n);
int primeirosPrimos(int n);
int somaPrimos(int n);
int naoPrimosMenosPrimo(int n);
int fatorial(int n);
int combinacao(int n, int m);
int main()
{
//    printf("%d",primeirosPrimos(10));

    return 0;
}

bool ehPrimo(int n){
    if(n<=1){
        return false;
    }
    int i;
    for(i=2; i<n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int primeirosPrimos(int n){
    int soma=0;
    int i;
    for(i=1; i<n; i++){
        if(ehPrimo(i)==true){
            soma++;
        }
    }
    return soma;
}

int somaPrimos(int n){
    int soma = 0;
    int i;
    for(i=1; i<n; i++){
        if(ehPrimo(i)==true){
            soma += i;
        }
    }
    return soma;
}

int naoPrimosMenosPrimo(int n){
    int soma = 0;
    int menos = 0;
    int resultado = 0;
    int i;
    for(i=1; i<n; i++){
        if(ehPrimo(i)==true){
            soma++;
        }else{
            menos++;
        }
    }
    return (resultado = soma - menos);
}

int fatorial(int n){
    int i=1;
    int fat=1;;
    while(i<=n){
        fat = fat * n;
    i++;
    }
    return fat;
}

int combinacao(int n, int m){
    int resultado = 0;
    int menos = 0;
    if(m >= n){
        resultado = fatorial(m) / (fatorial(n)*fatorial(m-n));
    }
    return resultado;
}
int aranjo(int n, int m){
    int resultado = 0;
    int menos = 0;
    if(m >= n){
        resultado = fatorial(m) / fatorial(m-n));
    }

}
