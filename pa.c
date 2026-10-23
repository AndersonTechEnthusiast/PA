#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main()
{
    int min;
    int max;
    int razao;
    int incrementador;

    printf("🔹 Mínimo: ");
    scanf("%d",&min);
    printf("🔸 Máximo: ");
    scanf("%d",&max);
    printf("💠 Razão: ");
    scanf("%d",&razao);
    printf("𝕌 = {");
    for(incrementador = min; incrementador <= max; incrementador++){
        int termo = incrementador * razao;
        if(incrementador == max)
        {
            printf("%d",termo);
        }
        else
        {
            printf("%d , ",termo);
        }
        
    }
    printf("};");
    return 0;
}