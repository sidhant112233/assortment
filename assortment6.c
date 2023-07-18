#include<stdio.h>
main()
{
	int a[3][3] = {{1,2,3},
				   {4,5,6},	
				   {7,8,9}};
    int i,j,sum;
    
    for(i=0;i<=2;i++)
    {
    	for(j=0;j<=2;j++)
    	

    	{
    		if(j==i)
    		{
    			
			
    		sum =sum+a[i][j];
    		
     	}
		}
		printf("sum =%d",sum);
		
	}
}
