//NOME: FELIPE MARTINS DE SOUZA
//PROF: DANIEL
//LABORATORIO DE PROGRAMACAO





#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao, l, c, matrizX[3][3], matrizY[3][3], resultado[3][3];
    const int maxL = 3, maxC = 3, ordem = 3;

    do
    {
        do
        {
            printf("Escolha uma das opcoes a seguir:\n\n");
            printf("1-Calcular a subtracao das duas matrizes\n");
            printf("2-Calcular a multiplicacao das duas matrizes\n");
            printf("3-Determinar se as duas matrizes sao triangular superior\n");
            printf("4-Determinar se as duas matrizes sao triangular inferior\n");
            printf("5-Determinar se as duas matrizes sao simetrica\n");
            printf("6-Determinar se as duas matrizes sao anti-simetrica\n");
            printf("7-Determinar se as duas matrizes sao iguais\n");
            printf("8-Sair\n\n");
            printf("Opcao:");
            scanf("%d", &opcao);

            if (!(opcao > 0 && opcao <= 8))
            {
                printf("Opcao invalida!\n");
                printf("Pressione uma tecla qualquer!");
                getchar();
                getchar();
            }

            system("cls");
        } while (!(opcao > 0 && opcao <= 8));

        switch (opcao)
        {
        case 1:
            printf("SUBTRACAO\n\n");
            for (l = 0; l < maxL; l++)
                for (c = 0; c < maxC; c++)
                {
                    printf("Entre com o valor de matrizX[%d][%d]:", l, c);
                    scanf("%d", &matrizX[l][c]);
                }

            printf("\n");

            for (l = 0; l < maxL; l++)
                for (c = 0; c < maxC; c++)
                {
                    printf("Entre com o valor de matrizY[%d][%d]:", l, c);
                    scanf("%d", &matrizY[l][c]);
                    resultado[l][c] = matrizX[l][c] - matrizY[l][c];
                }

            for (l = 0; l < maxL; l++)
            {
                for (c = 0; c < maxC; c++)
                {
                    printf("|%d|\t", resultado[l][c]);
                }
                printf("\n");
            }
            break;

        case 2:
            printf("MULTIPLICACAO\n\n");
            int k, somaprod;
 
            for (l = 0; l < maxL; l++)
                for (c = 0; c < maxC; c++){
                    printf("Entre com o valor de matrizX[%d][%d]:", l, c);
                    scanf("%d", &matrizX[l][c]);
                }
 
            for (l = 0; l < maxL; l++)
                for (c = 0; c < maxC; c++){
                    printf("Entre com o valor de matrizY[%d][%d]:", l, c);
                    scanf("%d", &matrizY[l][c]);
                }
            for (l = 0; l < maxL; l++)
                for (c = 0; c < maxC; c++){
                    somaprod = 0;
                    for (k = 0; k < 3; k++){
                        somaprod = somaprod+matrizX[l][k] * matrizY[k][c];
                        resultado[l][c] = somaprod;
                    }
                }
                for (l = 0; l < maxL; l++){
                    for (c = 0; c < maxC; c++){
                        printf("|%d|\t", resultado[l][c]);
                    }
                printf("\n");
            }  
        break;

        case 3:

            printf("TRIANGULAR SUPERIOR\n\n");
            int XehTriangularS = 1, YehTriangularS = 1;

            for (l = 0; l < maxL; l++)
                for (c = 0; c < maxC; c++)
                {
                    printf("Entre com o valor de matrizX[%d][%d]:", l, c);
                    scanf("%d", &matrizX[l][c]);
                }

            printf("\n");

            for (l = 0; l < maxL; l++)
                for (c = 0; c < maxC; c++)
                {
                    printf("Entre com o valor de matrizY[%d][%d]:", l, c);
                    scanf("%d", &matrizY[l][c]);
                }

            for (l = 0; l < maxL; l++)
            {
                for (c = 0; c < l; c++)
                {
                    if (matrizX[l][c] != 0)
                    {
                        XehTriangularS = 0;
                        break;
                    }
                }
                if (XehTriangularS == 0)
                    break;
            }

            for (l = 0; l < maxL; l++)
            {
                for (c = 0; c < l; c++)
                {
                    if (matrizY[l][c] != 0)
                    {
                        YehTriangularS = 0;
                        break;
                    }
                }
                if (YehTriangularS == 0)
                    break;
            }

            if (XehTriangularS == 1)
                printf("\nA matriz X e triangular superior\n");
            else
                printf("\nA matriz X nao e triangular superior\n");

            if (YehTriangularS == 1)
                printf("A matriz Y e triangular superior\n\n");
            else
                printf("A matriz Y nao e triangular superior\n\n");

            break;

        case 4:

            printf("TRIANGULAR INFERIOR\n\n");
            int XehTriangularI = 1, YehTriangularI = 1;

            for (l = 0; l < maxL; l++)
                for (c = 0; c < maxC; c++)
                {
                    printf("Entre com o valor de matrizX[%d][%d]:", l, c);
                    scanf("%d", &matrizX[l][c]);
                }

            printf("\n");

            for (l = 0; l < maxL; l++)
                for (c = 0; c < maxC; c++)
                {
                    printf("Entre com o valor de matrizY[%d][%d]:", l, c);
                    scanf("%d", &matrizY[l][c]);
                }

            for (l = 0; l < maxL; l++)
            {
                for (c = 0; c < l; c++)
                {
                    if (matrizX[c][l] != 0)
                    {
                        XehTriangularI = 0;
                        break;
                    }
                }
                if (XehTriangularI == 0)
                    break;
            }

            for (l = 0; l < maxL; l++)
            {
                for (c = 0; c < l; c++)
                {
                    if (matrizY[c][l] != 0)
                    {
                        YehTriangularI = 0;
                        break;
                    }
                }
                if (YehTriangularI == 0)
                    break;
            }

            if (XehTriangularI == 1)
                printf("\nA matriz X e triangular inferior\n");
            else
                printf("\nA matriz X nao e triangular inferior\n");

            if (YehTriangularI == 1)
                printf("A matriz Y e triangular inferior\n\n");
            else
                printf("A matriz Y nao e triangular inferior\n\n");

            break;

        case 5:
            printf("SIMETRICA\n\n");
            int XehSimetrica = 1, YehSimetrica = 1;

            for (l = 0; l < maxL; l++)
                for (c = 0; c < maxC; c++)
                {
                    printf("Entre com o valor de matrizX[%d][%d]:", l, c);
                    scanf("%d", &matrizX[l][c]);
                }

            printf("\n");

            for (l = 0; l < maxL; l++)
                for (c = 0; c < maxC; c++)
                {
                    printf("Entre com o valor de matrizY[%d][%d]:", l, c);
                    scanf("%d", &matrizY[l][c]);
                }

            for (l = 0; (l < maxL) && (XehSimetrica == 1); l++)
                for (c = 0; (c < l) && (XehSimetrica == 1); c++)
                    if (matrizX[l][c] != matrizX[c][l])
                        XehSimetrica = 0;

            for (l = 0; (l < maxL) && (YehSimetrica == 1); l++)
                for (c = 0; (c < l) && (YehSimetrica == 1); c++)
                    if (matrizY[l][c] != matrizY[c][l])
                        YehSimetrica = 0;

            if (XehSimetrica == 1)
                printf("\nA matriz X e uma matriz simetrica.\n");
            else
                printf("\nA matriz X nao e matriz simetrica.\n");

            if (YehSimetrica == 1)
                printf("A matriz Y e uma matriz simetrica.\n\n");
            else
                printf("A matriz Y nao e matriz simetrica.\n\n");

            break;
        case 6:
            printf("ANTI-SIMETRICA\n\n");
            int XehAntiSimetrica = 1, YehAntiSimetrica = 1;
            
            for (l = 0; l < ordem; l++)
            {
                if (matrizX[l][l] != 0)
                {
                    XehAntiSimetrica = 0;
                    break;
                }
            }

            for (l = 0; l < maxL; l++)
            {
                for (c = 0; c < l; c++)
                {
                    if (matrizX[l][c] + matrizX[c][l] != 0)
                    {
                        XehAntiSimetrica = 0;
                        break;
                    }
                }
                if (XehAntiSimetrica == 0)
                    break;
            }

            for (l = 0; l < ordem; l++)
            {
                if (matrizY[l][l] != 0)
                {
                    YehAntiSimetrica = 0;
                    break;
                }
            }

            for (l = 0; l < maxL; l++)
            {
                for (c = 0; c < l; c++)
                {
                    if (matrizY[l][c] + matrizY[c][l] != 0)
                    {
                        YehAntiSimetrica = 0;
                        break;
                    }
                }
                if (YehAntiSimetrica == 0)
                    break;
            }

            if (XehAntiSimetrica == 1)
                printf("\nA matriz X e uma matriz anti-simetrica.\n");
            else
                printf("\nA matriz X nao e matriz anti-simetrica.\n");

            if (YehAntiSimetrica == 1)
                printf("A matriz Y e uma matriz anti-simetrica.\n\n");
            else
                printf("A matriz Y nao e matriz anti-simetrica.\n\n");

            break;

        case 7:
            printf("IGUALDADE\n\n");
            int saoIguais = 1;

            for (l = 0; l < maxL; l++)
                for (c = 0; c < maxC; c++)
                {
                    printf("Entre com o valor de matrizX[%d][%d]:", l, c);
                    scanf("%d", &matrizX[l][c]);
                }

            printf("\n");

            for (l = 0; l < maxL; l++)
                for (c = 0; c < maxC; c++)
                {
                    printf("Entre com o valor de matrizY[%d][%d]:", l, c);
                    scanf("%d", &matrizY[l][c]);
                }

            for (l = 0; l < maxL; l++)
            {
                for (c = 0; c < maxC; c++)
                    if (matrizX[l][c] != matrizY[l][c])
                    {
                        saoIguais = 0;
                        break;
                    }
                if (saoIguais == 0)
                    break;
            }

            if (saoIguais == 1)
                printf("\nAs duas matrizes sao iguais\n\n");
            else
                printf("\nAs duas matrizes nao sao iguais\n\n");

            break;

        case 8:
            printf("Programa finalizado\n");
            exit(0);
        }

        printf("Pressione uma tecla para retornar ao menu principal!");
        getchar();
        getchar();
        system("cls");
    } while (1);

    return 0;
}