#include<stdio.h>
#include<conio.h>
int main()
{
  int a[50],b[50],z[100],c,d,e,i;
  clrscr();
  printf("enter size first array \n");
  scanf("%d",&c);
  printf("enter the first array \n");
  for(i=0;i<c;i++)
  {
  scanf("%d",&a[i]);
  z[i]=a[i];

  }
  e=i;
  printf("enter the size of second array \n");
  scanf("%d",&d);
  printf("enter the second array \n");
  for(i=0;i<d;i++)
  {
   scanf("%d",&b[i]);
   z[e]=b[i];
   e++;
}
printf("the merged array:\n");
for(i=0;i<e;i++)
{
 printf("%d\n",z[i]);
 }
 getch();
 return 0;
 }

