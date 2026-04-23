#include <stdio.h>
#include <windows.h>
    int main(){
        SetConsoleOutputCP(65001); // Configura a saída do console para UTF-8

        int escolhaJogador;

        // CARTA 01 - VARIÁVEIS
        char estado1;
        char codigodacarta1[4];
        char nomedacidade1[50];
        unsigned long int populacao1;
        float area1;
        float pib1;
        int turisticos1;
        double densidadePopulacional1;
        double PIBpercapita1;
        float SuperPoder1; 
               

        // CARTA 02 - VARIÁVEIS
        char estado2;
        char codigodacarta2[4];
        char nomedacidade2[50];
        unsigned long int populacao2;
        float area2;
        float pib2;
        int turisticos2;
        float densidadePopulacional2;
        float PIBpercapita2;
        float SuperPoder2;
        float resultado;
        
                

        // DADOS DA CARTA 01
        printf("Digite o Estado, na forma de uma letra de 'A' a 'H' (representando um dos oito estados): \n");
        scanf(" %c", &estado1);

        printf("Digite o Código da Carta, A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
        scanf("%3s", codigodacarta1);

        printf("Digite o Nome da Cidade: \n");
        scanf("%s", nomedacidade1); 
        
        printf("Digite a População (o número de habitantes da cidade): \n");
        scanf("%d", &populacao1);

        printf("Digite a Área da Cidade (a área da cidade em quilômetros quadrados): \n");
        scanf("%f", &area1);

        printf("Digite o PIB da cidade (Produto Interno Bruto): \n");
        scanf("%f", &pib1);

        printf("Digite o Número de Pontos Turísticos da Cidade (a quantidade de pontos turísticos da cidade): \n");
        scanf("%d", &turisticos1);

        densidadePopulacional1 = (float) populacao1 / area1; //adquirido apos a entrada de dados.
        PIBpercapita1 = (float) pib1 / populacao1; //adquirido apos a entrada de dados.
        SuperPoder1 = (float) (populacao1 + area1 + pib1 + turisticos1 + PIBpercapita1 + 1/densidadePopulacional1);



        printf("\n");
        
        printf("Carta 1: \n");
        printf("Estado: %c \n", estado1);
        printf("Código: %s \n", codigodacarta1);
        printf("Nome da Cidade: %s \n", nomedacidade1);
        printf("População: %u \n", populacao1);
        printf("Área: %.2f \n", area1);
        printf("PIB: %.2f \n", pib1);
        printf("Número de Pontos Turísticos: %d \n", turisticos1);
        printf("Densidade Populacionatl: %.2f,\n", densidadePopulacional1);
        printf("PIB per Capital: %.2f,\n", PIBpercapita1);
        printf("Superpoder: %.2f,\n", SuperPoder1);


        // DADOS DA CARTA 02
        printf("Digite o Estado, na forma de uma letra de 'A' a 'H' (representando um dos oito estados): \n");
        scanf(" %c", &estado2);

        printf("Digite o Código da Carta, A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
        scanf("%3s", codigodacarta2);

        printf("Digite o Nome da Cidade: \n");
        scanf("%s", nomedacidade2); 
        
        printf("Digite a População (o número de habitantes da cidade): \n");
        scanf("%d", &populacao2);

        printf("Digite a Área da Cidade (a área da cidade em quilômetros quadrados): \n");
        scanf("%f", &area2);

        printf("Digite o PIB da cidade (Produto Interno Bruto): \n");
        scanf("%f", &pib2);

        printf("Digite o Número de Pontos Turísticos da Cidade (a quantidade de pontos turísticos da cidade): \n");
        scanf("%d", &turisticos2);

        densidadePopulacional2 = (float) populacao2 / area2; //adquirido apos a entrada de dados.
        PIBpercapita2 = (float) pib2 / populacao2; //adquirido apos a entrada de dados.
        SuperPoder1 = (float) (populacao2 + area2 + pib2 + turisticos2 + PIBpercapita2 + 1/densidadePopulacional2);


        printf("\n");
        
        printf("Carta 2: \n");
        printf("Estado: %c \n", estado2);
        printf("Código: %s \n", codigodacarta2);
        printf("Nome da Cidade: %s \n", nomedacidade2);
        printf("População: %u \n", populacao2);
        printf("Área: %.2f \n", area2);
        printf("PIB: %.2f \n", pib2);
        printf("Número de Pontos Turísticos: %d \n", turisticos2);
        printf("Densidade Populacionatl: %.2f,\n", densidadePopulacional2);
        printf("PIB per Capital: %.2f,\n", PIBpercapita2);
        printf("Superpoder: %.2f,\n", SuperPoder2);

        printf("\n");

        printf("Comparação de cartas: \n");
        printf("Escolha um atributo para comparar as cartas:\n");
        printf("1: População\n");
        printf("2: Área\n"); 
        printf("3: PIB\n");
        printf("4: Número de Pontos Turísticos\n");
        printf("5: Densidade Populacional\n");
        printf("6: PIB per Capita\n");
        printf("7: SuperPoder\n");
        scanf("%d", &escolhaJogador);

         switch (escolhaJogador)
    {
    case 1:
        printf("Você escolheu População.\n");
        break;
    case 2:
        printf("Você escolheu Área.\n");
        break;
    case 3:
        printf("Você escolheu PIB.\n");
        break;
    case 4:
        printf("Você escolheu Número de Pontos Turísticos.\n");
        break;
    case 5:
        printf("Você escolheu Densidade Populacional.\n");
        break;
    case 6:
        printf("Você escolheu PIB per Capita.\n");
        break;
    case 7:
        printf("Você escolheu SuperPoder.\n");
        break;
    default:
        printf("Opção inválida.\n");
        break;
    }

        if (escolhaJogador == 1) {
        printf("Comparação de cartas (Atributo: População):\n");
        if(populacao1 > populacao2){
        printf("Carta 1 (%s) venceu!\n", nomedacidade1);
        } else if (populacao1 < populacao2){
        printf("Carta 2 (%s) venceu!\n", nomedacidade2);
        } else {
        printf("Empate!\n");
        }
        
        } else if (escolhaJogador == 2) {
        printf("Comparação de cartas (Atributo: Área):\n");
        if(area1 > area2){
        printf("Carta 1 (%s) venceu!\n", nomedacidade1);
        } else if (area1 < area2){
        printf("Carta 2 (%s) venceu!\n", nomedacidade2);
        } else {
        printf("Empate!\n");
        }
        
        } else if (escolhaJogador == 3) {
        printf("Comparação de cartas (Atributo: PIB):\n");
        if(pib1 > pib2){
        printf("Carta 1 (%s) venceu!\n", nomedacidade1);
        } else if (pib1 < pib2){
        printf("Carta 2 (%s) venceu!\n", nomedacidade2);
        } else {
        printf("Empate!\n");
        }
        
        } else if (escolhaJogador == 4) {
        printf("Comparação de cartas (Atributo: Número de Pontos Turísticos):\n");
        if(turisticos1 > turisticos2){
        printf("Carta 1 (%s) venceu!\n", nomedacidade1);
        } else if (turisticos1 < turisticos2){
        printf("Carta 2 (%s) venceu!\n", nomedacidade2);
        } else {
        printf("Empate!\n");
        }
        
        } else if (escolhaJogador == 5) {
        printf("Comparação de cartas (Atributo: Densidade Populacional):\n");
        if(densidadePopulacional1 < densidadePopulacional2){
        printf("Carta 1 (%s) venceu!\n", nomedacidade1);
        } else if (densidadePopulacional1 > densidadePopulacional2){
        printf("Carta 2 (%s) venceu!\n", nomedacidade2);
        } else {
        printf("Empate!\n");
        }
       
        } else if (escolhaJogador == 6) {
        printf("Comparação de cartas (Atributo: Pib Per Capita):\n");
        if(PIBpercapita1 > PIBpercapita2){
        printf("Carta 1 (%s) venceu!\n", nomedacidade1);
        } else if (PIBpercapita1 < PIBpercapita2){
        printf("Carta 2 (%s) venceu!\n", nomedacidade2);
        } else {
        printf("Empate!\n");
        }
        
        } else if (escolhaJogador == 7) {
        printf("Comparação de cartas (Atributo: SuperPoder):\n");
        if(SuperPoder1 > SuperPoder2){
        printf("Carta 1 (%s) venceu!\n", nomedacidade1);
        } else if (SuperPoder1 < SuperPoder2){
        printf("Carta 2 (%s) venceu!\n", nomedacidade2);
        } else {
        printf("Empate!\n");
        }
    
    }
    
        return 0;
    
    }