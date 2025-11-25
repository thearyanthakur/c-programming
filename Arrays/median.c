#include<stdio.h>
int main()
{
    int n;
    printf("enter number of elements : ");
    scanf("%d", &n);
    int L[n];
    for(int i=0;i<n;i++){
    printf("enter elements of ist L[%d] : ",i);
    scanf("%d",& L[i]);
    }
    // first i have to  sort elements in ascending order  to find median
    for(int i=0; i<n;i++){
        int j=i;
        while(j>0 && L[j]<L[j-1]){
           int  temp =L[j];
            L[j]=L[j-1];
            L[j-1]=temp;
            j--;
        }
    }
    float median ;
    if (n%2 == 1)
        {
        median = L[n/2];
    } else {
        median = (L[(n-1)/2]+L[n/2])/2.0;
    }
    printf("median = %f", median);

    int mode =  L[0];
    int  maxf = 0;
  for (int i=0;i<n;i++)
  {
    if(mode>maxf)
    {
        mode = L[i];
        maxf = mode;
    }
  }
      printf("%d",mode);
      printf("%d",maxf);
    return 0;
}