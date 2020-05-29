/*
7
3
4
2
3
4
2
5

enter the digit to delete from 0- 9
6

after deletion
3 4 2 3 4 2 5 

enter the digit to delete from 0- 9
4

after deletion
3 0 2 3 0 2 5 

enter the digit to delete from 0- 9
2

after deletion
3 0 0 3 0 0 5 

enter the digit to delete from 0- 9
6

after deletion
3 0 0 3 0 0 5 

enter the digit to delete from 0- 9
5

after deletion
3 0 0 3 0 0 0 

enter the digit to delete from 0- 9
3

after deletion
0 0 0 0 0 0 0 

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
 { printf("\nenter the digit to delete from 0- 9\n");
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

