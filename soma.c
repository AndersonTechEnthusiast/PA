#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
    int min;
    int max;
    int razao;
    int incrementador;
    int quantidade = 0;
    int primeiro , ultimo;
    int soma;

    printf("🔹 Mínimo: ");
    scanf("%d",&min);
    
    printf("🔸 Máximo: ");
    scanf("%d",&max);
    
    printf("💠 Razão: ");
    scanf("%d",&razao);
    
    printf("𝕌 = {");
    
    for(incrementador=min; incrementador <= max; incrementador++)
    {
        int termo = incrementador * razao;
        if(incrementador == min)
        {
            primeiro = termo;
        }
        if(incrementador == max)
        {
            ultimo = termo;
            printf("%d",termo);
        }
        else
        {
            printf("%d , ",termo);
        }
        quantidade = quantidade + 1;
    }

    printf("};");

    printf("\n__________________________________________________________________________________\n");
    printf("|--------------| SOMA DOS N TERMOS DE UMA PROGRASSÃO ARITIMÉTRICA |--------------|\n");
    printf("📌 1°) Termo: %d\n",primeiro);
    printf("📌 n°) Termo: %d\n",ultimo);
    printf("📌 quantidade: %d\n",quantidade);
    soma = ((primeiro + ultimo) * (quantidade))/2;
    printf("📍 SOMA: %d",soma);
    return 0;
}