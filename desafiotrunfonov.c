#include<stdio.h>

//Desafio Super Trunfo Estados
//Este inicio serve como ação de cartas para o nivel novato

int main(){
    /*cada estado terá uma letra de A a H, tipo char*/ 
    char Estado[20];
    char codigo_carta[20];
    char nome_cidade[20];
    int população, pontos_turisticos;
    float area, pib;
    /*após essa introdução da 1ª carta*/
    prinf("Nome do Estado: \n");
    scanf("%s", &Estado);
    prinf("Código da Carta: \n");
    scanf("%s", &codigo_carta);
    prinf("Nome da Cidade: \n");
    scanf("%s", &nome_cidade);
    prinf("População: \n");
    scanf("%d", &população);
    prinf("Área: \n");
    scanf("%f", &area);
    prinf("PIB: \n");
    scanf("%d", &pib);
    prinf("Pontos Turísticos: \n");
    scanf("%d", &pontos_turisticos);

    


}
