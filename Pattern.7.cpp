#include <stdio.h>  
int main()  
{  
    int i,j,k,n,m,kp=1;  
    printf("Enter the number of rows: ");  
    scanf("%d",&n);  
    m=n;  
   for(i=1;i<=n;i++)  
   {  
       for(j=1;j<=m-1;j++)  
       {  
           printf(" ");  
       }  
       for(k=1;k<=2*i-1;k++)  
       {  
         printf("%d",kp);  
       }  
       m--;  
       kp++;
      printf("\n");  
    }  
    return 0;  
}  
