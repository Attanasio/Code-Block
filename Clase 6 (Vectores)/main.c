#include <stdio.h>
#include <stdlib.h>

#define TAM 3

int main()
{
    int legajos [TAM];
    int edades [TAM];
    char sexos [TAM];
    int notasP1 [TAM];
    int notasP2 [TAM];
    float promedios [TAM];

    for (int i=0; i < TAM; i++)
    {

        printf("Ingrese legajo: \n");
        fflush(stdin);
        scanf("%d",&legajos);


        printf("Ingrese edad: \n");
        fflush(stdin);
        scanf("%d",&edades);


        printf("Ingrese sexo: \n");
        fflush(stdin);
        scanf("%c",&sexos);


        printf("Ingrese nota de parcial 1: \n");
        fflush(stdin);
        scanf("%d",&notasP1);


        printf("Ingrese nota de parcial 2: \n");
        fflush(stdin);
        scanf("%d",&notasP2);

    }



    printf("  %d    %d   %c   %d   %d   %2.f",&legajos,edades,sexos,notasP1,notasP2,promedios);

}
