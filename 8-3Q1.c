#include<stdio.h>
void main(){
int j,i;
float avg,sum=0;
    printf("enter number of raws:");
 scanf("%d",&j);
    printf("enter number of colums:");
 scanf("%d",&i);
int y[j][i];
int r,c;
for(r=0;r<j;r++)
{
	for(c=0;c<i;c++){
	printf("y[%d][%d]",r,c);
	scanf("%d",&y[r][c]);
  sum = sum + y[r][c];}
}avg= sum/(j*i);
printf("%.2f",avg)

;}
