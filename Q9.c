#include <stdio.h>

struct population
{
    int men;
    int women;
};

struct state
{
    char name[50];
    struct population pop;
};


int main()
{
    struct state states;

    printf("\n Enter the name of state : ");
    scanf("%s", states.name);
    
    printf("Enter the number of men : ");
    scanf("%d", &states.pop.men);

    printf("Enter the number of women : ");
    scanf("%d", &states.pop.women);

    printf("\nState name - %s\n", states.name);
    printf("Population of men - %d\n", states.pop.men);
    printf("Population of women - %d\n", states.pop.women);

    return 0;
}