#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d %d", &a, &b);
  	
    int arr[2] = {a,b};
    
    for (int i=0; i<2; ++i)
    {
        if(arr[i]==1){printf("one\n");}
        else if (arr[i]==2){printf("two\n");}
        else if (arr[i]==3){printf("three\n");}
        else if (arr[i]==4){printf("four\n");}
        else if (arr[i]==5){printf("five\n");}
        else if (arr[i]==6){printf("six\n");}
        else if (arr[i]==7){printf("seven\n");}
        else if (arr[i]==8){printf("eight\n");}
        else if (arr[i]==9){printf("nine\n");}
        else {printf("nine\n");}
    }
    for (int i=0; i<2; ++i)
    {
        if(arr[i]%2==0){printf("even\n");}
        else {printf("odd\n");}
    }
    

    return 0;
}

