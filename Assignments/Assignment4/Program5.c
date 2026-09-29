#include<stdio.h>

int FactDiff(int iNo)
{
   int iCnt =0 ;
   int iSum =0;
   int iSumX=0;
   int iDiff=0;

    for(iCnt=1;iCnt<iNo;iCnt++)
     {
       if(iNo%iCnt==0)
       {
            iSum=iSum+iCnt;   
       }
       if (iNo%iCnt!=0)
       {
            iSumX=iSumX+iCnt;      
       }   
         iDiff=iSum-iSumX;

     }
      return  iDiff;

}

int main()
{
   int iValue=0;
    int iRet =0;
   
    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=FactDiff(iValue);
 
    printf("%d",iRet);

    return 0;

}


// Time Complexity : O(N)
