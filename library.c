#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total_no_shelves, total_no_queries;

    scanf("%d%d",&total_no_shelves,&total_no_queries);

    //DYNAMIC MEMORY ALLOCATION OF MDA

    int ** queries = (int **) malloc(total_no_queries * sizeof(int *));

    for (int i = 0; i < total_no_queries; ++i)
    {
    	queries[i] = (int *) malloc(3 * sizeof(int)); 
    }

    //QUERIED WILL BE STORED IN MDA

    for (int i = 0; i < total_no_queries; ++i)
    {

    	for (int j = 0; j < 3; ++j)
    	{
    		scanf("%d",&queries[i][j]);

    	    if(queries[i][0]==3&&j==1)
    	    {
    	    	break;
    	    }
    	}
    }

    //ADDING THE (NUMBER OF BOOK IN PARTICULAR SHELF)IN THE EXTRA 4TH COLUMN OF MDA

    int count = 0;

    for (int j = 0; j < total_no_shelves; ++j)
    {
   	    for (int i = 0; i < total_no_queries; ++i)
   	    {
   	    	if(queries[i][0]==1)
   	    	{
                if(queries[i][1]==j)
                {
                	queries[i][3]=count;
                	count++;
                }
   	    	}
   	    }
   	    count =0;
    }

    // REQUESTING AND ANSWERING THE QUERIES

    for (int i = 0; i < total_no_queries; ++i)
    {
    	if(queries[i][0]==2)
    	{
    		
            for (int j = 0; j < i; ++j)
    		{
    			if(queries[i][1]==queries[j][1]&&queries[i][2]==queries[j][3])
    			{
    				printf("%d\n",queries[j][2]);
    			}
    		}
    	}

    	int count_book = 0;

    	
        if(queries[i][0]==3)
    	{
    		for (int k = 0; k < i; ++k)
    		{
    			if(queries[k][0]==1&&queries[i][1]==queries[k][1])
    			{
    				count_book++;
    				//printf("%d\n",count_book);
    			}
    		}

    		printf("%d\n",count_book);
    	}


    }

	return 0;
}