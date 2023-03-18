/*Accept 2 Numbers From User and Print 1st Number 2nd Number of Time 
INPUT :- 5 3
OUTPUT :- 5 5 5 5 5
*/
#include<stdio.h>
void Display(int iNo , int iFrequency)
{
    if( iFrequency < 0)
     {
        iFrequency = -(iFrequency);
     }
    int i = 0;
    {
        for(i = 1 ; i<= iFrequency ; i++)

        printf("%d",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;
    printf("Enter Number");
    scanf("%d",&iValue);

    printf("Enter Frequency ");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}