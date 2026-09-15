#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        printf("%d ",i*i+1);
    }

    //count number of digits
    int count=0;
    int m;
    printf("Enter m:");
    scanf("%d",&m);
    int k=m;
    int a=m;
    while(k!=0){
        k=k/10;
        count++;
    }

    int sum=0;

    while(m!=0){
        int rem=m%10;

        sum=sum+pow(rem,count);


        m=m/10;

    }

    if(a==sum){
        printf("YES");
    }

    for(int i=0;i<6;i++){
        for(int j=i+1;j<=(2*i + 1);j++){
            printf("%d ",j);
        }
        printf("\n");
    }

    for(int i=0;i<5;i++){
        for(int j=4-i;j>0;j--){
            printf(" ");
        }
        for(int j=i+1;j<=(2*i)+1;j++){
            printf("%d",j);
        }
        for(int j=2*i;j>i;j--){
            printf("%d",j);
        }

        printf("\n");
    }


    int c;
    printf("Enter c:");
    scanf("%d",&c);
   
    while((c-10)>0){
        int s=0;
        while(c!=0){
            int rem=c%10;
            s+=rem;
            c=c/10;
        }
        printf("\n%d\n",s);
        c=s;
    }
    


    return 0;
}