#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char str[1000],sen[1000];
    scanf("%c",&ch);
    scanf("%s",str);
    //scanf("\n"); 
    scanf("%[^\n]%*c",sen);
    
    printf("%c\n",ch);
    printf("%s\n",str);
    printf("%s\n",sen);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}