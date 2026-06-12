#include<stdio.h>
int main(){
    int n;
    printf("Enter size: ");
    scanf("%d",&n);
    int a[100];
    for(int i=0;i<n;i++){
        printf("Enter element: ");
        scanf("%d",&a[i]);
    }
    int total=(n+1)*(n+2)/2;
    int sum=0;
    for(int i=0;i<n;i++) sum=sum+a[i];
    printf("Missing number: %d",total-sum);
    return 0;
}