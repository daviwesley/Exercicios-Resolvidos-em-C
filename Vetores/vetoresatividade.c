#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> //biblioteca booleana
/*Cabeçalhos (protótipos) das funções */
int menor(int v[], int tam);
int maior(int v[], int tam);
void copiar(int v1[], int v2[], int tam);
int soma_elementos(int v[], int tam);
bool existe(int v[], int tam, int elem);
int soma_maior_menor(int v[], int tam);
int num_de_repet(int v[], int tam, int elem);
bool sao_iguais(int v1[], int tam1, int v2[], int tam2);
bool elem_comum(int v1[], int tam1, int v2[], int tam2, int elem);
bool esta_contido(int v1[], int tam1, int v2[], int tam2);
void swap_elem(int v1[], int posicao1, int posicao2);

/*Definição das funções */
int menor(int v[], int tam) {
	int  i=0, result=v[i];
	for(i=0;i<tam;i++){
		if(v[i]<result){
			result = v[i];
		}
		}
    return result;
}

int maior(int v[], int tam) {
	int i=0, result=v[i];
	for(i=0;i<tam;i++){
		if(v[i]>result){
			result = v[i];
		}
	}
	
    return result;
}

int soma_maior_menor(int v[], int tam) {
		
	return maior(v, tam) + menor(v, tam);
	}
	


void copiar(int v1[], int v2[], int tam) {
	int i;
	
	for(i=0;i<tam;i++);
		v2[i] = v1[i];

}

int soma_elementos(int v[], int tam) {
	int soma=0, i;
	
	for(i=0;i<tam;i++){
		soma = soma + v[i];
	}
	return soma;
}

bool existe(int v[], int tam, int elem) {
	int i;
	for(i=0;i<tam;i++){
		if(elem==v[i]){
			return true;
		}
	}
    return false;
}

/*Implemente uma função que retorna quantas vezes um elemento se repete dentr de um vetor.
Dica: você pode criar uma variável que é incrementada toda vez que você encontrar o elemento.
*/
int  num_de_repet(int v[], int tam, int elem) {
	int i, aux=0;
	
	for(i=0;i<tam;i++){
		if(v[i]==elem){
			aux++;
		}
	}
	
    return aux;
}

/*Esta função deve retornar true ou false para indicar se dois vetores são
iguais. Dica: São iguais se os tamanhos forem iguais e os elementos forem iguais em valor
e ordem.*/
bool sao_iguais(int v1[], int tam1, int v2[], int tam2) {
	int i, aux=0;
	if(tam1==tam2){
		for(i=0;i<tam1;i++)
		if(v1[i]==v2[i]){
			aux++;
		}
	}
	if(aux==tam1){
		return true;
	}
    return false;
}

/*Verifique se dois vetores compartilham um mesmo elemento entre si.
Dica: esse elemento deve "existir" nos dois vetores.*/
bool elem_comum(int v1[], int tam1, int v2[], int tam2, int elem) {
	int i, aux;
	
	for(i=0;i<tam1;i++){
		if(existe(v1,tam1,elem) == true && existe(v2,tam2,elem) == true){
			return true;
		}
	}
	
    return false;
}


/* Descubra se o vetor v1 está contido em v2 e retorne true se isso ocorrer.
Dica: se todos os elementos de v1 existirem em v2, v1 só pode estar
contido em v2.*/

bool esta_contido(int v1[], int tam1, int v2[], int tam2) {
	int i, aux;
	
	for(i=0;i<tam1;i++){
		if(v1[i]==v2[i]){
			aux++;
		}else{
			return false;
   		}
   		
   		if(aux==tam1){
   			return true;
		   }
	}
}
/*Esta função recebe um vetor e duas posições e inverte os valores contidos
em tais posições do vetor. Dica: talvez seja sábio usar uma variável auxiliar durante a troca.*/
void swap_elem(int v1[], int posicao1, int posicao2) {
	int aux;
	aux = v1[posicao1];
	v1[posicao1] = v1[posicao2];
	v1[posicao2] = aux;
	
}

/*Definição das funções de teste*/
void teste_menor() {
	printf("Teste funcao menor\n");

	int v[] = {1};
	int v1[] = {1, 2, 3};
	int v2[] = {1, 2, 3, 4, 5, 0};
	int v3[] = {1, 2, 3, -1, 5, 0};
	int v4[] = {1, 1, 1, 1, 1, 0};

	if(menor(v, 1) == 1 && menor(v1, 3) == 1 && menor(v2, 6) == 0
        && menor(v3, 6) == -1 && menor(v4, 6) == 0){
            printf("    ok! \n");
    }else{
        printf("    not ok!\n");
    }
}

void teste_maior() {
	printf("Teste funcao maior\n");

	int v[] = {1};
	int v1[] = {1, 2, 3};
	int v2[] = {1, 2, 3, 4, 5, 0};
	int v3[] = {1, 2, 3, -1, 6, 9};
	int v4[] = {1, 1, 1, 1, 1, 0};

	if(maior(v, 1) == 1 && maior(v1, 3) == 3 && maior(v2, 6) == 5
        && maior(v3, 6) == 9 && maior(v4, 6) == 1){
            printf("    ok! \n");
    }else{
        printf("    not ok!\n");
    }

}

