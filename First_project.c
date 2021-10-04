// Calculator example using C code
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>



//You can uncomment any funtion to run
void addition();
void subtraction();
//void multiplication();
//void division();                               // Function prototype declaration
//void modulus();
void power();
int factorial();
void calculator_operations();


int main()
{
    int a=1;
    char choice_operation;

    
    calculator_operations();        // Function is being called 

    while(a)
    {
        scanf("%c",&choice_operation);

        switch(choice_operation)
        {
            case '+': addition();
                      break;

            case '-': subtraction();
                      break;

            case '*': multiplication();
                      break;

            case '/': division();
                      break;

            case '?': modulus();
                      break;

            case '!': factorial();
                      break;

            case '^': power();
                      break;

            case 'D':calculator_operations();
                      break;
                      
            case 'd': calculator_operations();
                      break;

            case 'Q':exit(0);
                      break;
                      
            case 'q': exit(0);
                      break;
                      
            case 'c':system("cls");
                      calculator_operations();
                      break;
                      
            case 'C': system("cls");
                      calculator_operations();
                      break;

            default : system("cls");

    printf("Please enter valid choice");
    calculator_operations();
        }
    }
}



void calculator_operations()
{
    printf("______CALCULATOR_______\n");

    printf("To Quit press 'Q' or 'q'\n");
    printf("To Display press 'D' or'd'\n");
    printf("To clear the screen press 'C' or 'c'\n");

    printf("Enter + symbol for Addition \n");
    printf("Enter - symbol for Subtraction \n");
    printf("Enter * symbol for Multiplication \n");
    printf("Enter / symbol for Division \n");
    printf("Enter ? symbol for Modulus\n");
    printf("Enter ^ symbol for Power \n");
    printf("Enter ! symbol for Factorial \n\n");
}

void addition()
{
    int n,i,total=0,number;
    printf("\nEnter the number of elements you want to add:");
    scanf("%d",&n);
    printf("Please enter %d numbers one by one: \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d" ,&number);
        total=total+number;
    }
    printf("Sum of %d numbers = %d \n",n,total);
}

void subtraction()
{ 
    int a, b, c = 0; 
    printf("\nPlease enter first number  : "); 
    scanf("%d", &a); 
    printf("Please enter second number : "); 
    scanf("%d", &b); 
    c = a - b; 
    printf("\n%d - %d = %d\n", a, b, c); 
}

void multiplication()
{
    int a, b, mul=0; 
    printf("\nPlease enter first numb   : "); 
    scanf("%d", &a); 
    printf("Please enter second number: "); 
    scanf("%d", &b);
    mul=a*b;
    printf("\nMultiplication of entered numbers = %d\n",mul);
}

void division()
{
    int a, b, d=0; 
    printf("\nPlease enter first number  : "); 
    scanf("%d", &a); 
    printf("Please enter second number : "); 
    scanf("%d", &b);
    d=a/b;
    printf("\nDivision of entered numbers=%d\n",d);
}

void modulus()
{
    int a, b, d=0; 
    printf("\nPlease enter first number   : "); 
    scanf("%d", &a); 
    printf("Please enter second number  : "); 
    scanf("%d", &b);
    d=a%b;
    printf("\nModulus of entered numbers = %d\n",d);
}

void power()
{
    double a,num, p;
    printf("\nEnter two numbers to find the power \n");
    printf("number: ");
    scanf("%lf",&a);

    printf("power : ");
    scanf("%lf",&num);

    p=pow(a,num);

    printf("\n%lf to the power %lf = %lf \n",a,num,p);
}

int factorial()
{
    int i,fact=1,num;

    printf("Enter a number to find factorial :\n");
    scanf("%d",&num);

    if (num<0)
    {
        printf("You need to enter a positive number\n");
        return 1;
    }               

    for(i=1;i<=num;i++)
    fact=fact*i;
    printf("Factorial of entered number %d is:%d\n",num,fact);
    return 0;
}
