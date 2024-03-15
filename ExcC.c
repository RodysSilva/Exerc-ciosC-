
//Descrição do Exercício 1 a ser solucionado.
//1-Escreva um programa para escrever quando inicializado “Olá aluno hoje é sextafeira”
//Resolução do Exercício 1 - Codificação:
#include <stdio.h>
#include <locale.h>
void main(void) {
 setlocale(LC_ALL, "Portuguese");
 // imprime na tela o que foi pedido
 printf("olá aluno hoje é sexta feira \n");
}


//Descrição do Exercício 2 a ser solucionado.
//2-Dado a entrada via teclado do nome de usuário (seu nome) escrever na tela “Bemvindo nome de usuário”
//Resolução do Exercício 2 - Codificação:
#include <stdio.h>
#include <locale.h>
void main(void) {
 setlocale(LC_ALL, "Portuguese");
//inicia variáveis
 char xlr8[30];
//imprime na tela
 printf("digite o seu nome: ");
 scanf("%s",&xlr8);
 printf("Bem-vindo: %s", xlr8);
}


//Descrição do Exercício 3 a ser solucionado.
//3-Dado de entrada um numeral escrever na tela “O número digitado foi: numeral”
//Resolução do Exercício 3 - Codificação:
#include <stdio.h>
#include <locale.h>
void main(void) {
 setlocale(LC_ALL, "Portuguese");
 int rodrigo;
//pede o número que vai ser usado
 printf("digite um número");
 scanf("%d",&rodrigo);
 printf("O número digitado foi: %d", rodrigo);
}


//Descrição do Exercício 4 a ser solucionado.
//4-Dado de entrada um valor lógico escrever na tela “O valor oposto é: valor lógico”
//Resolução do Exercício 4 - Codificação:
#include<stdio.h>
#include <locale.h>
#include<stdlib.h>
#include<stdbool.h>
void main(void) {
 setlocale(LC_ALL, "Portuguese");
 bool rods;
// pede o valor para ser inserido
 printf("digite um valor verdadeiro ou falso (0 ou 1): ");
 scanf("%d",&rods);
 printf("O valor oposto é: %d ", !rods);
}


//Descrição do Exercício 5 a ser solucionado.
//5-Dado de entrada dois valores numéricos fazer a subtração e apresentar ao usuário.
//Resolução do Exercício 5 - Codificação:
#include <stdio.h>
#include <locale.h>
#include <math.h>
void main(void) {
 setlocale(LC_ALL, "Portuguese");
//inicia as variáveis
 int rods1;
 int rods2;
// pede os valores
 printf("digite o número 1: ");
 scanf("%d",&rods1);
 printf("digite o número 2: ");
 scanf("%d",&rods2);
 int rods3 = rods1 - rods2;
 printf("O número digitado foi: %d", rods3);
}


//Descrição do Exercício 6 a ser solucionado.
//6-Escreva um programa que imprima os 10 primeiros números negativos.
//Resolução do Exercício 6 - Codificação:
#include <stdio.h>
#include <locale.h>
#include <math.h>
void main(void) {
setlocale(LC_ALL, "Portuguese");
int i;
int rods[10] = {-1, -2, -3, -4, -5, -6, -7,-8,-9,-10};
// exibe os valores negativos
for(i = 0; i <10; i++){
printf("%d \n", rods[i]);
}
}


//Descrição do Exercício 7 a ser solucionado.
//7-Dado um número verificar se ele é maior que 10.
//usuário.
//Resolução do Exercício 7 - Codificação:
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include<stdlib.h>
void main(void) {
setlocale(LC_ALL, "Portuguese");
int rods;
//pede o número
 printf("Digite um número: ");
 scanf("%d",&rods);
// o if e else verificam se o número é maior ou menor que 10
if(rods > 10){
 printf("Número é maior que 10");
 }
 else if(rods == 10){
 printf("Número é 10");
 }
else{
 printf("Número é menor que 10");
 }
}


//Descrição do Exercício 8 a ser solucionado.
//8-Dado um número verificar se ele é positivo ou negativo.
//Resolução do Exercício 8 - Codificação:
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include<stdlib.h>
void main(void) {
setlocale(LC_ALL, "Portuguese");
int rods;
 printf("Digite um número: ");
 scanf("%d",&rods);
// verifica se os números são positivos ou negativos
if(rods >= 0 ){
 printf("Número é positivo");
 }
else{
 printf("Número é negativo");
 }
}


