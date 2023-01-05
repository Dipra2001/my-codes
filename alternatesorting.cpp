#include<stdio.h>
int main(){
    int arr[9],temp,n,temp1;
    printf("Length: ");
    scanf("%d",&n);
    printf("The array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Sorted Array: ");
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] > arr[j]){
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    int p = 1;
    for(int i=1;i<n;i=i+2){
        if(i+p > n-1){
            break;
        }
        if(arr[i] < arr[n-p]){
            temp = arr[n-p];
            arr[n-p] = arr[i];
            arr[i] = temp;
            p++;
            if(arr[i+1] > arr[n-1] && arr[n-1] < arr[n-2]){
                temp = arr[n-1];
                arr[n-1] = arr[i+1];
                arr[i+1] = temp;
                
            }
            if(arr[i+1] > arr[n-1] && arr[n-1] > arr[n-2]){
                temp = arr[n-2];
                arr[n-2] = arr[i+1];
                arr[i+1] = temp;
            }
        }
       
      
    }
     for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
     }
}