#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
typedef int BOOL;
int ChkEven(int iNo)
(
    if(iNo % 2 ==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
)

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number ");
    scanf("%d",&iValue);

   bRet =  ChkEven(iValue);

   if( bRet == TRUE)
   {
    printf("NUMBER IS EVEN");
   }

   else
   {
    printf("NUMBER IS ODD");
   }

    return 0 ;
}