//Descrição do Exercício 9 a ser solucionado.
//9-Dados dois números diferentes dividir o maior pelo menor valor.
//Resolução do Exercício 9- Codificação:
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include<stdlib.h>
void main(void) {
setlocale(LC_ALL, "Portuguese");
float rods1;
float rods2;
float rods;
// pedi os números
 printf("Digite dois números diferentes: ");
 scanf("%f",&rods1);
 scanf("%f",&rods2);
if(rods1 == rods2){
 printf("Números são iguais;");
 }
 else{
 if(rods1 > rods2){
 rods = rods1/rods2;
 printf("O valor é: %f",rods);
 }
 else{
 rods = rods2/rods1;
 printf("O valor é: %f",rods);
 }
 }
}


//Descrição do Exercício 10 a ser solucionado.
//10-Dado a formula Y = X + 5 escrever o valor de Y quando dado uma entrada de X.
//Resolução do Exercício 10- Codificação:
#include <stdio.h>
#include <locale.h>
#include<stdlib.h>
#include <math.h>
void main(void) {
setlocale(LC_ALL, "Portuguese");
int X;
 printf("Digite X: ");
 scanf("&d", X);
 // executa a formula
int Y = X + 5;
 printf("Y é: %d", Y);
}


//Descrição do Exercício 11 a ser solucionado.
//11-Dado a formula media = n1+n2+n3/3 escrever o valor do resultado ao usuário
//quando ele digitar o valor de n1, n2 e n3.
//Resolução do Exercício 11- Codificação:
#include <stdio.h>
#include <locale.h>
#include<stdlib.h>
#include <math.h>
void main(void) {
setlocale(LC_ALL, "Portuguese");
//inicia as variaveis
 int n1;
 int n2;
 int n3;
 printf("digite o número 1: ");
 scanf("%d",&n1);
 printf("digite o número 2: ");
 scanf("%d",&n2);
 printf("digite o número 3: ");
 scanf("%d",&n3);
 int media = n1 + n2 + n3 / 3;
 printf("O número digitado foi: %d", media);
}


//Descrição do Exercício 12 a ser solucionado.
//12-Dado a formula A/5 = B/(A+2) calcular o valor de B dado uma entrada de A.
//Resolução do Exercício 12- Codificação:
#include <stdio.h>
#include <locale.h>
#include <math.h>
void main(void) {
setlocale(LC_ALL, "Portuguese");
// inicia variaveis
 float A;
 float B;
 printf("digite o número A: ");
 scanf("%f",&A);
 A = A/5;
 printf("O número A é: %f\n", A);
 B = A*(A + 2);
 printf("O número B é: %f", B);
}


//Descrição do Exercício 13 a ser solucionado.
//13-Escreva um programa que dados 15 números, imprima seus quadrados, obs: você
//não precisa necessariamente imprimir no final.
//Resolução do Exercício 13- Codificação:
#include <stdio.h>
#include <locale.h>
void main(void) {
setlocale(LC_ALL, "Portuguese");
// inicia variáveis
int r;
int i = 0;
 printf("digite 15 números: \n");
for(i = 0; i<15; i++){
printf("digite o número:");
scanf("%d",&r);
r = r * r;
printf("número quadrado: %d\n", r);
}
}


//Descrição do Exercício 14 a ser solucionado.
//14-Escreva um programa que dado o primeiro número e a razão de uma sequência,
//imprima seus dez primeiros termos: você não precisa necessariamente imprimir no final.
//Resolução do Exercício 14- Codificação:
#include <stdio.h>
#include<stdlib.h>
#include <locale.h>
void main(void) {
setlocale(LC_ALL, "Portuguese");
int ini;
int r;
int i = 0;
// pede os números
 printf("digite o primeiro número: ");
 scanf("%d",&ini);
 printf("digite a razão da sequencia: ");
 scanf("%d",&r);
 printf("Os números da sequencia são:\n");
for(i = 1; i<=10; i++){
ini += r;
printf("%d\t", ini);
}
}


