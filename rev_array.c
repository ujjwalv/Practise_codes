#include <stdio.h>
#include <stdlib.h>

int * rev_array(int *array, int n)
{
    int * new_array;

    new_array = (int *) malloc(n * sizeof(int));

    for(int i=0;i<n;i++)
    {
    	new_array[i]=array[n-1-i];
    }

	return new_array;
}

int main()
{
    int n;//Size of array
    scanf("%d",&n);

    int *array;

    array = (int *) malloc(n * sizeof(int)); //Dynamic memorary allocati

    for(int i=0;i<n;i++)
    {
    	scanf("%d",&array[i]);
    }

    int *p;

    p = rev_array(array,n);

    for (int i = 0; i <n; ++i)
    {
    	printf("%d ",p[i]);
    }
    

    return 0;
}