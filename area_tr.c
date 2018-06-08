#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;


float area_find(triangle tr)
{
    float area;
    float p;
    
    p = (tr.a + tr.b + tr.c)/2.0f;
    float q = p * (p-tr.a) * (p-tr.b) * (p-tr.c);
    area = pow(q, 0.5);
    return area;
}
void sort_by_area(triangle* tr, int n) 
{
    float area[n] ;
    float swap;
    triangle swap_t;
	for(int i=0;i<n;i++)
    {
        area[i] = area_find(tr[i]);
        //printf(" %f %d ",area[i],tr[i].c);
        
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(area[i] >= area[j])
            {
                swap = area[i];
                area[i] = area[j];
                area[j] = swap;
                
                swap_t = tr[i];
                tr[i] = tr[j];
                tr[j] = swap_t;
            }
        }
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}