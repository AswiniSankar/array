/*
enter the limit for array1 and array2
5
6
enter the elemnts for array1
2
4
5
2
4
enter the elements for array2
2
3
1
8
9
10

---array1---
5 2 4 
---array2---
2 3 1 8 9 10 
INTERSECTION
2 
UNION
3 1 8 9 10 5 2 4 
*/
#include<stdio.h>
int main()
{
  int innerloop,outerloop,array1[20],array2[20],limit1,limit2,c=0,i,j;
  printf("enter the limit for array1 and array2\n");
  scanf("%d%d",&limit1,&limit2);
  printf("enter the elemnts for array1\n");
  for(i=0;i<limit1;i++)
   scanf("%d",&array1[i]);
  printf("enter the elements for array2\n");
  for(i=0;i<limit2;i++)
   scanf("%d",&array2[i]);
   printf("\n---array1---\n");
   for(i=0;i<limit1;i++)
   {for(j=i+1;j<limit1;j++)
    {if(array1[i]==array1[j] && array1[i]!=-1)
      {
        array1[i]=-1;
        break;
      } 
    }
   }
  for(i=0;i<limit1;i++)
  { 
   if(array1[i]!=-1)
     printf("%d ",array1[i]);
  }
  printf("\n---array2---\n");
   for(i=0;i<limit2;i++)
   {for(j=i+1;j<limit2;j++)
    {if(array2[i]==array2[j] && array2[i]!=-1)
      {
        array2[i]=-1;
        break;
      } 
    }
   }
  for(i=0;i<limit2;i++)
  { 
   if(array2[i]!=-1)
     printf("%d ",array2[i]);
  }
 printf("\nINTERSECTION\n");
 if(limit1>=limit2)
 {
   for(outerloop=0;outerloop<limit1;outerloop++)
   {
     for(innerloop=0;innerloop<limit2;innerloop++)
     {
        if(array1[outerloop]==array2[innerloop] && array1[outerloop]!=-1)
         {
            printf("%d ",array1[outerloop]);
            array1[outerloop]=-1;
              break;
        }
     }
   }
  printf("\nUNION\n");
 for(j=0;j<limit1;j++)
 {if(array1[j]!=-1)
   printf("%d ",array1[j]);
 }
 for(i=0;i<limit2;i++)
 { if(array2[i]!=-1)
   printf("%d ",array2[i]);
 }
 }
 else
 {
      for(outerloop=0;outerloop<limit2;outerloop++)
   {
     for(innerloop=0;innerloop<limit1;innerloop++)
     {
        if(array1[innerloop]==array2[outerloop] && array2[outerloop]!=-1)
        {  printf("%d ",array2[outerloop]);
             array2[outerloop]=-1;
              break;
        }
     }
   }
 printf("\nUNION\n");
 for(i=0;i<limit2;i++)
 {if(array2[i]!=-1)
   printf("%d ",array2[i]);
 }
 for(j=0;j<limit1;j++)
 {if(array1[j]!=-1)
   printf("%d ",array1[j]);
 }
 }
 printf("\n");
  
  
}
