#include<stdio.h>

int largest(int n,int arr[n]){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>=max){
            max=arr[i];
        }
    }

    return max;
}

int smallest(int n,int arr[n]){
    int min=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<=min){
            min=arr[i];
        }
    }

    return min;
}

void traverse(int n,int arr[n]){
     for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }   
}

int avg(int n,int arr[n]){
    int sum=0;
     for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int avg=sum/n;
    return avg;
}

int*reverse(int n,int arr[n]){
    for(int i=0;i<=((n/2)-1);i++){
        int a=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=a;
    }

    return arr;
}

void insert(int*n,int*arr){
    int a,p;
    printf("Enter value to insert:");
    scanf("%d",&a);
    printf("Enter position at which element is to be inserted:");
    scanf("%d",&p);

    *n=*n+1;
    for(int i=*n;i>=p;i--){
        arr[i]=arr[i-1];
    }
    arr[p-1]=a;

}

void delete(int*n,int*arr){
    int a,p;
   
    printf("Enter position at which element is to be deleted:");
    scanf("%d",&p);

    for(int i=(p-1);i<(*n-1);i++){
        arr[i]=arr[i+1];
    }

    *n=*n-1;


}

int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        int a;
        printf("Enter value:");
        scanf("%d",&a);
        arr[i]=a;
    }

    printf("Largest element:%d\n",largest(n,arr));
    printf("Smallest element:%d\n",smallest(n,arr));

    printf("Array:\n");
    traverse(n,arr);

    printf("\n\nAverage:%d\n",avg(n,arr));

    insert(&n,arr);
    printf("Array:\n");
    traverse(n,arr);

    delete(&n,arr);
    printf("Array:\n");
    traverse(n,arr);

    return 0;

}