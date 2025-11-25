#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("the elements you entered (unsorted array): ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    

    //int n = 7;
    //int arr[] = {2,34,14,31,52,110,19};

    for(int i=0;i<n;i++){
        int j = i;
        while(j>=0 && arr[j+1]<arr[j]){
            //swap arr[j] and arr[j+1]
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            j--;
        }
    }
    printf("Sorted array: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    //key finding (linear search)
    int key;
    printf("enter the key to search");
    scanf("%d",&key);
    int search = 0;
    int index = -1;
    for(int i=0;i<n;i++){
        if(arr[i] == key){
            search = 1;
            index = i+1;
        }
    }
    if(search == 0){
        printf("key not found.\n");
    }else{
        printf("key found at %d",index);
        if(index == 1){
            printf("st");
        } else if (index == 2){
            printf("nd");
        }else if (index == 3){
            printf("rd");
        }else{
            printf("th");
        }
        printf(" place.\n");
    }
    return 0;
}