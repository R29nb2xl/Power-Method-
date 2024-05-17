/*finding dominant eigen vector and eigen value through power method*/
#include <stdio.h>
#include<math.h>
void main() {
  int s , i , j ,k , l , m ,n; 
  printf("Enter the size of the square Matrix (i.e. number of rows or columns):");
  scanf("%d", &s);
  int a[s][s];
  
  printf("\nEnter elements of the matrix:\n");
  for (i = 0; i < s; i++)
  {  for (j = 0; j < s; j++) 
    {  printf("Enter element a[%d][%d]: ", i + 1, j + 1);
       scanf("%d", &a[i][j]);
    }
  } 
   
  float x[s],x_new[s],b[s],c,d , lamda;
  printf(" \nEnter the trial eigen vector:\t");
  for (k = 0; k <s; k++)
  {  printf("Enter element x%d1: ", k+1 );
     scanf("%f", &x[k]);
  }   
  printf ( "\n please enter the number of iterations :\t");
  scanf("%d",&n);
  
  
  float temp;
  for ( i = 0 ; i < n ; i++)
  {  for ( j = 0 ; j < s ; j++)
     {  temp =0.0;
        for( k = 0 ; k < s ; k++)
        {  temp = temp + a[j][k]*x[k];}
        x_new[j] = temp;}
     for ( l = 0 ; l < s ; l++)
      x[l]=x_new[l];
  }
  
    
  printf("\n The dominating eigen vector is:\t");
  for( m = 0 ; m < s ; m++)   
  {  printf("\n %f",x[m]/x[s-1]);} 
         
   
   for(i=0;i<s;i++)
   { temp=0;
     for(j=0;j<s;j++)
     { temp=temp+a[i][j]*x[j];}
     b[i]=temp;}
  
   temp=0;
   for(i=0;i<s;i++)
   { temp=temp+b[i]*x[i];}
   c= temp;
    
   temp=0;
   for(i=0;i<s;i++)
   { temp=temp+x[i]*x[i];}
   d= temp;
   lamda=c/d;
   
   printf("\n And the eigen value associated with it is : %f",lamda);}