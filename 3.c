#include<stdio.h>

void traverse(int n,int arr[n]){
     for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }   
}

void bubbleSort(int n,int arr[n]){
    int count_comparisons=0;
    int count_swaps=0;

    for(int i=0;i<(n-1);i++){
        int swapped=0;
        for(int j=0;j<(n-i-1);j++){
            count_comparisons++;
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                count_swaps++;
                swapped=1;
            }
        }
        if(swapped==0){
            break;
        }
    }

    printf("count_swaps:%d\n",count_swaps);
    printf("count_comparisons:%d\n",count_comparisons);
    traverse(n,arr);
}

void selectionSort(int n,int arr[n]){
    int count_comparisons=0;
    int count_swaps=0;
    int min;

    for(int i=0;i<(n-1);i++){
        min=i;
        for(int j=(i+1);j<n;j++){
            count_comparisons++;
            if(arr[min]>arr[j]){
                min=j;
            }
        }

        if(min!=i){
                int temp=arr[min];
                arr[min]=arr[i];
                arr[i]=temp;
                count_swaps++;
            }

    }

    printf("count_swaps:%d\n",count_swaps);
    printf("count_comparisons:%d\n",count_comparisons);
    traverse(n,arr);
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

    int a2[n];
    for(int i=0;i<n;i++){
        a2[i]=arr[i];
    }

    printf("Array:\n");
    traverse(n,arr);

    printf("\nbubble sort:\n");
    bubbleSort(n,arr);


    printf("\nselection sort:\n");
    selectionSort(n,a2);

    return 0;

}