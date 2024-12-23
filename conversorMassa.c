#include <stdio.h>
// Conversor de unidades de massa (quilograma, grama, tonelada) - Autor - Ícaro
int main(void) {
  int escolha = 0;
  float origem = 0;
  float destino = 0;
  int sair = 0;
  while (sair == 0) {
    printf("Escolha qual conversao deseja realizar\n1 - Grama para "
           "Quilograma\n2 - Grama para Tonelada\n3 - Quilograma para Grama\n4 "
           "- Quilograma para Tonelada\n5 - Tonelada para Grama\n6 - Tonelada "
           "para Quilograma\n7 - Para encerrar o programa\n");
    scanf("%i", &escolha);
    if(escolha > 0 && escolha < 7){
      printf("Digite o valor que deseja converter\n");
      scanf("%f", &origem);
    }
    switch (escolha) {
    case 1:
      destino = origem / 1000;
      printf("Valor convertido em Quilogramas %.2f\n", destino);
      break;
    case 2:
      destino = origem / 1000000;
      printf("Valor convertido em Toneladas %.2f\n", destino);
      break;
    case 3:
      destino = origem * 1000;
      printf("Valor convertido em Gramas %.2f\n", destino);
      break;
    case 4:
      destino = origem / 1000;
      printf("Valor convertido em Toneladas %.2f\n", destino);
      break;
    case 5:
      destino = origem * 1000000;
      printf("Valor convertido em Gramas %.2f\n", destino);
      break;
    case 6:
      destino = origem * 1000;
      printf("Valor convertido em Quilogramas %.2f\n", destino);
      break;
    case 7:
      sair = 1;
      break;
    default:
      printf("Opção invalida\n");
      break;
    }
  }
}