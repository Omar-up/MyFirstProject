
#include <stdio.h>

int main()
{
    int n;

    printf("entrer n d'un tableau : ");
    scanf("%d" , &n);

    int tab[n];

    for(int i = 0 ; i < n ; i++) {
        printf("entrer un valeur : ");
        scanf("%d" , &tab[i]);
    }

    int max = tab[0]; // 9
    int min = tab[0];

    for(int i = 1 ; i < n ; i++) {
        if(tab[i] > max) {
            max = tab[i];
        }

        if(tab[i] < min) {
            min = tab[i];
        }
    }

    printf("max est : %d \n min est : %d" , max, min);
}
