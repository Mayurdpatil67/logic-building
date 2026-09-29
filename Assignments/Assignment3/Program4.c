#include<stdio.h>
#include<ctype.h>

void  DisplayConvert(char cValue)
{
    if(islower(cValue))
    {
        printf("From lower to upper: %c",toupper(cValue));
    }
    else if(isupper(cValue))
    {
        printf("From upper to lower :%c",tolower(cValue));

    }
}
int main ()
{
   char cValue='\0';
  
  printf("Enter character : ");
  scanf("%c",&cValue);
 
  DisplayConvert(cValue);

    return 0;

}