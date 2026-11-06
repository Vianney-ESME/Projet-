#include <stdio.h>

#define WIDTH 10
#define HEIGHT 10


void afficher_grille(int grille[WIDTH][HEIGHT])
{
    int ligne, colonne;

    printf("   ");
    for (colonne = 0; colonne < HEIGHT; colonne++)
    {
        printf("%2d ", colonne + 1);
    }
    printf("\n");

    for (ligne = 0; ligne < WIDTH; ligne++)
    {
        printf("%2d ", ligne + 1);

        for (colonne = 0; colonne < HEIGHT; colonne++)
        {
            if (grille[ligne][colonne] == 0)
            {
                printf(" . ");
            }
            else
            {
                printf(" X ");
            }
        }

        printf("\n");
    }
}

int main(void)
{       
    int grille[WIDTH][HEIGHT] = {0};

    printf("JEU DE LA VIE\n\n");
    //stable
    grille[5][8] = 1;
    grille[5][6] = 1;
    grille[5][7] = 1;
    //vaisseau
    grille[3][3] = 1;
    grille[2][3] = 1;
    grille[2][4] = 1;
    grille[2][5] = 1;
    grille[3][5] = 1;
    grille[1][4] = 1;
    //oscillateur
    grille[7][3] = 1;
    grille[8][3] = 1;
    grille[8][4] = 1;
    grille[9][4] = 1;

    afficher_grille(grille);

    return 0;
}
