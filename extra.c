/*
enter the limit for array1
5 

enter the elements for array1
4

1
3
6
3

enter the limit for array2
6

enter the elements for array2
2
3
1
5
6
7
ELEMENT:2 INDEX:1
ELEMENT:5 INDEX:4
ELEMENT:7 INDEX:6
*/
#include<stdio.h>
int main()
{
 int a[20],b[20],n,m,i,j,f=0,f1=0;
 printf("enter the limit for array1\n");
 scanf("%d",&n);
 printf("\nenter the elements for array1\n");
 for(i=0;i<n;i++)
   scanf("%d",&a[i]);
 printf("\nenter the limit for array2\n");
 scanf("%d",&m);
 printf("\nenter the elements for array2\n");
 for(j=0;j<m;j++)
   scanf("%d",&b[j]);
   if(n>=m)
    { 
      for(i=0;i<n;i++)
       for(j=0;j<m;j++)
        if(a[i]==b[j])
          a[i]=-1;
          f=1;
    }
   else
   { for(i=0;i<n;i++)
       for(j=0;j<m;j++)
        if(a[i]==b[j])
          b[j]=-1;
          f1=1;
   }
 if(f==1)
 {
   for(i=0;i<n;i++)
    {
       if(a[i]!=-1)
         {
           printf("ELEMENT:%d INDEX:%d\n",a[i],i+1);
         }
    }
 }
 else
 {
   for(j=0;j<m;j++)
    {
       if(b[j]!=-1)
         {
           printf("ELEMENT:%d INDEX:%d\n",b[j],j+1);
         }
    }
 }

printf("\n");
 return 0;
}
