#include<stdio.h>
int main()
{
 int n,i,j,k,a[50];
 scanf("%d",&n);
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 for(i=0;i<n;i++)
 {for(j=i+1;j<n;j++)
  {for(k=j+1;k<n;k++)
   {if(a[i]+a[j]+a[k]==0)
     { printf("%d %d %d\n",a[i],a[j],a[k]);}
   }
  }
 }
 printf("\n");
 return 0;
}
/*
#include<stdio.h>
int main()
{
 int n,i,j,m,a[50],b[50];
 scanf("%d",&n);
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 scanf("%d",&m);
  for(i=0;i<m;i++)
  scanf("%d",&b[i]);

 for(i=0;i<n;i++)
 {for(j=0;j<m;j++)
   if(a[i]!=b[j])
   { printf("%d ",a[j]);break;
   }
   
  
 }
 printf("\n");
 return 0;
}*/

