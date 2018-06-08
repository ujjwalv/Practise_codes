#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int check_1 =0;

void permute(char **s, int l, int r)
{

    char temp[100];
    char comp[r+1][1000];

   int check =0 ;
   int i;

   if (l == r)
   {
   	if(check_1 == 0)
   	{
   		for (int j = 0; j <= r; j++)
   	       {
			    strcpy(comp[j],s[j]);
   	       }
   	}
   	check_1 = 1;

   	       for (int j = 0; j <= r; j++)
   	       {
			    int res = strcmp(comp[j],s[j]);
                check = check + abs(res);

   	       }


   	
   		   if (check != 0)
           {
               for (int j = 0; j <= r; j++)
   	           {
			    printf("%s%c", s[j], j == r  ? '\n' : ' ');
   	           }
           }
   		   
           for (int j = 0; j <= r; j++)
   	       {
			    strcpy(comp[j],s[j]);
   	       }
           
   }

     
   else
   {
       for (i = l; i <= r; i++)
       {
          strcpy(temp,s[l]);
          strcpy(s[l],s[i]);
          strcpy(s[i],temp);

          permute(s, l+1, r);

          strcpy(temp,s[l]);
          strcpy(s[l],s[i]);
          strcpy(s[i],temp);   
          
       }
   }
}

int next_permutation(int n, char **s)
{
   permute(s, 0, n-1);
   return 0;
}

int main()
{
	char **s;
	int n;
	scanf("%d", &n);
	s = calloc(n, sizeof(char*));
	for (int i = 0; i < n; i++)
	{
		s[i] = calloc(11, sizeof(char *));
		scanf("%s", s[i]);
	}
	do
	{
		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	for (int i = 0; i < n; i++)
		free(s[i]);
	free(s);
	return 0;
}