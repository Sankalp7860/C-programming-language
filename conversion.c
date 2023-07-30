#include <stdio.h>
int main()
{
int a,c;
float b;
printf("******* Welcome To Conversion Programme *******\n");
printf("For kms to inches: Press 1\n");
printf( "For inches to foot: Press 2\n");
printf("For cms to inches: Press 3\n");
printf("For pound to kgs: Press 4\n");
printf("For inches to metres: Press 5\n");
printf("To Quit Programme: Press 0\n");
printf("Please Enter Your Choice: ");
scanf("%d",&a);
while (a>=0 && a<=5)
    if (a==1)
    {
        printf("Please Enter Value in kms: ");
        scanf("%f",&b);
        b=b*39370.1;
        printf("Your value in inches : %f\n",b);
        printf("\nTo Convert another Unit: Press 1\n");
        printf("To Quit Programme: Press 0\n");
        printf("Please Enter Your Choice: ");
        scanf("%d",&c);
            if (c==1)
            {
                printf("/n******* Welcome To Conversion Programme *******\n");
                printf("For kms to inches: Press 1\n");
                printf( "For inches to foot: Press 2\n");
                printf("For cms to inches: Press 3\n");
                printf("For pound to kgs: Press 4\n");
                printf("For inches to metres: Press 5\n");
                printf("To Quit Programme: Press 0\n");
                printf("Please Enter Your Choice: ");
                scanf("%d",&a);
            }
            else if (c==0)
                break;
    }
    else if (a==2)
    {
        printf("Please Enter Value in inches: ");
        scanf("%f",&b);
        b=b*0.0833333;
        printf("Your value in foot : %f\n",b);
        printf("\nTo Convert another Unit: Press 1\n");
        printf("To Quit Programme: Press 0\n");
        printf("Please Enter Your Choice: ");
        scanf("%d",&c);
            if (c==1)
            {
                printf("\n******* Welcome To Conversion Programme *******\n");
                printf("For kms to inches: Press 1\n");
                printf( "For inches to foot: Press 2\n");
                printf("For cms to inches: Press 3\n");
                printf("For pound to kgs: Press 4\n");
                printf("For inches to metres: Press 5\n");
                printf("To Quit Programme: Press 0\n");
                printf("Please Enter Your Choice: ");
                scanf("%d",&a);
            }
            else if (c==0)
                break;
    }
    else if (a==3)
    {
        printf("Please Enter Value in cms: ");
        scanf("%f",&b);
        b=b*0.393701;
        printf("Your value in inches : %f\n",b);
        printf("\nTo Convert another Unit: Press 1\n");
        printf("To Quit Programme: Press 0\n");
        printf("Please Enter Your Choice: ");
        scanf("%d",&c);
            if (c==1)
            {
                printf("\n******* Welcome To Conversion Programme *******\n");
                printf("For kms to inches: Press 1\n");
                printf( "For inches to foot: Press 2\n");
                printf("For cms to inches: Press 3\n");
                printf("For pound to kgs: Press 4\n");
                printf("For inches to metres: Press 5\n");
                printf("To Quit Programme: Press 0\n");
                printf("Please Enter Your Choice: ");
                scanf("%d",&a);
            }
            else if (c==0)
                break;
    }
    else if (a==4)
    {
        printf("Please Enter Value in pound: ");
        scanf("%f",&b);
        b=b*0.0833333;
        printf("Your value in kgs : %f\n",b);
        printf("\nTo Convert another Unit: Press 1\n");
        printf("To Quit Programme: Press 0\n");
        printf("Please Enter Your Choice: ");
        scanf("%d",&c);
            if (c==1)
            {
                printf("\n******* Welcome To Conversion Programme *******\n");
                printf("For kms to inches: Press 1\n");
                printf( "For inches to foot: Press 2\n");
                printf("For cms to inches: Press 3\n");
                printf("For pound to kgs: Press 4\n");
                printf("For inches to metres: Press 5\n");
                printf("To Quit Programme: Press 0\n");
                printf("Please Enter Your Choice: ");
                scanf("%d",&a);
            }
            else if (c==0)
                break;
    }
    else if (a==5)
    {
        printf("Please Enter Value in inches: ");
        scanf("%f",&b);
        b=b*0.0833333;
        printf("Your value in metres : %f\n",b);
        printf("\nTo Convert another Unit: Press 1\n");
        printf("To Quit Programme: Press 0\n");
        printf("Please Enter Your Choice: ");
        scanf("%d",&c);
            if (c==1)
            {
                printf("\n******* Welcome To Conversion Programme *******\n");
                printf("For kms to inches: Press 1\n");
                printf( "For inches to foot: Press 2\n");
                printf("For cms to inches: Press 3\n");
                printf("For pound to kgs: Press 4\n");
                printf("For inches to metres: Press 5\n");
                printf("To Quit Programme: Press 0\n");
                printf("Please Enter Your Choice: ");
                scanf("%d",&a);
            }
            else if (c==0)
                break;
    }
    else if(a==0)
        break;

return 0;
}
