#include<stdio.h>

int Factorial(int iNo)
{ 
    int iCnt =0;
    int iFact=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(iCnt=(iNo-1);iCnt>=1;iCnt--)
    {
        iNo=iNo*iCnt;
        iFact=iNo;
    }
    return iFact;
}

int main ()
{  
    int iValue=0;
    int iRet=0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    iRet=Factorial(iValue);
    printf("Factorial of a number is :%d",iRet);

    return 0;

}