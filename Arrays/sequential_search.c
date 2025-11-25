#include<stdio.h>
int main(){
int n;
printf("number of elements :");
scanf("%d",&n);
int L[n];
int k;
for(int i=0;i<n;i++){
 printf("enter vlaues of elements L[%d]",i);
 scanf("%d",L[i]);
}

for(int i=0;i<n;i++)
{
    if(L[i]=k){
    printf("1");
    }
    else{
    printf("0");
   }
 }
 return 0;
}