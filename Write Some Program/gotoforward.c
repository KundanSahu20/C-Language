#include <stdio.h>  
int main()   
{  
  int i, j;    
  for(i=0;i<=2;i++)  
  {  
    for(j=0;j<=5;j++)  
    {   
        printf("%d %d\n",i,j);  
        if(i == 2)  
        {  
          goto out;   
        }   
    }  
  }  
  out:   
  printf("came out of the loop");   
}  