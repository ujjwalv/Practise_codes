#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    int count;
    int i=0;
    int len = strlen(s);

    //printf("%d",len);

    
    
    for(int i=0;i<len;i++)
    {
        if(s[i]!=' ')
        {
            printf("%c",s[i]);
            count =0;
        }
        if(s[i]==' ')
        {
          count ++;
        }
        if(count==1)
        {
            printf("\n");
        }
        
        
    }
    return 0;
}