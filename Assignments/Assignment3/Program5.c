#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Chkvovel(char cChar)
{ 
 if(cChar == 'a' || cChar == 'e' || cChar == 'i' || cChar == 'o' || cChar == 'u' )
 
 {
    return TRUE;
 }s
 else 
 {
    return FALSE;
 }
}

int main()
{
   char cValue='\0';
    BOOL bRet=FALSE;

    printf("Enter character\n");
    scanf("%c",&cValue);

    bRet=Chkvovel(cValue);
    
    if(bRet==TRUE)
    {
        printf("It is vowel \n");
    }
    else
    {
        printf("It is not volwel \n");
    }

    return 0;
}