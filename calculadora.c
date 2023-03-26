#include <stdio.h>
#include <stdlib.h>

void soma(){ //Função soma.
    float a,b; //Variaveis dos valores a serem operados.
    printf("Soma selecionada\nValores a serem somados: \n"); //Imprime que está procurando os valores a ler.
    scanf("%f %f", &a, &b);//Le os valores.
    printf("O resultado da soma é:\n          %.2f\n\n",a + b); //Imprime o resultado da soma.
}
void subtracao(){ //Função subtração
    float a,b; //Variaveis dos valores a serem operados.
    printf("Subtração selecionada\nValores a serem subtraidos: \n");//Imprime que está procurando os valores a ler.
    scanf("%f %f", &a, &b);//Le os valores.
    printf("O resultado da subtração é:\n          %.2f\n\n",a - b);//Imprime o resultado da subtração.
}
void multiplicacao(){ //Função multiplicação.
    float a,b; //Variaveis dos valores a serem operados.
    printf("Multiplicação selecionada\nValores a serem multiplicados: \n");//Imprime que está procurando os valores a ler.
    scanf("%f %f", &a, &b);//Le os valores.
    printf("O resultado da subtração é:\n          %.2f\n\n",a * b);//Imprime o resultado da multiplicação.
}


void divisao(){//Função divisão.
    float a,b;//Variaveis dos valores a serem operados.
    printf("Divisão selecionada\nValores a serem divididos: \n");//Imprime que está procurando os valores a ler.
    scanf("%f %f", &a, &b);//Le os valores.
    if(b != 0){ //se o divisor for diferente de 0.
        printf("O resultado da divisão é:\n          %.2f\n\n",a / b);//Imprime o resultado da divisão.
    }
    else{ //se não for diferente de 0.
        printf("Divisão por 0!\n");//Imprime um aviso e retorna ao menu.
    }
}

void menu() //Menu que imprime as operações disponiveis.
{
    int op;//Operação a ser usado em valor int afim de ser usada no switch.
    while(op != 5){//Enquanto a operação for diferente do código de saida executar.
        printf("Selecione a operação:\n1 - Soma\t2 - Subtração\t3 - Multiplicação\t4 - Divisão\t5 - Sair\n"); //Imprime as operações disponiveis e seus valores.
        scanf("%d", &op);//Lê o codigo da operação.
        switch (op) //Switch com o código.
        {
            case 1: //Caso 1 - Soma.
                soma(); //Chamada da função.
                break;//Quebra. Evita verificações desnecessarias.
            case 2: //Caso 2 - Subtração.
                subtracao(); //Chamada da função.
                break;//Quebra.
            case 3://Caso 3 - Divisão.
                multiplicacao(); //Chamada da função.
                break; //Quebra.
            case 4:
                divisao();
                break;
            case 5://Caso 5 - Encerrar a algoritmo.
                printf("Encerrando.\n");//Imprime que está encerrando
                exit(0);//Sái do algoritmo.
                break;//Quebra.
            default://Caso demais numeros
                printf("Operação inválida."); //Imprime que a operação é invalida.
                break;//Quebra.
        }
    }
}



int main()//Classe principal.
{
    menu();//Inicia a função menu.
}