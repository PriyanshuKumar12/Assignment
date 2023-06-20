#include<stdio.h>
int main()
{
  int a[8],i,n,count=0,num;
  printf("Enter no. of elements: ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
{
    printf("Enter no. of element of array: ");
    scanf("%d",a[i]);
}
printf("Enter num to be counted: ");
scanf("%d",&num);
for(i=0;i<n;i++)
{
    if(num=a[i])
    {
        count++;
    }
 else
 {
    printf("Number not found");
 }
}
printf("Total no. of occurence is %d",count);
return 0;
}