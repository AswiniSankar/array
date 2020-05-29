/*
7
3
4
2
3
4
2
5
6
enter the valid number to delete from the list
3-4-2-3-4-2-5-
3
4-2-4-2-5-
8
enter the valid number to delete from the list
4-2-4-2-5-
5
4-2-4-2-
7
enter the valid number to delete from the list
4-2-4-2-
4
2-2-
2
list is empty no more elements to delete

*/
/*
#include<stdio.h>
int main()
{
  int n,a[20],i,d,c=0,c1=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
while(c<n)
{
 scanf("%d",&d);
 c1=0;
 for(i=0;i<n;i++)
 {
   if(a[i]==d)
    { a[i]='*';
        c++;
     }
    else
      c1++; 
  }

  //printf("%d---%d\n",c,c1);
  if(c==n)
   {  printf("list is empty no more elements to delete\n");
       break;
   }
  else if(c1==n)
   { printf("enter the valid number to delete from the list\n");
      for(i=0;i<n;i++)
      {if(a[i]!='*')
         printf("%d-",a[i]);
      }
      printf("\n");
  }
  else
  { for(i=0;i<n;i++)
      {if(a[i]!='*')
         printf("%d-",a[i]);
      }
      printf("\n");
  }
 
 } printf("\n");
  return 0;
}
/*
232
6
enter the valid digit to delete
2-3-2-
2
3-
3
digits of the number is deleted completely

*/
/*
#include<stdio.h>
int main()
{
  int n,t,r,s,i,d,a[20],c=0;
  scanf("%d",&n);
  while(n)
  {
   r=n%10;
   a[c]=r;
   c++;
   n=n/10;
  }
 s=0;
 while(s<c)
 { scanf("%d",&d);
    t=0;
    for(i=0;i<c;i++)
    {
      if(d==a[i])
        { a[i]=-1;
           s++;
        }
       else
         t++;
    }
  if(s==c)
   {printf("digits of the number is deleted completely\n");
    break;
   }
  else if(t==c)
   { printf("enter the valid digit to delete\n");
      for(i=0;i<c;i++)
     if(a[i]!=-1) 
       printf("%d-",a[i]);
     printf("\n");
  }
  else
  { for(i=0;i<c;i++)
     if(a[i]!=-1) 
       printf("%d-",a[i]);
       printf("\n");
  }
}
 printf("\n");
 return 0;
}
//hackerrank coding...

#include <stdio.h>
#include <stdlib.h>

void findDigits(int );

// Complete the findDigits function below.
void findDigits(int n) {
  int array[20],i,r,c=0,temp,c1=0;
  temp=n;
    while(n)
    {
        r=n%10;
        if(r!=0)
         {array[c]=r;
         c++;}
         n=n/10;
    }
    for(i=0;i<c;i++)
    {
        if(temp%array[i]==0 && array[i]!=0)
            c1++;
    }
  for(i=0;i<c;i++)
    printf("%d",array[i]);
  printf("===%d===\n",c1);
}

int main()
{
   int t,n,i,res;
   scanf("%d",&t);
   for(i=0;i<t;i++)
  {scanf("%d",&n);
   findDigits(n);
    printf("\n");
  }
 return 0;
}*/
//hackerrank coding...
/*
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void sort(int,int[]);
int main() {

  
    int n,i,a[1000],temp,j,t=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
   
   for(i=0;i<n;i++)
     if(a[i]==a[i+1])
        c++;
   if(a==NULL || n==c+1)
       printf("0");
    else if(n==2)
    {
        if(a[0]!=a[1])
            printf("%d",abs(a[0]-a[1]));
        else
            printf("%d",a[0]);
    }
    else
    { sort(n,a);
     t=0;
   while(t<n)
   {
       if(a[0]!=a[1])
        { a[1]=abs(a[0]-a[1]);
         a[0]=0;
          sort(n,a);
        }
       if(a[0]==a[1])
        {
          a[0]=a[1]=0;
          sort(n,a);
        }
       t++;
       

     }
      printf("%d",a[0]);
 
    }
    return 0;
}

void sort(int n, int arr[])
{
   int temp,i,j;
   for(i=0;i<n;i++)
   {for(j=i+1;j<n;j++)
    {			if(*(arr+i)<*(arr+j))
			{
				temp=*(arr+i);
				*(arr+i)=*(arr+j);
				*(arr+j)=temp;
			}
    }
   }
}
*/
#include<stdio.h>
#include<math.h>
int main()
{
 int n,a[50],i,d,t,j,r,t2,t1=0,digit=10,num=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
   scanf("%d",&a[i]);
 while(t1<10)
 { printf("\nenter the digit to delete from 0- 9");
   scanf("%d",&d);
  
    for(i=0;i<n;i++)
    {
       num=0;
       int t2=1;
       t=a[i];
       while(t>0)
       { 
         r=t%digit;
        
         if(r!=d)
         {
                 num=(r*t2)+(num);
                 t2*=10;    
                
             }  
                t=t/10;
          } 
       
             a[i]=num; 
         } 
    int c1=0;
      printf("\nafter deletion\n");
          for(j=0;j<n;j++)
           { printf("%d ",a[j]);
              if(a[j]==0)
                 c1++;
           }
           printf("\n");
    
  if(c1==n)
   {break;
   }
  else
     t1++;
 }
 printf("\n");
 return 0;
}

