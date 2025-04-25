#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// INICIANDO A PROGRAMAÇÃO E DEFINIÇÃO DAS VARIAVEIS

int main(){

int carta,populacao,ponto,cartab,populacaob,pontob,spoder,spoderb,cartat,populacaot,pontot,spodert;
float area,pib,areab,pibb,densidade,pibpc,densidadeb,pibpcb,areat,pibt,densidadet,pibpct;
char estado1[15],codigo[3],cidade[20],estado2b[15],codigob[3],cidadeb[20];
char estado[20],estadob[20];

//INSERINDO O VALOR DE CADA VARIAVEL

printf ("Digite o numero da carta:");
scanf ("%d",&carta);

printf ("Digite o estado:");
scanf (" %s",estado);

printf ("Digite o codigo:");
scanf ("%s",codigo);

printf ("Digite o nome da cidade:");
scanf ("%s",cidade);

printf ("Digite a população:");
scanf ("%d",&populacao);

printf ("Digite a area:");
scanf ("%f",&area);

printf ("Digite o pib:");
scanf ("%f",&pib);

printf ("Digite a quantidade de pontos turisticos:");
scanf ("%d",&ponto);
printf("\n");

printf ("Digite o numero da segunda carta:");
scanf ("%d",&cartab);

printf ("Digite o estado:");
scanf (" %s",estadob);

printf ("Digite o codigo:");
scanf ("%s",codigob);

printf ("Digite o nome da cidade:");
scanf ("%s",cidadeb);

printf ("Digite a população:");
scanf ("%d",&populacaob);

printf ("Digite a area:");
scanf ("%f",&areab);

printf ("Digite o pib:");
scanf ("%f",&pibb);

printf ("Digite a quantidade de pontos turisticos:");
scanf ("%d",&pontob);


//CALCULANDO AS VARIAVEIS DENSIDADE E PIBPC DE CADA CARTA

densidade = populacao /area;
pibpc = pib / populacao;
densidadeb = populacaob / areab;
pibpcb = pibb / populacaob;

//IMPRIMINDO AS CARTAS

printf ("\n");
printf ("CARTA: %d\n",carta);
printf ("ESTADO: %s\n",estado);
printf ("CODIGO: %s\n",codigo);
printf ("CIDADE: %s\n",cidade);
printf ("POPULAÇÃO: %d\n",populacao);
printf ("AREA: %.2f km²\n",area);
printf ("PIB: %.2f bilhões de reais\n",pib);
printf ("NUMEROS DE PONTOS TURISTICOS: %d\n",ponto);
printf ("DENSIDADE: %.2f HAB/KM²\n",densidade);
printf ("PIB PER CAPITA: %.2f REAIS\n",pibpc);

printf ("\n");
printf ("CARTA: %d\n",cartab);
printf ("ESTADO: %s\n",estadob);
printf ("CÓDIGO: %s\n",codigob);
printf ("CIDADE: %s\n",cidadeb);
printf ("POPULAÇÃO: %d\n",populacaob);
printf ("AREA: %.2f km²\n",areab);
printf ("PIB: %.2f bilhões de reais\n",pibb);
printf ("NUMERO DE PONTOS TURISTICOS: %d\n",pontob);
printf ("DENSIDADE: %.2f HAB/KM²\n",densidadeb);
printf ("PIB PER CAPITA: %.2f REAIS\n",pibpcb);
printf ("\n");

// REALIZAÇÃO DOS COMPARATIVOS NAS VARIAVEIS

populacaot = populacao > populacaob? 1:0;
areat = area > areab? 1:0;
pibt = pib > pibb? 1:0;
pontot = ponto > pontob? 1:0;
densidadet = densidade > densidadeb?1:0;
pibpct = pibpc > pibpcb?1:0;
spoder =(float)populacao+area+pib+ponto-densidade+pibpc;
spoderb = (float)populacaob+areab+pibb+pontob-densidadeb+pibpcb;
spodert = spoder > spoderb?1:0;


printf ("\n");
printf ("\n");
printf ("\n");


//COMPARAÇÃO POR ATRIBUTO

int atributo,atributo2,atributo3,atributo4,atributo5;
int quantidadeatributos;

for (quantidadeatributos = 0; quantidadeatributos<1 || quantidadeatributos>5; quantidadeatributos)
{
printf("Informe a quantidade de atributos a serem comparados\n");
scanf("%d",&quantidadeatributos);

if (quantidadeatributos <=5 && quantidadeatributos>0)
{
   printf("Vamos comparar %d atributos das cartas\n",quantidadeatributos);
}
else{printf("Valor invalido\n");}}


printf("\n");

//BATALHA DOS ATRIBUTOS
//COMPARANDO 1 ATRIBUTO

printf ("*** BATALHA ENTRE ATRIBUTOS ***\n");
printf ("\n");
if (quantidadeatributos==1)
{

printf ("OPÇÕES DE ATRIBUTOS\n");
printf ("1.POPULAÇÃO\n");
printf ("2.AREA\n");
printf ("3.PIB\n");
printf ("4.PONTOS TURISTICOS\n");
printf ("5.DENSIDADE DEMOGRAFICA\n");
printf ("\n");
printf ("ESCOLHA UM ATRIBUTO:\n");
scanf("%d",&atributo);


switch (atributo)
{
case 1:
    printf ("ATRIBUTO POPULAÇÃO ESCOLHIDO\n");
    printf ("POPULAÇÃO DA CARTA 1 É: %d E POPULAÇÃO DA CARTA 2 É: %d\n",populacao ,populacaob);
    if (populacao > populacaob){printf ("A CARTA 1 VENCEU  %d habitantes\n",populacao);}
else if (populacao < populacaob) {printf ("A CARTA 2 VENCEU %d habitantes \n",populacaob);}
else {printf("JOGO EMPATADO,AS CARTAS TEM O MESMO VALOR: %d HABITANTES\n",populacao);}
    break;

case 2:
   printf ("ATRIBUTO AREA ESCOLHIDO\n");
   printf ("A AREA DA CARTA 1 É: %f E A AREA DA CARTA 2 É: %f\n",area , areab);
   if (area > areab){ printf ("A CARTA 1 VENCEU %.2f KM²\n",area);}
else if (area < areab){printf("A CARTA 2 VENCEU %.2f KM²\n",areab);}
else {printf("JOGO EMPATADO,AS CARTAS TEM O MESMO VALOR: %.2f KM²\n",area);}
break;

case 3:
   printf ("ATRIBUTO PIB ESCOLHIDO\n");
   printf ("O PIB DA CARTA 1 É: %f E O PIB DA CARTA 2 É: %f\n",pib , pibb);
   if (pib > pibb){ printf ("A CARTA 1 VENCEU %.2f KM²\n",pib);}
else if (pib < pibb){printf("A CARTA 2 VENCEU %.2f KM²\n",pibb);}
else {printf("JOGO EMPATADO,AS CARTAS TEM O MESMO VALOR: %.2f KM²\n",pib);}
break;

case 4:
   printf ("ATRIBUTO PONTOS TURISTICOS ESCOLHIDO\n");
   printf ("PONTOS TURISTICOS DA CARTA 1 É: %d E PONTOS TURISTICOS DA CARTA 2 É: %d\n",ponto, pontob);
   if (ponto > pontob){ printf ("A CARTA 1 VENCEU %d PONTOS TURISTICOS\n",ponto);}
else if (ponto < pontob){printf("A CARTA 2 VENCEU %d PONTOS TURISTICOS\n",pontob);}
else {printf("JOGO EMPATADO,AS CARTAS TEM O MESMO VALOR: %d PONTOS TURISTICOS\n",ponto);}
break;

case 5:
   printf ("ATRIBUTO DENSIDADE ESCOLHIDO\n");
   printf ("A DENSIDADE DA CARTA 1 É: %f E A DENSIDADE DA CARTA 2 É: %f\n",densidade , densidadeb);
   if (densidade > densidadeb){ printf ("A CARTA 2 VENCEU %.2f HAB/KM²\n",densidade);}
else if (densidade < densidadeb){printf("A CARTA 1 VENCEU %.2f HAB/KM²\n",densidadeb);}
else {printf("JOGO EMPATADO,AS CARTAS TEM O MESMO VALOR: %.2f HAB/KM²\n",densidade);}
break;

default:
printf("OPÇÃO INVÁLIDA");
}
}

//COMPARANDO 2 ATRIBUTOS

else if(quantidadeatributos==2)
 {
printf ("OPÇÕES DE ATRIBUTOS\n");
printf ("1.POPULAÇÃO\n");
printf ("2.AREA\n");
printf ("3.PIB\n");
printf ("4.PONTOS TURISTICOS\n");
printf ("5.DENSIDADE DEMOGRAFICA\n");
printf ("\n");
printf ("ESCOLHA O PRIMEIRO ATRIBUTO:\n");
scanf("%d",&atributo);
printf ("ESCOLHA O SEGUNDO ATRIBUTO:\n");
scanf("%d",&atributo2);


switch (atributo)
{
case 1:
    printf ("\nATRIBUTO POPULAÇÃO ESCOLHIDO\n");
    printf ("POPULAÇÃO DA CARTA 1 É: %d E POPULAÇÃO DA CARTA 2 É: %d\n",populacao ,populacaob);
    if (populacao > populacaob){printf ("A CARTA 1 VENCEU  %d habitantes\n",populacao);}
else if (populacao < populacaob) {printf ("A CARTA 2 VENCEU %d habitantes \n",populacaob);}
else {printf("JOGO EMPATADO,AS CARTAS TEM O MESMO VALOR: %d HABITANTES\n",populacao);}
    break;

case 2:
   printf ("\nATRIBUTO AREA ESCOLHIDO\n");
   printf ("A AREA DA CARTA 1 É: %f E A AREA DA CARTA 2 É: %f\n",area , areab);
   if (area > areab){ printf ("A CARTA 1 VENCEU %f KM²\n",area);}
else if (area < areab){printf("A CARTA 2 VENCEU %f KM²\n",areab);}
else {printf("JOGO EMPATADO,AS CARTAS TEM O MESMO VALOR: %f KM²\n",area);}
break;

case 3:
   printf ("\nATRIBUTO PIB ESCOLHIDO\n");
   printf ("O PIB DA CARTA 1 É: %f E O PIB DA CARTA 2 É: %f\n",pib , pibb);
   if (pib > pibb){ printf ("A CARTA 1 VENCEU %.2f KM²\n",pib);}
else if (pib < pibb){printf("A CARTA 2 VENCEU %.2f KM²\n",pibb);}
else {printf("JOGO EMPATADO,AS CARTAS TEM O MESMO VALOR: %f KM²\n",pib);}
break;

case 4:
   printf ("\nATRIBUTO PONTOS TURISTICOS ESCOLHIDO\n");
   printf ("PONTOS TURISTICOS DA CARTA 1 É: %d E PONTOS TURISTICOS DA CARTA 2 É: %d\n",ponto, pontob);
   if (ponto > pontob){ printf ("A CARTA 1 VENCEU %d PONTOS TURISTICOS\n",ponto);}
else if (ponto < pontob){printf("A CARTA 2 VENCEU %d PONTOS TURISTICOS\n",pontob);}
else {printf("JOGO EMPATADO,AS CARTAS TEM O MESMO VALOR: %d PONTOS TURISTICOS\n",ponto);}
break;

case 5:
   printf ("\nATRIBUTO DENSIDADE ESCOLHIDO\n");
   printf ("A DENSIDADE DA CARTA 1 É: %f E A DENSIDADE DA CARTA 2 É: %f\n",densidade , densidadeb);
   if (densidade > densidadeb){ printf ("A CARTA 2 VENCEU %f HAB/KM²\n",densidade);}
else if (densidade < densidadeb){printf("A CARTA 1 VENCEU %f HAB/KM²\n",densidadeb);}
else {printf("JOGO EMPATADO,AS CARTAS TEM O MESMO VALOR: %f HAB/KM²\n",densidade);}
break;

default:
printf("OPÇÃO INVÁLIDA");}

switch (atributo2)
{
case 1:
    printf ("\nATRIBUTO POPULAÇÃO ESCOLHIDO\n");
    printf ("POPULAÇÃO DA CARTA 1 É: %d E POPULAÇÃO DA CARTA 2 É: %d\n",populacao ,populacaob);
    if (populacao > populacaob){printf ("A CARTA 1 VENCEU  %d habitantes\n",populacao);}
else if (populacao < populacaob) {printf ("A CARTA 2 VENCEU %d habitantes \n",populacaob);}
else {printf("JOGO EMPATADO,AS CARTAS TEM O MESMO VALOR: %d HABITANTES\n",populacao);}
    break;

case 2:
   printf ("\nATRIBUTO AREA ESCOLHIDO\n");
   printf ("A AREA DA CARTA 1 É: %f E A AREA DA CARTA 2 É: %f\n",area , areab);
   if (area > areab){ printf ("A CARTA 1 VENCEU %f KM²\n",area);}
else if (area < areab){printf("A CARTA 2 VENCEU %f KM²\n",areab);}
else {printf("JOGO EMPATADO,AS CARTAS TEM O MESMO VALOR: %f KM²\n",area);}
break;

case 3:
   printf ("\nATRIBUTO PIB ESCOLHIDO\n");
   printf ("O PIB DA CARTA 1 É: %f E O PIB DA CARTA 2 É: %f\n",pib , pibb);
   if (pib > pibb){ printf ("A CARTA 1 VENCEU %.2f KM²\n",pib);}
else if (pib < pibb){printf("A CARTA 2 VENCEU %.2f KM²\n",pibb);}
else {printf("JOGO EMPATADO,AS CARTAS TEM O MESMO VALOR: %f KM²\n",pib);}
break;

case 4:
   printf ("\nATRIBUTO PONTOS TURISTICOS ESCOLHIDO\n");
   printf ("PONTOS TURISTICOS DA CARTA 1 É: %d E PONTOS TURISTICOS DA CARTA 2 É: %d\n",ponto, pontob);
   if (ponto > pontob){ printf ("A CARTA 1 VENCEU %d PONTOS TURISTICOS\n",ponto);}
else if (ponto < pontob){printf("A CARTA 2 VENCEU %d PONTOS TURISTICOS\n",pontob);}
else {printf("JOGO EMPATADO,AS CARTAS TEM O MESMO VALOR: %d PONTOS TURISTICOS\n",ponto);}
break;

case 5:
   printf ("\nATRIBUTO DENSIDADE ESCOLHIDO\n");
   printf ("A DENSIDADE DA CARTA 1 É: %f E A DENSIDADE DA CARTA 2 É: %f\n",densidade , densidadeb);
   if (densidade > densidadeb){ printf ("A CARTA 2 VENCEU %f HAB/KM²\n",densidade);}
else if (densidade < densidadeb){printf("A CARTA 1 VENCEU %f HAB/KM²\n",densidadeb);}
else {printf("JOGO EMPATADO,AS CARTAS TEM O MESMO VALOR: %f HAB/KM²\n",densidade);}
break;

default:
printf("OPÇÃO INVÁLIDA");}
}

// COMPARANDO 3 ATRIBUTOS

else if(quantidadeatributos==3)
{printf ("OPÇÕES DE ATRIBUTOS\n");
   printf ("1.POPULAÇÃO\n");
   printf ("2.AREA\n");
   printf ("3.PIB\n");
   printf ("4.PONTOS TURISTICOS\n");
   printf ("5.DENSIDADE DEMOGRAFICA\n");
   printf ("\n");
   printf ("ESCOLHA O PRIMEIRO ATRIBUTO:\n");
   scanf("%d",&atributo);
   printf ("ESCOLHA O SEGUNDO ATRIBUTO:\n");
   scanf("%d",&atributo2);
   printf ("ESCOLHA O TERCEIRO ATRIBUTO:\n");
   scanf("%d",&atributo3);
   

   
   switch (atributo)
   {
   case 1:
       printf ("\nATRIBUTO POPULAÇÃO ESCOLHIDO\n");
       printf ("POPULAÇÃO DA CARTA 1 É: %d E POPULAÇÃO DA CARTA 2 É: %d\n",populacao ,populacaob);
       if (populacao > populacaob){printf ("A CARTA 1 VENCEU  %d habitantes\n",populacao);}
   else if (populacao < populacaob) {printf ("A CARTA 2 VENCEU %d habitantes \n",populacaob);}
   else {printf("JOGO EMPATADO,AS CARTAS TEM O MESMO VALOR: %d HABITANTES\n",populacao);}
       break;
   
   case 2:
      printf ("\nATRIBUTO AREA ESCOLHIDO\n");
      printf ("A AREA DA CARTA 1 É: %f E A AREA DA CARTA 2 É: %f\n",area , areab);
      if (area > areab){ printf ("A CARTA 1 VENCEU %f KM²\n",area);}
   else if (area < areab){printf("A CARTA 2 VENCEU %f KM²\n",areab);}
   else {printf("JOGO EMPATADO,AS CARTAS TEM O MESMO VALOR: %f KM²\n",area);}
   break;
   
   case 3:
      printf ("\nATRIBUTO PIB ESCOLHIDO\n");
      printf ("O PIB DA CARTA 1 É: %f E O PIB DA CARTA 2 É: %f\n",pib , pibb);
      if (pib > pibb){ printf ("A CARTA 1 VENCEU %.2f KM²\n",pib);}
   else if (pib < pibb){printf("A CARTA 2 VENCEU %.2f KM²\n",pibb);}
   else {printf("JOGO EMPATADO,AS CARTAS TEM O MESMO VALOR: %f KM²\n",pib);}
   break;
   
   case 4:
      printf ("\nATRIBUTO PONTOS TURISTICOS ESCOLHIDO\n");
      printf ("PONTOS TURISTICOS DA CARTA 1 É: %d E PONTOS TURISTICOS DA CARTA 2 É: %d\n",ponto, pontob);
      if (ponto > pontob){ printf ("A CARTA 1 VENCEU %d PONTOS TURISTICOS\n",ponto);}
   else if (ponto < pontob){printf("A CARTA 2 VENCEU %d PONTOS TURISTICOS\n",pontob);}
   else {printf("JOGO EMPATADO,AS CARTAS TEM O MESMO VALOR: %d PONTOS TURISTICOS\n",ponto);}
   break;
   
   case 5:
      printf ("\nATRIBUTO DENSIDADE ESCOLHIDO\n");
      printf ("A DENSIDADE DA CARTA 1 É: %f E A DENSIDADE DA CARTA 2 É: %f\n",densidade , densidadeb);
      if (densidade > densidadeb){ printf ("A CARTA 2 VENCEU %f HAB/KM²\n",densidade);}
   else if (densidade < densidadeb){printf("A CARTA 1 VENCEU %f HAB/KM²\n",densidadeb);}
   else {printf("JOGO EMPATADO,AS CARTAS TEM O MESMO VALOR: %f HAB/KM²\n",densidade);}
   break;
   
   default:
   printf("OPÇÃO INVÁLIDA");}
   
   switch (atributo2)
   {
   case 1:
       printf ("\nATRIBUTO POPULAÇÃO ESCOLHIDO\n");
       printf ("POPULAÇÃO DA CARTA 1 É: %d E POPULAÇÃO DA CARTA 2 É: %d\n",populacao ,populacaob);
       if (populacao > populacaob){printf ("A CARTA 1 VENCEU  %d habitantes\n",populacao);}
   else if (populacao < populacaob) {printf ("A CARTA 2 VENCEU %d habitantes \n",populacaob);}
   else {printf("JOGO EMPATADO,AS CARTAS TEM O MESMO VALOR: %d HABITANTES\n",populacao);}
       break;
   
   case 2:
      printf ("\nATRIBUTO AREA ESCOLHIDO\n");
      printf ("A AREA DA CARTA 1 É: %f E A AREA DA CARTA 2 É: %f\n",area , areab);
      if (area > areab){ printf ("A CARTA 1 VENCEU %f KM²\n",area);}
   else if (area < areab){printf("A CARTA 2 VENCEU %f KM²\n",areab);}
   else {printf("JOGO EMPATADO,AS CARTAS TEM O MESMO VALOR: %f KM²\n",area);}
   break;
   
   case 3:
      printf ("\nATRIBUTO PIB ESCOLHIDO\n");
      printf ("O PIB DA CARTA 1 É: %f E O PIB DA CARTA 2 É: %f\n",pib , pibb);
      if (pib > pibb){ printf ("A CARTA 1 VENCEU %.2f KM²\n",pib);}
   else if (pib < pibb){printf("A CARTA 2 VENCEU %.2f KM²\n",pibb);}
   else {printf("JOGO EMPATADO,AS CARTAS TEM O MESMO VALOR: %f KM²\n",pib);}
   break;
   
   case 4:
      printf ("\nATRIBUTO PONTOS TURISTICOS ESCOLHIDO\n");
      printf ("PONTOS TURISTICOS DA CARTA 1 É: %d E PONTOS TURISTICOS DA CARTA 2 É: %d\n",ponto, pontob);
      if (ponto > pontob){ printf ("A CARTA 1 VENCEU %d PONTOS TURISTICOS\n",ponto);}
   else if (ponto < pontob){printf("A CARTA 2 VENCEU %d PONTOS TURISTICOS\n",pontob);}
   else {printf("JOGO EMPATADO,AS CARTAS TEM O MESMO VALOR: %d PONTOS TURISTICOS\n",ponto);}
   break;
   
   case 5:
      printf ("\nATRIBUTO DENSIDADE ESCOLHIDO\n");
      printf ("A DENSIDADE DA CARTA 1 É: %f E A DENSIDADE DA CARTA 2 É: %f\n",densidade , densidadeb);
      if (densidade > densidadeb){ printf ("A CARTA 2 VENCEU %f HAB/KM²\n",densidade);}
   else if (densidade < densidadeb){printf("A CARTA 1 VENCEU %f HAB/KM²\n",densidadeb);}
   else {printf("JOGO EMPATADO,AS CARTAS TEM O MESMO VALOR: %f HAB/KM²\n",densidade);}
   break;
   
   default:
   printf("OPÇÃO INVÁLIDA");
   }
   switch (atributo3)
   {
   case 1:
       printf ("\nATRIBUTO POPULAÇÃO ESCOLHIDO\n");
       printf ("POPULAÇÃO DA CARTA 1 É: %d E POPULAÇÃO DA CARTA 2 É: %d\n",populacao ,populacaob);
       if (populacao > populacaob){printf ("A CARTA 1 VENCEU  %d habitantes\n",populacao);}
   else if (populacao < populacaob) {printf ("A CARTA 2 VENCEU %d habitantes \n",populacaob);}
   else {printf("JOGO EMPATADO,AS CARTAS TEM O MESMO VALOR: %d HABITANTES\n",populacao);}
       break;
   
   case 2:
      printf ("\nATRIBUTO AREA ESCOLHIDO\n");
      printf ("A AREA DA CARTA 1 É: %f E A AREA DA CARTA 2 É: %f\n",area , areab);
      if (area > areab){ printf ("A CARTA 1 VENCEU %f KM²\n",area);}
   else if (area < areab){printf("A CARTA 2 VENCEU %f KM²\n",areab);}
   else {printf("JOGO EMPATADO,AS CARTAS TEM O MESMO VALOR: %f KM²\n",area);}
   break;
   
   case 3:
      printf ("\nATRIBUTO PIB ESCOLHIDO\n");
      printf ("O PIB DA CARTA 1 É: %f E O PIB DA CARTA 2 É: %f\n",pib , pibb);
      if (pib > pibb){ printf ("A CARTA 1 VENCEU %.2f KM²\n",pib);}
   else if (pib < pibb){printf("A CARTA 2 VENCEU %.2f KM²\n",pibb);}
   else {printf("JOGO EMPATADO,AS CARTAS TEM O MESMO VALOR: %f KM²\n",pib);}
   break;
   
   case 4:
      printf ("\nATRIBUTO PONTOS TURISTICOS ESCOLHIDO\n");
      printf ("PONTOS TURISTICOS DA CARTA 1 É: %d E PONTOS TURISTICOS DA CARTA 2 É: %d\n",ponto, pontob);
      if (ponto > pontob){ printf ("A CARTA 1 VENCEU %d PONTOS TURISTICOS\n",ponto);}
   else if (ponto < pontob){printf("A CARTA 2 VENCEU %d PONTOS TURISTICOS\n",pontob);}
   else {printf("JOGO EMPATADO,AS CARTAS TEM O MESMO VALOR: %d PONTOS TURISTICOS\n",ponto);}
   break;
   
   case 5:
      printf ("\nATRIBUTO DENSIDADE ESCOLHIDO\n");
      printf ("A DENSIDADE DA CARTA 1 É: %f E A DENSIDADE DA CARTA 2 É: %f\n",densidade , densidadeb);
      if (densidade > densidadeb){ printf ("A CARTA 2 VENCEU %f HAB/KM²\n",densidade);}
   else if (densidade < densidadeb){printf("A CARTA 1 VENCEU %f HAB/KM²\n",densidadeb);}
   else {printf("JOGO EMPATADO,AS CARTAS TEM O MESMO VALOR: %f HAB/KM²\n",densidade);}
   break;
   
   default:
   printf("OPÇÃO INVÁLIDA");
   }
}

// COMPARANDO 4 ATRIBUTOS

else if(quantidadeatributos==4)
{printf ("OPÇÕES DE ATRIBUTOS\n");
   printf ("1.POPULAÇÃO\n");
   printf ("2.AREA\n");
   printf ("3.PIB\n");
   printf ("4.PONTOS TURISTICOS\n");
   printf ("5.DENSIDADE DEMOGRAFICA\n");
   printf ("\n");
   printf ("ESCOLHA O PRIMEIRO ATRIBUTO:\n");
   scanf("%d",&atributo);
   printf ("ESCOLHA O SEGUNDO ATRIBUTO:\n");
   scanf("%d",&atributo2);
   printf ("ESCOLHA O TERCEIRO ATRIBUTO:\n");
   scanf("%d",&atributo3);
   printf("ESCOLHA O QUARTO ATRIBUTO:\n");
   scanf("%d",&atributo4);

   
   switch (atributo)
   {
   case 1:
       printf ("\nATRIBUTO POPULAÇÃO ESCOLHIDO\n");
       printf ("POPULAÇÃO DA CARTA 1 É: %d E POPULAÇÃO DA CARTA 2 É: %d\n",populacao ,populacaob);
       if (populacao > populacaob){printf ("A CARTA 1 VENCEU  %d habitantes\n",populacao);}
   else if (populacao < populacaob) {printf ("A CARTA 2 VENCEU %d habitantes \n",populacaob);}
   else {printf("JOGO EMPATADO,AS CARTAS TEM O MESMO VALOR: %d HABITANTES\n",populacao);}
       break;
   
   case 2:
      printf ("\nATRIBUTO AREA ESCOLHIDO\n");
      printf ("A AREA DA CARTA 1 É: %f E A AREA DA CARTA 2 É: %f\n",area , areab);
      if (area > areab){ printf ("A CARTA 1 VENCEU %f KM²\n",area);}
   else if (area < areab){printf("A CARTA 2 VENCEU %f KM²\n",areab);}
   else {printf("JOGO EMPATADO,AS CARTAS TEM O MESMO VALOR: %f KM²\n",area);}
   break;
   
   case 3:
      printf ("\nATRIBUTO PIB ESCOLHIDO\n");
      printf ("O PIB DA CARTA 1 É: %f E O PIB DA CARTA 2 É: %f\n",pib , pibb);
      if (pib > pibb){ printf ("A CARTA 1 VENCEU %.2f KM²\n",pib);}
   else if (pib < pibb){printf("A CARTA 2 VENCEU %.2f KM²\n",pibb);}
   else {printf("JOGO EMPATADO,AS CARTAS TEM O MESMO VALOR: %f KM²\n",pib);}
   break;
   
   case 4:
      printf ("\nATRIBUTO PONTOS TURISTICOS ESCOLHIDO\n");
      printf ("PONTOS TURISTICOS DA CARTA 1 É: %d E PONTOS TURISTICOS DA CARTA 2 É: %d\n",ponto, pontob);
      if (ponto > pontob){ printf ("A CARTA 1 VENCEU %d PONTOS TURISTICOS\n",ponto);}
   else if (ponto < pontob){printf("A CARTA 2 VENCEU %d PONTOS TURISTICOS\n",pontob);}
   else {printf("JOGO EMPATADO,AS CARTAS TEM O MESMO VALOR: %d PONTOS TURISTICOS\n",ponto);}
   break;
   
   case 5:
      printf ("\nATRIBUTO DENSIDADE ESCOLHIDO\n");
      printf ("A DENSIDADE DA CARTA 1 É: %f E A DENSIDADE DA CARTA 2 É: %f\n",densidade , densidadeb);
      if (densidade > densidadeb){ printf ("A CARTA 2 VENCEU %f HAB/KM²\n",densidade);}
   else if (densidade < densidadeb){printf("A CARTA 1 VENCEU %f HAB/KM²\n",densidadeb);}
   else {printf("JOGO EMPATADO,AS CARTAS TEM O MESMO VALOR: %f HAB/KM²\n",densidade);}
   break;
   
   default:
   printf("OPÇÃO INVÁLIDA");}
   
   switch (atributo2)
   {
   case 1:
       printf ("\nATRIBUTO POPULAÇÃO ESCOLHIDO\n");
       printf ("POPULAÇÃO DA CARTA 1 É: %d E POPULAÇÃO DA CARTA 2 É: %d\n",populacao ,populacaob);
       if (populacao > populacaob){printf ("A CARTA 1 VENCEU  %d habitantes\n",populacao);}
   else if (populacao < populacaob) {printf ("A CARTA 2 VENCEU %d habitantes \n",populacaob);}
   else {printf("JOGO EMPATADO,AS CARTAS TEM O MESMO VALOR: %d HABITANTES\n",populacao);}
       break;
   
   case 2:
      printf ("\nATRIBUTO AREA ESCOLHIDO\n");
      printf ("A AREA DA CARTA 1 É: %f E A AREA DA CARTA 2 É: %f\n",area , areab);
      if (area > areab){ printf ("A CARTA 1 VENCEU %f KM²\n",area);}
   else if (area < areab){printf("A CARTA 2 VENCEU %f KM²\n",areab);}
   else {printf("JOGO EMPATADO,AS CARTAS TEM O MESMO VALOR: %f KM²\n",area);}
   break;
   
   case 3:
      printf ("\nATRIBUTO PIB ESCOLHIDO\n");
      printf ("O PIB DA CARTA 1 É: %f E O PIB DA CARTA 2 É: %f\n",pib , pibb);
      if (pib > pibb){ printf ("A CARTA 1 VENCEU %.2f KM²\n",pib);}
   else if (pib < pibb){printf("A CARTA 2 VENCEU %.2f KM²\n",pibb);}
   else {printf("JOGO EMPATADO,AS CARTAS TEM O MESMO VALOR: %f KM²\n",pib);}
   break;
   
   case 4:
      printf ("\nATRIBUTO PONTOS TURISTICOS ESCOLHIDO\n");
      printf ("PONTOS TURISTICOS DA CARTA 1 É: %d E PONTOS TURISTICOS DA CARTA 2 É: %d\n",ponto, pontob);
      if (ponto > pontob){ printf ("A CARTA 1 VENCEU %d PONTOS TURISTICOS\n",ponto);}
   else if (ponto < pontob){printf("A CARTA 2 VENCEU %d PONTOS TURISTICOS\n",pontob);}
   else {printf("JOGO EMPATADO,AS CARTAS TEM O MESMO VALOR: %d PONTOS TURISTICOS\n",ponto);}
   break;
   
   case 5:
      printf ("\nATRIBUTO DENSIDADE ESCOLHIDO\n");
      printf ("A DENSIDADE DA CARTA 1 É: %f E A DENSIDADE DA CARTA 2 É: %f\n",densidade , densidadeb);
      if (densidade > densidadeb){ printf ("A CARTA 2 VENCEU %f HAB/KM²\n",densidade);}
   else if (densidade < densidadeb){printf("A CARTA 1 VENCEU %f HAB/KM²\n",densidadeb);}
   else {printf("JOGO EMPATADO,AS CARTAS TEM O MESMO VALOR: %f HAB/KM²\n",densidade);}
   break;
   
   default:
   printf("OPÇÃO INVÁLIDA");
   }
   switch (atributo3)
   {
   case 1:
       printf ("\nATRIBUTO POPULAÇÃO ESCOLHIDO\n");
       printf ("POPULAÇÃO DA CARTA 1 É: %d E POPULAÇÃO DA CARTA 2 É: %d\n",populacao ,populacaob);
       if (populacao > populacaob){printf ("A CARTA 1 VENCEU  %d habitantes\n",populacao);}
   else if (populacao < populacaob) {printf ("A CARTA 2 VENCEU %d habitantes \n",populacaob);}
   else {printf("JOGO EMPATADO,AS CARTAS TEM O MESMO VALOR: %d HABITANTES\n",populacao);}
       break;
   
   case 2:
      printf ("\nATRIBUTO AREA ESCOLHIDO\n");
      printf ("A AREA DA CARTA 1 É: %f E A AREA DA CARTA 2 É: %f\n",area , areab);
      if (area > areab){ printf ("A CARTA 1 VENCEU %f KM²\n",area);}
   else if (area < areab){printf("A CARTA 2 VENCEU %f KM²\n",areab);}
   else {printf("JOGO EMPATADO,AS CARTAS TEM O MESMO VALOR: %f KM²\n",area);}
   break;
   
   case 3:
      printf ("\nATRIBUTO PIB ESCOLHIDO\n");
      printf ("O PIB DA CARTA 1 É: %f E O PIB DA CARTA 2 É: %f\n",pib , pibb);
      if (pib > pibb){ printf ("A CARTA 1 VENCEU %.2f KM²\n",pib);}
   else if (pib < pibb){printf("A CARTA 2 VENCEU %.2f KM²\n",pibb);}
   else {printf("JOGO EMPATADO,AS CARTAS TEM O MESMO VALOR: %f KM²\n",pib);}
   break;
   
   case 4:
      printf ("\nATRIBUTO PONTOS TURISTICOS ESCOLHIDO\n");
      printf ("PONTOS TURISTICOS DA CARTA 1 É: %d E PONTOS TURISTICOS DA CARTA 2 É: %d\n",ponto, pontob);
      if (ponto > pontob){ printf ("A CARTA 1 VENCEU %d PONTOS TURISTICOS\n",ponto);}
   else if (ponto < pontob){printf("A CARTA 2 VENCEU %d PONTOS TURISTICOS\n",pontob);}
   else {printf("JOGO EMPATADO,AS CARTAS TEM O MESMO VALOR: %d PONTOS TURISTICOS\n",ponto);}
   break;
   
   case 5:
      printf ("\nATRIBUTO DENSIDADE ESCOLHIDO\n");
      printf ("A DENSIDADE DA CARTA 1 É: %f E A DENSIDADE DA CARTA 2 É: %f\n",densidade , densidadeb);
      if (densidade > densidadeb){ printf ("A CARTA 2 VENCEU %f HAB/KM²\n",densidade);}
   else if (densidade < densidadeb){printf("A CARTA 1 VENCEU %f HAB/KM²\n",densidadeb);}
   else {printf("JOGO EMPATADO,AS CARTAS TEM O MESMO VALOR: %f HAB/KM²\n",densidade);}
   break;
   
   default:
   printf("OPÇÃO INVÁLIDA");
   }

   switch (atributo4)
   {
   case 1:
       printf ("\nATRIBUTO POPULAÇÃO ESCOLHIDO\n");
       printf ("POPULAÇÃO DA CARTA 1 É: %d E POPULAÇÃO DA CARTA 2 É: %d\n",populacao ,populacaob);
       if (populacao > populacaob){printf ("A CARTA 1 VENCEU  %d habitantes\n",populacao);}
   else if (populacao < populacaob) {printf ("A CARTA 2 VENCEU %d habitantes \n",populacaob);}
   else {printf("JOGO EMPATADO,AS CARTAS TEM O MESMO VALOR: %d HABITANTES\n",populacao);}
       break;
   
   case 2:
      printf ("\nATRIBUTO AREA ESCOLHIDO\n");
      printf ("A AREA DA CARTA 1 É: %f E A AREA DA CARTA 2 É: %f\n",area , areab);
      if (area > areab){ printf ("A CARTA 1 VENCEU %f KM²\n",area);}
   else if (area < areab){printf("A CARTA 2 VENCEU %f KM²\n",areab);}
   else {printf("JOGO EMPATADO,AS CARTAS TEM O MESMO VALOR: %f KM²\n",area);}
   break;
   
   case 3:
      printf ("\nATRIBUTO PIB ESCOLHIDO\n");
      printf ("O PIB DA CARTA 1 É: %f E O PIB DA CARTA 2 É: %f\n",pib , pibb);
      if (pib > pibb){ printf ("A CARTA 1 VENCEU %.2f KM²\n",pib);}
   else if (pib < pibb){printf("A CARTA 2 VENCEU %.2f KM²\n",pibb);}
   else {printf("JOGO EMPATADO,AS CARTAS TEM O MESMO VALOR: %f KM²\n",pib);}
   break;
   
   case 4:
      printf ("\nATRIBUTO PONTOS TURISTICOS ESCOLHIDO\n");
      printf ("PONTOS TURISTICOS DA CARTA 1 É: %d E PONTOS TURISTICOS DA CARTA 2 É: %d\n",ponto, pontob);
      if (ponto > pontob){ printf ("A CARTA 1 VENCEU %d PONTOS TURISTICOS\n",ponto);}
   else if (ponto < pontob){printf("A CARTA 2 VENCEU %d PONTOS TURISTICOS\n",pontob);}
   else {printf("JOGO EMPATADO,AS CARTAS TEM O MESMO VALOR: %d PONTOS TURISTICOS\n",ponto);}
   break;
   
   case 5:
      printf ("\nATRIBUTO DENSIDADE ESCOLHIDO\n");
      printf ("A DENSIDADE DA CARTA 1 É: %f E A DENSIDADE DA CARTA 2 É: %f\n",densidade , densidadeb);
      if (densidade > densidadeb){ printf ("A CARTA 2 VENCEU %f HAB/KM²\n",densidade);}
   else if (densidade < densidadeb){printf("A CARTA 1 VENCEU %f HAB/KM²\n",densidadeb);}
   else {printf("JOGO EMPATADO,AS CARTAS TEM O MESMO VALOR: %f HAB/KM²\n",densidade);}
   break;
   
   default:
   printf("OPÇÃO INVÁLIDA");
   }
}


// COMPARANDO TODOS OS ATRIBUTOS
else if(quantidadeatributos==5)
{
   printf ("COMPARAÇÃO DAS CARTAS\n");
if (populacaot == 1){printf ("POPULAÇÃO: a carta 1 venceu %d habitantes\n",populacao);}
else {printf ("POPULAÇÃO: a carta 2 venceu %d habitantes \n",populacaob);}

if (areat == 1 ){printf ("AREA: a carta 1 venceu %.2f km²\n",area);}
else {printf("AREA: a carta 2 venceu %.2f km²\n",areab);}

if (pibt==1){printf ("PIB: a carta 1 venceu %.2f de reais\n",pib);}
else {printf ( "PIB: a carta 2 venceu %.2f de reais\n",pibb);}

if (pontot == 1){printf("PONTOS TURISTICOS: a carta 1 venceu %d pontos turisticos\n",ponto);}
else {printf("PONTOS TURISTICOS: a carta 2 venceu %d pontos turisticos\n",pontob);}

if (densidadet==1){printf ("DENSIDADE: a carta 2 venceu %.2f\n",densidadeb);}
else{printf("DENSIDADE: a carta 1 venceu %.2f\n",densidade);}

if (pibpct==1){printf("PIB PER CAPTA: a carta 1 venceu %.2f\n",pibpc);}
else{printf("PIB PER cAPTA: a carta 2 venceu %.2f\n",pibpcb);}

if(spodert==0){printf("SUPER PODER: a carta 1 venceu %.2f\n",spoder);}
else{printf("SUPER PODER: a carta 2 venceu %.2f\n",spoderb);}

}

else{printf("teste OPÇÃO INVALIDA:\n");}
return 0;


}