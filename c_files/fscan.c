/* Show functionality of fscan for file ops */

#include <stdio.h>

int main(void) {
    FILE *fp;
    char name[1024];
    int wins;
    int draws;
    int losses;
    int points;

    fp = fopen("bundesliga.txt", "r");

    printf("Team\t\tWins\tDraws\tLosses\tPoints\n");

    while (fscanf(fp, "%s %d %d %d %d", name, &wins, &draws, &losses, &points) != EOF)
        printf("%s\t%d\t%d\t%d\t%d\n", name, wins, draws, losses, points);

    fclose(fp);
}