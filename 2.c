#include<stdio.h>

void linearSearch(int n,int arr[n],int val){
    int count=0;

    for(int i=0;i<n;i++){
        count++;
        if(arr[i]==val){
            printf("Value found\n");
            printf("\nNo. of comparisons:%d\n",count);
            return;
        }
        
    }

    printf("Value NOT found\n");
    printf("No. of comparisons:%d\n\n",count);
    return;

}

void binarySearch(int n,int arr[n],int val){
    int count=0;

    for(int i=0;i<(n-1);i++){
        for(int j=i+1;i<n;i++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    int left=0;
    int right=(n-1);

    while(left<right){
        int mid=(right-left)/2;
        count++;
        if(arr[mid]==val){
            printf("Value found\n");
            printf("\nNo. of comparisons:%d\n",count);
            return;
        }
        else if(arr[mid]<val){
            left=mid;
        }else{
            right=mid;
        }
    }

    printf("Value NOT found\n");
    printf("No. of comparisons:%d\n",count);
    return;

}

int main(){
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        int a;
        printf("Enter value:");
        scanf("%d",&a);
        arr[i]=a;
    }

    int val;
    printf("Enter value to be searched:");
    scanf("%d",&val);

    printf("\nLINEAR SEARCH\n");
    linearSearch(n,arr,val);

    printf("BINARY SEARCH\n");
    binarySearch(n,arr,val);

    return 0;

}