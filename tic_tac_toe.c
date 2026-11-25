#include <stdio.h>

int main() {
    char a[9] = {'1','2','3','4','5','6','7','8','9'};
    int n, i;
    char player = 'X';

    for(i = 0; i < 9; i++) {

        printf("\n %c | %c | %c\n", a[0], a[1], a[2]);
        printf("---|---|---\n");
        printf(" %c | %c | %c\n", a[3], a[4], a[5]);
        printf("---|---|---\n");
        printf(" %c | %c | %c\n", a[6], a[7], a[8]);

        printf("\nPlayer %c, enter position: ", player);
        scanf("%d", &n);

        a[n-1] = player;

        if(player == 'X')
            player = 'O';
        else
            player = 'X';
    }

    printf("\nGame Over!");

    return 0;
}