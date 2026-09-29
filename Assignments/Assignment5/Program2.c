#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int iNo)
{
    if (iNo>100)
    {
        return  TRUE;
    }

}

int main()
{ 
     int iValue =0;
    BOOL bRet =FALSE ;

    printf("Enter number \n");
    scanf ("%d",&iValue);

    bRet=ChkGreater(iValue);

    if(bRet==TRUE)
    {
        printf("Greater\n");

    }
    else
    {
        printf("Smaller\n");
    }

    return 0;

}

// Time Complexity : O(1)
