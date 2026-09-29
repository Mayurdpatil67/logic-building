#include <stdio.h>

int main() 
{
    char Name[30];

    printf("Please enter your full name: ");
    scanf("%[^\n]",Name);

    printf("Your name is: %s\n", Name);

    return 0;
}

// Time Complexity : O(N)
