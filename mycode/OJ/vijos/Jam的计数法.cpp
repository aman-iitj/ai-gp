#include<cstdio>
int main(void)
{char a[26],b[26];
int s,t,w,x,i,j;
x=0;
for(i=0;i<=25;i++)
b[i]=97+i;
scanf("%d %d %d %s",&s,&t,&w,a);
i=w-1;
while(x<6)
{if(a[i]<=b[t-1])
 {if(x==0)
  {a[i]++;
x++;
  }
  else
{printf("%s\n",a);
a[i]++;
x++;
}
  }
  else
  {i--;
while((a[i]+1)==(a[i+1]))
 i--;
 if(i<0)
  break;
  a[i]++;
  for(j=i+1;j<=w-1;j++)
   a[j]=a[j-1]+1;
  }
 i=w-1;
}
return 0;
} 
   
