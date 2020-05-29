/*
enter the limit
5
enter the numbers
3
4
2
3
4
the numbers in the list are
============================
3 4 2 3 4 
enter the digit you want to delete from the list
7
the numbers in the list are
============================
3 4 2 3 4 
enter the digit you want to delete from the list
3
the numbers in the list are
============================
4 2 4 
enter the digit you want to delete from the list
8
the numbers in the list are
============================
4 2 4 
enter the digit you want to delete from the list
2
the numbers in the list are
============================
4 4 
enter the digit you want to delete from the list
4
*/
#include<stdio.h>
int main()
{
 int a[50],i,n,d,c=0,f=0;
 printf("enter the limit\n");
 scanf("%d",&n);
 printf("enter the numbers\n");
 for(i=0;i<n;i++)
   scanf("%d",&a[i]);
 
 do{
   printf("the numbers in the list are\n");
   printf("============================\n");
   for(i=0;i<n;i++)
    {
      if (a[i]==-1)
        continue;
     else
       printf("%d ",a[i]);
    }
   printf("\nenter the digit you want to delete from the list\n");
   scanf("%d",&d);
   for(i=0;i<n;i++)
   {
       if(a[i]==d)
        {
            a[i]=-1;
            c++;
            f=1;  
        }
        else
          f=0;
   }
 }while(n>c);
 return 0;
}
