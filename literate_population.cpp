/*In a town, the percentage of men is 52. The percentage of
total literacy is 48. If total percentage of literate men is 35 of
the total population, write a program to find the total number
48 Let Us C
of illiterate men and women if the population of the town is
80,000. */
#include <stdio.h>

int main() {
    int population = 80000;

    float men_pct = 52;
    float literacy_pct = 48;
    float literate_men_pct = 35;
    float literate_men = (literate_men_pct / 100) * population;
    float total_literates = (literacy_pct / 100) * population;
    float literate_women = total_literates - literate_men;

    printf("Literate Men = %.0f\n", literate_men);
    printf("Literate Women = %.0f\n", literate_women);

    return 0;
}
