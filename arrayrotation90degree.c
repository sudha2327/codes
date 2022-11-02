/* C Program to rotate matrix by 90 degrees */
#include<stdio.h>
int main()
{
 int a[200][200];
 int m,n,i,j;
 printf("enter an array size:\n");
 scanf("%d%d",&m,&n);
 

 printf("enter matrix elements: \n");
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 
// logic part
 printf("Matrix after 90 degrees roration \n");
 for(i=0;i<n;i++)
 {
  for(j=m-1;j>=0;j--)
  {
	     printf("%d\t",a[j][i]);
  }
  printf("\n");
 }
 
 return 0;
 
}
