#include<stdio.h>

int main(){
    int m,n;
    printf("Enter m and n:");
    scanf("%d%d",&m,&n);
    int count=0;

    for(int k=m+1;k<n;k++){
        int flag=0;
        if(k==0 || k==1){
            flag=1;
        }
        for(int i=2;i*i<=k;i++){
          if(k%i==0){
              flag=1;
            break;    
          }
        }

        if(flag==0){
             printf("%d ",k);
             count++;
        }
           

    }

    printf("\ncount:%d",count);

    int c=0;
    int r=1;
    int s;

    while(c!=5){
        s=0;
        
        for(int i=1;i<=(r/2);i++){
            if(r%i==0){
                s+=i;
            }
        }

        if(s==r){
            printf("%d ",r);
            c++;
        }
        
        r++;
    }

    return 0;
    
}