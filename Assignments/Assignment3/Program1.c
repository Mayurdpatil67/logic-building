#include<stdio.h>

void PrintEven(int iNo)
{  
  int iCnt=0;
  int iEven=2;
 
    if(iNo<=0)
 {
    iNo=-iNo;
 }

    for(iCnt=1;iCnt<=iNo;iCnt++)
 {
     if((iEven%2)==0)
          
    { 
     printf("%d ",iEven);
    }

    iEven=iEven + 2;

 }
    
}
int main ()
{
  
  int iValue=0;

 printf("Enter number\n");
 scanf("%d",&iValue);
   
 PrintEven(iValue);
    
 return 0;

}
