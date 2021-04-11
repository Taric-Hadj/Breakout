#include "Jeu1.h"

// void Map(char tab[45][25])
// {
//     FILE *map = fopen("../Fichier/map.txt", "r");
//     for (int i = 0; i < 45; i++)
//     {
//         for (int j = 0; j < 25; j++)
//         {
//             tab[i][j] = fgetc(map);
//         }
//         fseek(map, SEEK_CUR, 1);
//     }
//     for (int i = 0; i < 45; i++)
//     {
//         for (int j = 0; j < 25; j++)
//         {
//             printf("%c", tab[i][j]);
//         }
//         printf("\n");
//     }
// }