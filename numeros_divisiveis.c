#include <stdio.h>

int main()
{
    int valor1, valor2;


    printf("Digite 2 numeros inteiros: \n");
    scanf("%i %i", &valor1, &valor2);

    if (valor2 == 0)
        printf("O valor 0 nao pode ser dividido\n");
    else{
        if (valor1 % valor2 == 0)
            printf("%i numero e divisivel por %i \n", valor1, valor2);
        else
            printf("%i nao e' divisivel por %i \n", valor1, valor2);

        }



    return 0;
}
