//a sum of 2 digits
/*
5
2
3
4
1
5
o/p:
5
2 3
4 1
*/
#include<stdio.h>
int main()
{
 int n,a[20],find,i,j,flag=0;
 printf("enter the limit for array\n");
 scanf("%d",&n);
 printf("enter the array of elements\n");
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 printf("enter the number to get a sum\n");
 scanf("%d",&find);
 printf("the elements are\n");
 for(i=0;i<n;i++)
 {for(j=i+1;j<n;j++)
  {if(a[i]+a[j]==find)
    {printf("%d %d",a[i],a[j]);
     flag=1;
     printf("\n");
    }
  }
 }
 if(flag==0)
   printf("no elements form the sum\n");
 printf("\n");
 return 0;
}
