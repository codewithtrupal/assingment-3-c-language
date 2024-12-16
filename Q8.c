#include <stdio.h>

struct employee     
{
    char name[50];
    int basicpay;
    int allowance;
    int house; 
    int netsalary;
};

void calunetsalary(struct employee employees[], int i);
void datadiaply(struct employee employees[]);

int main()
{
    struct employee employees[5];

    for (int  i = 0; i < 5; i++)
    {
    printf("\n Employees number :- %d\n", i +1);

    printf("Enter the employee name : ");
    scanf("%s", employees[i].name);

    printf("Enter the basicpay : ");
    scanf("%d", &employees[i].basicpay);

    printf("Enter the allowance : ");
    scanf("%d", &employees[i].allowance);

    printf("Enter the house rent : ");
    scanf("%d", &employees[i].house );

    calunetsalary(employees,i);
        
    }

    datadiaply(employees);

    printf("\nEmployee Details (sorted by net salary):\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("Name: %s\n", employees[i].name);
        printf("Basic Pay: %d\n", employees[i].basicpay);
        printf("Dearness Allowance: %d\n", employees[i].allowance);
        printf("House Rent: %d\n", employees[i].house);
        printf("Net Salary: %d\n", employees[i].netsalary);
        printf("\n");
    }

    

    return 0;
}

void calunetsalary(struct employee employees[], int i)
{
    employees[i].netsalary= employees[i].allowance + employees[i].basicpay + employees[i].house;
}

void datadiaply(struct employee employees[])
{
    struct employee tem;

    for (int i = 0; i < 5 ; i++)
    {
        for (int j = i + 1; j < 5 ; j++)
        {
            if (employees[i].netsalary < employees[j].netsalary)
            {
               tem = employees[i];
               employees[i] = employees[j];
               employees[j] = tem;
            }
            
        }
        
    }
    
    
    
}