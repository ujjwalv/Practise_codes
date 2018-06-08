#include <stdio.h>
#include <string.h>

void main() 
{
 //Number of strings	
 int num_str, i;
 scanf("%d",&num_str);


 //Input strings
 char str[num_str][10000];

 for(i=0;i<num_str;i++)
    {
        scanf("%s",str[i]);
    }

//Declaring variables to be used under loop
 int length,count_nonzero=0,ascii=0;
 int num_alpha[26];

//Making all element of array =0 (This array stores the number of alphabet occurs in main string)
 for (int i=0;i<26;i++)
 {
 	num_alpha[i] = 0;
 }

 for(i=0;i<num_str;i++)
    {
    	   length = strlen(str[i]); //String length

           for(int j=0;j<length;j++)
           {
             ascii = str[i][j];
             num_alpha[ascii-97]++; //Storing occurance of alphabet
           }

           for(int i=0;i<26;i++)
           {
           	if(num_alpha[i]>0)
           	{
              count_nonzero++; //Counting the number of zero(This mean counting those alphabet which do not ooccur in main string)
           	}
           }
            
            int arr[count_nonzero];
           int k=0;


           for(int i=0;i<26;i++)
           {
            
            if(num_alpha[i] != 0)
           	 {   
           	   arr[k]=num_alpha[i]; //Storing only the main string alphabet(occurance number) in the array named as arr
           	   k++;
           	 }
           }

           for (int i = 0; i < count_nonzero;i++) //Sorting the array "arr" in ascending order
            {
 
             for (int j = i + 1; j < count_nonzero;j++)
              {
 
                if (arr[i] > arr[j]) 
                 {
 
                    int a =  arr[i];
                    arr[i] = arr[j];
                    arr[j] = a;
 
                 }
 
              }
 
            }
             int final_count=0;

            for(int i=0;i<count_nonzero-2;i++) //Implementing the condition for "Dynamic" and "Not" strings
            {
              if(arr[i+2]==arr[i+1]+arr[i])
              {
                final_count++;
              }
            }

            if(count_nonzero>2&&final_count==count_nonzero-2) //Finally printing the answers.
            {
            	printf("Dynamic \n");
            }
            else
            {
            	printf("Not \n");
            }



 ////////////////////////////////////////////////////////////////

           for(int i=0;i<26;i++) //Declaring the variable =0 , whic are declared as zero outside (starting) of the main for. loop
           {
           	num_alpha[i] = 0;
           }
           
           count_nonzero =0;
           final_count =0;
           ascii = 0;
           
    }   
}
