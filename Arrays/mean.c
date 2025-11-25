#include<stdio.h>
int main(){
int n;
printf("Enter number of elements : ");
scanf("%d",&n);
int L[n];
for(int i=0;i<n;i++)
{ printf("Enter elements L[%d] : ",i);
  scanf("%d",&L[i]);
}

int sum =0;
for (int i=0; i<n;i++)
{
    sum = sum + L[i];   
}
 float avg = (float)sum/n;
printf("Average of numbers is %f", avg);

    return 0;
    
}