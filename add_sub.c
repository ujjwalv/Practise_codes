#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b,sum,dif;
    float c,d,su,di;
    
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c,&d);
    
    sum = a + b;
    dif = a - b;
    
    su = c + d;
    di = c - d;
    
    printf("%d %d\n%.1f %.1f",sum,dif,su,di);

    return 0;
}