#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CheckEven(int iNo)
{
    if ((iNo%2)==0)
    {
        return TRUE;

    }
    else 
    {
        return FALSE;
    }

         
}
int main()
{  
     int iValue =0;
     BOOL bRet =FALSE;
    
    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet=CheckEven(iValue);
  
    if(bRet==TRUE)
    {
        printf("Even\n");

    }
    else
    {
        printf("Odd\n");

    }

    return 0;

}