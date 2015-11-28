#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*Lista de Exercícios de Matrizes */

/* Q1: Faça uma função que preencha uma linha matriz 20x20 com 1 e outra linha com 0
 e assim sucessivamente.*/
void preenche_matriz_um_e_zero(int mat[20][20])
{
    int i,j;
    for(i=0;i<20;i++){
        for(j=0;j<20;j++){
            if(i%2==0){
                mat[i][j]=1;
            }else{
                mat[i][j]=0;
            }
        }

    }
}

/* Q2: Preencha uma matriz 20x20 com 1 na diagonal principal e com 0 os demais elementos.*/
void preenche_matriz_diagonal_principal(int mat[20][20])
{
    int i,j;
    for(i=0;i<20;i++){
        for(j=0;j<20;j++){
            if(i==j)
                mat[i][j]=1;
            else
                mat[i][j]=0;
        }

    }
}

/* Q3: Receba uma matriz 4x4 e retorne o maior valor.*/
int maior_valor_matriz(int matriz[4][4])
{
    int maior=0,i,j;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(matriz[i][j]>maior)
                maior=matriz[i][j];
        }
    }
	return maior;
}

/* Q4: Somar todos os elementos da matriz 3x3 passada */
int somar_todos(int matriz[3][3])
{
    int soma=0,i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            soma+=matriz[i][j];
        }
    }
    return soma;
}

/* Q5: Receba uma matriz 4 x 4 e troque os valores da 1ª linha pelos da 4ª linha, vice-e-versa. */
void troca_valores(int matriz[4][4])
{
    int i;
    int v[4];
    for(i=0;i<4;i++){
        v[i]=matriz[0][i];
        matriz[0][i]=matriz[3][i];
        matriz[3][i]=v[i];
    }
}

/* Q6: Matriz simetrica: Verifique se uma matriz e simetrica.
OBS:Lembre que uma matriz M é simétrica é aquela onde M[linha,coluna] = M[coluna,linha].*/

bool matriz_simetrica(int matriz[3][3])
{
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(matriz[i][j]!=matriz[j][i])
                return false;
        }
    }
    return true;
}

/* Q7: Quadrado magico - Dizemos que uma matriz quadrada inteira é um quadrado magico se a soma dos
elementos de cada linha, a soma dos elementos de cada coluna e a soma dos
elementos das diagonais principal e secundária são todas iguais.
Retorne verdadeiro(true) se a matriz é uma quadrado mágico ou falso(false) caso contrário*/

bool quadrado_magico(int matriz[3][3])
{
    int i,j,v[8],n=0,l;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            v[n]+=matriz[i][j];
        }
        n++;
    }
    n=3;
    for(j=0;j<3;j++){
        for(i=0;i<3;i++){
            v[n]+=matriz[i][j];
        }
        n++;
    }
        if(j==i)
            v[6]+=matriz[i][j];
            if(i+j==2)
                v[7]+=matriz[i][j];
    for(l=0; l<8; l++){
        if(v[l]!=v[l+1])
            return false;
    }
    return true;
}

/*Funções de teste*/

void test_preenche_matriz_um_e_zero()
{
    printf("------------------------------------\n");
    printf("teste Q1: preenche_matriz_um_e_zero.\n");
    bool certo = true;
    int mat[20][20];
    preenche_matriz_um_e_zero(mat);
    int i=0,j=0;
    for(i=0; i<20;i++){
        for(j=0;j<20;j++){
            if((i%2==0 && mat[i][j]!=1) || (i%2==1 && mat[i][j]!=0)) certo = false;
        }
    }

    if(certo){
        printf("    ok.\n");
    }else{
        printf("    not ok.\n");
    }
}


void test_preenche_matriz_diagonal_principal()
{
    printf("------------------------------------\n");
    printf("teste Q2: preenche_matriz_diagonal_p.\n");
    bool certo = true;
    int mat[20][20];
    preenche_matriz_diagonal_principal(mat);
    int i=0,j=0;
    for(i=0; i<20;i++){
        for(j=0;j<20;j++)
            if((i==j && mat[i][j]!=1) || (i!=j && mat[i][j]!=0)) certo = false;
    }

    if(certo){
        printf("    ok.\n");
    }else{
        printf("    not ok.\n");
    }

}

void test_maior_valor_matriz()
{
    printf("------------------------------------\n");
    printf("teste Q3: maior_valor_matriz.\n");
    int mat[4][4]={{1,2,3,4},{4,5,6,7},{7,8,9,10},{10,11,12,13}};

    if(maior_valor_matriz(mat) == 13){
        printf("    ok.\n");
    }else{
        printf("    not ok.\n");
    }
}


void test_somar_todos()
{
    printf("------------------------------------\n");
    printf("teste Q4: somar_todos.\n");
    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    if(somar_todos(mat) == 45){
        printf("    ok.\n");
    }else{
        printf("    not ok.\n");
    }
}

void test_troca_valores()
{
    printf("------------------------------------\n");
    printf("teste Q5: troca_valores.\n");
    int mat[4][4]={{1,2,3,4},{1,1,1,1},{1,1,1,1},{4,3,2,1}};
    troca_valores(mat);
    if(mat[0][0]==4 && mat[0][1]==3 && mat[0][2]==2
            && mat[0][3]==1 && mat[3][0]==1 && mat[3][1]==2
            && mat[3][2]==3 && mat[3][3]==4){
        printf("    ok.\n");

    }else{
        printf("    not ok.\n");
    }
}

void test_matriz_simetrica()
{
    printf("------------------------------------\n");
    printf("teste Q6: matriz_simetrica.\n");
    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    if(matriz_simetrica(mat) == false){
        printf("    ok.\n");
    }else{
        printf("    not ok.\n");
    }
}

void test_quadrado_magico()
{
    printf("------------------------------------\n");
    printf("teste Q7: quadrado_magico.\n");
    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    if(quadrado_magico(mat) == false){
        printf("    ok.\n");
    }else{
        printf("    not ok.\n");

    }

}

int main()
{
    /*Chamada das funções de teste.*/
    test_preenche_matriz_um_e_zero();
    test_preenche_matriz_diagonal_principal();
    test_maior_valor_matriz();
    test_somar_todos();
    test_troca_valores();
    test_matriz_simetrica();
    test_quadrado_magico();

    return 0;

}
