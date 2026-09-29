#include<stdio.h>

void Table(int iNo)
{  
    int iCnt=0;
    int iTable=0;

    for(iCnt=10;iCnt>=1;iCnt--)
    {
        iTable=iNo*iCnt;
       printf("%d ",iTable);
    }

}
int main ()
{
     int iValue=0;

     printf("Enter number \n");
     scanf("%d",&iValue);
     
     Table(iValue);
    return 0;

}