//Descrição do Exercício 15 a ser solucionado.
//15-Escreva um programa que imprima na tela o fatorial de um programa recebido
//Ex: 5! = 5 x 4 x 3 x 2 x 1
//Ex: 0! = 1
Resolução do Exercício 15- Codificação:
#include <stdio.h>
#include<stdlib.h>
#include <locale.h>
void main(void) {
 setlocale(LC_ALL, "Portuguese");
 int xz;
 int intpos;
 int fat3 = 1;
 printf("Digite o número que será usado: ");
 scanf("%d", &intpos);
// imprime o fatorial
 printf("O fatorial de %d! = ", intpos);
 if (intpos == 0) {
 printf("1\n");
 } else {
 for (xz= intpos; xz > 1; xz--) {
 printf("%d x ", xz);
 fat3 *= xz;
 }
 printf("1 = %d\n", fat3);
 }
}


//16-Escreva um programa que dado um número, ele diz se é um número primo ou não.
//Resolução do Exercício 16- Codificação:
#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
int main() {
setlocale(LC_ALL, "Portuguese");
 int primo;
int i;
int finale = 0;
 printf("Digite um número para identificar se é primo: ");
 scanf("%d", &primo);
 //verifica se ele é primo ou não
 for (i = 2; i <= primo / 2; i++) {
 if (primo % i == 0) {
 finale++;
 break;
 }
 }
 if (finale == 0)
 printf("%d é primo", primo);
 else
 printf("%d não é primo", primo);
 return 0;
}


//Descrição do Exercício 17 a ser solucionado.
//17-Escreva um programa que imprime todos os números primos positivos a partir do
//zero até um número digitado.
//Resolução do Exercício 17- Codificação:
#include <stdio.h>
#include<stdlib.h>
#include <locale.h>
void main(void) {
 setlocale(LC_ALL, "Portuguese");
// inicia variáveis
 int intp;
 int yz;
 int lara;
 int uma;
 printf("Escreva um número para identificar os primos (tem que ser inteiro e positivo):
");
 scanf("%d", &intp);
 // identifica os primos
 for (yz = 2; yz <= intp; yz++) {
 uma = 1;
 for (lara = 2; lara <= yz/2; lara++) {
 if (yz % lara == 0) {
 uma = 0;
 break;
 }
 }
 if (uma == 1) {
 printf("%d ", yz);
 }
 }
}


//Descrição do Exercício 18 a ser solucionado.
//18-Escreva um programa que imprima o seguinte vetor:
//1 1 2 3 5 8 13 21 34 55 86 144 233 300 533
//Resolução do Exercício 18- Codificação:
#include <stdio.h>
#include<stdlib.h>
#include <locale.h>
void main(void) {
 setlocale(LC_ALL, "Portuguese");
 int fatfat[] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 86, 144, 233, 300, 533};
 printf("O seguinte vetor: \n");
 int yx;
 int men = sizeof(fatfat) / sizeof(fatfat[0]);
// imprime o vetor
 for (yx = 0; yx < men; yx++) {
 printf("%d ", fatfat[yx]);
 }
}


//Descrição do Exercício 19 a ser solucionado.
//19-Escreva um programa que imprima a seguinte matriz:
//10 11 12 13 14
//15 16 17 18 19
//20 21 22 23 24
//25 26 27 28 29
//30 31 32 33 34
//Resolução do Exercício 19- Codificação:
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(void) {
 setlocale(LC_ALL, "Portuguese");
// coloca a matriz
 int matvet[5][5] = {
 {10, 11, 12, 13, 14},
 {15, 16, 17, 18, 19},
 {20, 21, 22, 23, 24},
 {25, 26, 27, 28, 29},
 {30, 31, 32, 33, 34}
 };
 printf("A matriz é: \n");
 int yr;
 int xz;
 for (yr = 0; yr < 5; yr++) {
 for (xz = 0; xz < 5; xz++) {
 printf("%d \t", matvet[yr][xz]);
 }
 printf("\n");
 }
}


//20-Escreva um programa que imprime os seguintes dados na tela
//1-1 1-2 1-3 1-4 1-5
//2-1 2-2 2-3 2-4 2-5
//3-1 3-2 3-3 3-4 3-5
//4-1 4-2 4-3 4-4 4-5
//5-1 5-2 5-3 5-4 5-5
//Resolução do Exercício 20- Codificação:
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
void main(void) {
 setlocale(LC_ALL, "Portuguese");
 int xlr8;
 int gwen;
 printf("Os dados pedidos são: \n");

//imprime a matriz
 for (xlr8 = 1; xlr8 <= 5; xlr8++) {
 for (gwen = 1; gwen <= 5; gwen++) {
 printf("%d-%d\t", xlr8, gwen);
 }
 printf("\n");
 }
}
