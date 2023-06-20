#include<stdio.h>
int main()
{
    int a[5],s,l,i;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
 }
  s=a[0];
  l=a[0];
  for(i=1;i<5;i++)
  {  
   if(a[i]<s)
   {
    s=a[i];
   }
   if(a[i]>l)
   {
    l=a[i];
   }
  }
  printf("Large=%d\n Small =%d",l,s);
  return 0;
}
