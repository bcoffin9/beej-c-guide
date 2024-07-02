/* Demo of struct functionality */

#include <stdio.h>
struct game {
    int homePoints;
    int awayPoints;
    char *homeTeam;
    char *awayTeam;
};

void printMatch(struct game *fixture, int seed) {
    printf("Match today: \n%s\t%d\n%s\t%d\n", fixture->homeTeam, fixture->homePoints, fixture->awayTeam, fixture->awayPoints);
    printf("Seeded at: %d\n", seed);
    return;
}

int main(void) {
    struct game march29Fixture = {.homePoints=2, .awayPoints=3, .homeTeam="Borussia Dortmund", .awayTeam="Bayer Leverkusen"};
    
    printMatch(&march29Fixture, 88);
    return 0;
}