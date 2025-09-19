#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
int set1[30],set2[30],s1,s2,uni[30],inter[30],diff[30],i,ch;
clrscr();
printf("enter no of elements in first set");
scanf("%d",&s1);
printf("enter no of elements in second set\n");
scanf("%d",&s2);
printf("enterr the elements in first set\n");
for(i=0;i<s1;i++)
{
scanf("%d",&set1[i]);
}
printf("enter the elements in second set\n");
for(i=0;i<s2;i++)
{
scanf("%d",&set2[i]);
}
printf("\n 1.UNION");
printf("\n 2.INTERSECTION");
printf("\n 3.DIFFERENCE");
printf("\n 4.EXIT");
while (1)
{
printf("enter choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
if(s1==s2)
{
printf("\nelements   after union operation:");
for(i=0;i<s1;i++)
{
uni[i]=set1[i]|set2[i];
printf("%d",uni[i]);
}
}
else{
     printf("set union not possible\n");
     }
     break;
case 2:
if(s1==s2)
{
printf("the elements after intersection\n");
for(i=0;i<s1;i++)
{
inter[i]=set1[i]&set2[i];
printf("%d",inter[i]);
}
}
else
{
 printf("set intersection i s not possible ") ;
 }
 break;
case 3:
if(s1==s2)
{
printf("\n elements after difference eoperation;");
for(i=0;i<s1;i++)
{
diff[i]=set1[i]&set2[1];
}
}
else{
printf("set difference not possible \n");
}
case 4:exit(0);
break;

default:
printf("\wrong choice invalid choice");
break;
}
}
}