#include <stdio.h>

struct state
{
    char name[50];
    int population;
    float literacyrate;
    int percapitaincome;
};

void literacy_rate(struct state states[]);
void percapita_income(struct state states[]);

int main()
{
    struct state states[5];

    for (int i = 0; i < 5; i++)
    {
        printf("State number : %d\n", i + 1);

        printf("Enter the state name : ");
        scanf("%s", states[i].name);

        printf("Enter the population : ");
        scanf("%d", &states[i].population);

        printf("Enter the literacyrate : ");
        scanf("%f", &states[i].literacyrate);

        printf("Enter the per capita income : ");
        scanf("%d", &states[i].percapitaincome);
    }
    literacy_rate(states);

    percapita_income(states);
    return 0;
}

void literacy_rate(struct state states[])
{
    int maxindex = 0;
    for (int i = 0; i < 5; i++)
    {
        if (states[i].literacyrate > states[maxindex].literacyrate)
        {
            maxindex = i;
        }
    }

    printf("\nState with highest literacy rate\n");

    printf("State name %s\n", states[maxindex].name);
    printf("literacy rate %.2f\n", states[maxindex].literacyrate);
}

void percapita_income(struct state states[])
{
    int maxindex = 0;
    for (int i = 0; i < 5; i++)
    {
        if (states[i].percapitaincome > states[maxindex].percapitaincome)
        {
            maxindex = i;
        }
    }

    printf("\n State with highest per capita income \n");

    printf("State name %s\n", states[maxindex].name);
    printf("Per capita income rate %d\n", states[maxindex].percapitaincome);
}