#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
    int row;
    row = (n*n) - ((n-1)*(n-1));

   
    
    for (int i=1;i<=row;i++)
    {
        for (int j=1;j<=row;j++)
        {
            int r,c;

            int diff;

            if(row % 2 == 0)
            {
                diff = row/2;
            }

            if (row % 2 == 1)
            {
                diff = row/2 + 1;
            }


            r = abs(diff - i) + 1;
            c = abs(diff - j) + 1;
             

            int max;

            if(r>=c)
            {
                printf("%d ",r);
            }

            if (c>r)
            {
                printf("%d ",c);
            }



        }

        printf("\n");
    }
  	
    return 0;
}