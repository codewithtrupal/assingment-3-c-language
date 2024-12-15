#include <stdio.h>

struct state
{
    char name[50];
    int population;
    float literacyrate;
    int percapitaincome;
};


int main()
{
    struct state states[5];

    for (int i = 0; i < 5; i++)
    {
        printf("State number : %d",i+1);

        printf("Enter the state name : ");
        scanf("%s", states[i].name);

        printf("Enter the population : ");
        scanf("%d", states[i].population);

        printf("")
    }
    

}