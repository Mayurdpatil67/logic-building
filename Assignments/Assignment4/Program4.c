#include<stdio.h>
int SumNonFact(int iNo)
{
    int iCnt=0;
    int iSum =0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iNo%iCnt!=0)
        {      
            iSum=iSum+iCnt;
        }
           
    }
         printf("%d",iSum);
                  
}
int main ()
{
    int iValue=0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);

    SumNonFact(iValue);

     return 0;

}


// Time Complexity : O(N)