void testeSomaMaiorMenor(){
	printf("Teste funcao testeSomaMaiorMenor\n");
	
	int v1[] = {1, 2, 3};
	int v2[] = {1, 2, 3, 4, 5, 0};
	int v3[] = {1, 2, 3, -1, 6, 9};
	int v4[] = {1, 1, 1, 1, 1, 0};
	
	if(soma_maior_menor(v1, 3) == 4 && soma_maior_menor(v2, 6) == 5 && soma_maior_menor(v3, 6) == 8 && soma_maior_menor(v4, 6) == 1 ){
		printf("   ok! \n");
	}else{
		printf("    not ok! \n");
	}
	
}

void testeCopiar(){
	printf("Teste funcao testeCopia\n");
	printf("Sem teste pois a funcao eh Void!\n");
}

void testeSomaElementos(){
	printf("Teste funcao testeSomaElementos\n");
	
	int v[] = {1};
	int v1[] = {1, 2, 3};
	int v2[] = {1, 2, 3, 4, 5, 0};
	int v3[] = {1, 2, 3, -1, 6, 9};
	int v4[] = {1, 1, 1, 1, 1, 0};
	
	if(soma_elementos(v, 1) == 1 && soma_elementos(v1, 3) == 6 && soma_elementos(v2, 6) == 15 && soma_elementos(v3, 6) == 20 && soma_elementos(v4, 6) == 5){
		printf("   ok! \n");
	}else{
		printf("    not ok! \n");
	}
		
}

void testeExiste(){
	printf("Teste funcao testeExiste\n");
	
	int v[] = {1};
	int v1[] = {1, 2, 3};
	int v2[] = {1, 2, 3, 4, 5, 0};
	int v3[] = {1, 2, 3, -1, 6, 9};
	int v4[] = {1, 1, 1, 1, 1, 0};
	
	if(existe(v,1,1) == true && existe(v1,3,4) == false && existe(v2,6,0) == true && existe(v3,6,9) == true && existe(v4,6,-5) == false){
			printf("   ok! \n");
	}else{
		printf("    not ok! \n");
	}
}

void testeNumDeRepet(){
	printf("Teste funcao testeNumDeRepet\n");
	
	int v[] = {1};
	int v1[] = {1, 2, 3};
	int v2[] = {1, 2, 3, 4, 5, 0};
	int v3[] = {1, 2, 3, -1, 6, 9};
	int v4[] = {1, 1, 1, 1, 1, 0};
	
	if(num_de_repet(v,1,1) == 1 && num_de_repet(v1,3,4) == 0 && num_de_repet(v4,6,1) == 5){
			printf("   ok! \n");
	}else{
		printf("    not ok! \n");
	}
	
	
}

void testeSaoIguais(){
	printf("Teste funcao testeSaoIguais\n");
	
	int v[] = {1};
	int v1[] = {1};
	int v2[] = {1, 2, 3, 4, 5, 0};
	int v3[] = {1, 2, 3, -1, 6, 9};
	int v4[] = {1, 1, 1, 1, 1, 0};
	int v5[] = {1, 1, 1};
	
	if(sao_iguais(v,1,v1,1) == true && sao_iguais(v2,6,v3,6) == false && sao_iguais(v4,6,v5,3) == false){
		printf("   ok! \n");
	}else{
		printf("    not ok! \n");
	}
}

void testeElemComum(){
	printf("Teste funcao testeElemComum\n");	
	
	int v[] = {1};
	int v1[] = {1};
	int v2[] = {1, 2, 3, 4, 5, 0};
	int v3[] = {1, 2, 3, -1, 6, 9};
	int v4[] = {1, 1, 1, 1, 1, 0};
	int v5[] = {1, 1, 1};
	
	if(elem_comum(v,1,v1,1,1) == true && elem_comum(v2,6,v3,6,10) == false && elem_comum(v4,6,v5,3,1) == true){
		printf("   ok! \n");
	}else{
		printf("    not ok! \n");
	}

}
	
void testeEstaContido(){
	printf("Teste funcao testeEstaContido\n");
	
	int v[] = {1};
	int v1[] = {1};
	int v2[] = {1, 2, 3, 4, 5, 0};
	int v3[] = {1, 2, 3, -1, 6, 9};
	int v4[] = {1, 1, 1, 1, 1, 0};
	int v5[] = {1, 1, 1};
	
	if(esta_contido(v,1,v2,6) == true && esta_contido(v3,6,v4,6) == false && esta_contido(v5,3,v4,6) == true){
		printf("   ok! \n");
	}else{
		printf("    not ok! \n");
	}
	
}

void testeSwapElem(){
	printf("Teste funcao testeSwapElem\n");
	printf("Sem teste pois a funcao eh Void!\n");
}

/**TODO: Implemente as outras funções de teste
testeCopiar();
testeSomaElementos();
testeExiste();
testeSomaMaiorMenor();
testeNumDeRepet();
testeSaoIguais();
testeElemComum();
testeEstaContido();
testeSwapElem(); */

/*Função principal*/
int main()
{
    teste_menor();
    teste_maior();
    testeSomaMaiorMenor();
    testeCopiar();
    testeSomaElementos();
    testeExiste();
    testeNumDeRepet();
    testeSaoIguais();
    testeElemComum();
    testeEstaContido();
    testeSwapElem();
    /**Chame aqui as outras funções de teste que vc implementou.*/
    printf("Implemente as outras funcoes de teste.\n");
    return 0;

}
