#include <stdio.h>
#include<string.h>
struct travel_agency{
 char name[20];
 char licence[34];
 char route[50];
 char kms[5];
}n1,n2,n3;
int main()
{
       // struct travel_agency n1,n2,n3;
    for (int i = 1; i <= 3; i++)
    {
        printf("~~Please Enter the details of the %d driver~~\n",i);
        if(i==1){
        printf("\nEnter the name of the driver: ");
        fgets(n1.name,20,stdin);
        printf("\nEnter the driving licence number of the driver: ");
        fgets(n1.licence,34,stdin);
        printf("\nEnter the route of the driver: ");
        fgets(n1.route,50,stdin);
        printf("\nEnter the kilometers car has travelled : ");
        fgets(n1.kms,5,stdin);
        
        }
        else if(i==2){
        printf("\nEnter the name of the driver: ");
        fgets(n2.name,20,stdin);
        printf("\nEnter the driving licence number of the driver: ");
        fgets(n2.licence,34,stdin);
        printf("\nEnter the route of the driver: ");
        fgets(n2.route,50,stdin);
        printf("\nEnter the kilometers car has travelled : ");
        fgets(n2.kms,5,stdin);
        }
        else if(i==3){
        printf("\nEnter the name of the driver: ");
        fgets(n3.name,20,stdin);
        printf("\nEnter the driving licence number of the driver: ");
        fgets(n3.licence,34,stdin);
        printf("\nEnter the route of the driver: ");
        fgets(n3.route,50,stdin);
        printf("\nEnter the kilometers car has travelled : ");
        fgets(n3.kms,5,stdin);
        }
    }

    printf("\n");
    printf("\n");
    for (int i = 1; i <= 3; i++)
    {
    printf("~~The details of the %d driver are as follows~~\n",i);
    if (i==1)
    {
        printf("The name of the driver is: %s\n",n1.name);
        printf("The driving licence number of the driver is: %s\n",n1.licence);
        printf("The route of the driver is: %s\n",n1.route);
        printf("The kilometers travelled by the car is: %s\n",n1.kms);
    }
    else if (i==2)
    {
        printf("The name of the driver is: %s\n",n2.name);
        printf("The driving licence number of the driver is: %s\n",n2.licence);
        printf("The route of the driver is: %s\n",n2.route);
        printf("The kilometers travelled by the car is: %s\n",n2.kms);
    }
    else if (i==3)
    {
        printf("The name of the driver is: %s\n",n3.name);
        printf("The driving licence number of the driver is: %s\n",n3.licence);
        printf("The route of the driver is: %s\n",n3.route);
        printf("The kilometers travelled by the car is: %s\n",n3.kms);
    }
    }
    
    return 0;
}