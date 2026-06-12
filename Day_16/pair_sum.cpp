#include<stdio.h>
int main(){
    int n,target;
    printf("Enter size: ");
    scanf("%d",&n);
    int a[100];
    for(int i=0;i<n;i++){
        printf("Enter element: ");
        scanf("%d",&a[i]);
    }
    printf("Enter target sum: ");
    scanf("%d",&target);
    int found=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==target){
                printf("Pair found: %d and %d",a[i],a[j]);
                found=1;
            }
        }
    }
    if(found==0) printf("No pair found");
    return 0;
}