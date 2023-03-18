
/*Accept the number form user and print " * " on screen

intput 5

output :-*****

*/
#include<stdio.h>

void Display(int iNo)
{
  //  int iNo= 0;
    while(iNo > 0)
    {
        printf("*");

        iNo--;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    Display(iValue);
}