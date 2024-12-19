#include <stdio.h>
#include <locale.h>

void Metro_Centrimetro_Milimetro();
void ConversorDeTemperaturas();
void ConversorDeVelocidades();

int main() {
    setlocale(LC_ALL, ""); 
    int opcao = 0;

    printf("\n\n------------ Conversor de unidades em C ------------\n");
    printf("[1] Conversor de metro, centímetro e milímetro\n");

    printf("[4] Conversor de metro, centímetro e milímetro\n");
    printf("[5] Conversor de km/h, m/s e mph\n");
    printf("------------------------------------------------------\n\n");

    printf("Escolha a opção: ");
    scanf("%d", &opcao); // escolhendo a opção

    switch(opcao){
        case 1: 
            Metro_Centrimetro_Milimetro();
            break;
    case 2:
        break;

    case 3:
        break;
    
    case 4:
        ConversorDeTemperaturas();
        break;

    case 5:
        ConversorDeVelocidades();
        break;

        default:
            printf("opção inválida!");
            break;
    }
    return 0;
}

// funções do menu
void Metro_Centrimetro_Milimetro(){
    int opcao = 0;
    float grandeza = 0;

    printf("\n\n Indique a grandeza do valor que você vai inserir\n");
    printf("[1] Metro\n");
    printf("[2] Centímetro\n");
    printf("[3] Milímetro\n");

    printf("Escolha a opção: ");
    scanf("%d", &opcao); // escolhendo a opção

    printf("Digite a garandeza: ");
    scanf("%f", &grandeza); // escolhendo a opção

    switch(opcao){
        case 1: 
            printf("\nValor digitado %.2f em metros\n", grandeza);
            printf("Valor em centímetros: %.2f cm\n", grandeza * 100);
            printf("Valor em milímetros: %.2f mm\n", grandeza * 1000);
            break;
        case 2: 
            printf("\nValor digitado %.2f em Centímetro\n", grandeza);
            printf("Valor em metros: %.2f m\n", grandeza / 100);
            printf("Valor em milímetros: %.2f mm\n", grandeza * 10);
            break;
        case 3: 
            printf("\nValor digitado %.2f em Milímetro\n", grandeza);
            printf("Valor em metros: %.2f m\n", grandeza / 1000);
            printf("Valor em centímetros: %.2f cm\n", grandeza / 10);
            break;

        default:
            printf("opção inválida!");
            break;
    }
}

// Cria função para o menu de temperaturas
void ConversorDeTemperaturas(){
    int opcao = 0;
    float temperatura = 0;

    printf("\n\n Indique a unidade da temperatura que você vai inserir\n");
    printf("[1] Kelvin\n");
    printf("[2] Celsius\n");
    printf("[3] Fahrenheit\n");

    //Pede ao usuário a qual a unidade inicial
    printf("Escolha a opção: ");
    scanf("%d", &opcao); 

    //Pede ao usuário a temepratura
    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    //Verifica a opção e imprime as suas conversões para as outras unidades
    switch(opcao){
        case 1:
            printf("\nValor digitado: %.2f K\n", temperatura);
            printf("Valor em Celsius: %.2f °C\n", temperatura - 273.15);
            printf("Valor em Fahrenheit: %.2f °F\n", (temperatura - 273.15) * 9/5 + 32);
            break;
        case 2:
            printf("\nValor digitado: %.2f °C\n", temperatura);
            printf("Valor em Kelvin: %.2f K\n", temperatura + 273.15);
            printf("Valor em Fahrenheit: %.2f °F\n", temperatura * 9/5 + 32);
            break;
        case 3:
            printf("\nValor digitado: %.2f °F\n", temperatura);
            printf("Valor em Celsius: %.2f °C\n", (temperatura - 32) * 5/9);
            printf("Valor em Kelvin: %.2f K\n", ((temperatura - 32) * 5/9) + 273.15);
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }
}

void ConversorDeVelocidades(){
    int opcao = 0;
    float velocidade = 0;

    printf("\n\n Indique a unidade da velocidade que você vai inserir\n");
    printf("[1] m/s\n");
    printf("[2] Km/h\n");
    printf("[3] Mph\n");

    printf("Escolha a opção: ");
    scanf("%d", &opcao); 

    printf("Digite a velocidade: ");
    scanf("%f", &velocidade);

    switch(opcao){
        case 1:
            printf("\nValor digitado: %.2f m/s\n", velocidade);
            printf("Valor em Km/h: %.2f km/h\n", velocidade * 3.6);
            printf("Valor em Mph: %.2f mph", velocidade * 2.237);
            break;
        case 2:
            printf("\nValor digitado: %.2f km/h\n", velocidade);
            printf("Valor em M/s: %.2f m/s\n", velocidade / 3.6);
            printf("Valor em Mph: %.2f mph\n", velocidade / 1.609);
            break;
        case 3:
            printf("\nValor digitado: %.2f mph\n", velocidade);
            printf("Valor em M/s: %.2f m/s\n", velocidade / 2.237);
            printf("Valor em Km/h: %.2f km/h\n", velocidade * 1.609);
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }
}