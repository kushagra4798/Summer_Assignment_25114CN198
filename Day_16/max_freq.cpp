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
    int maxfreq=0,element=a[0];
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(a[i]==a[j]) count++;
        }
        if(count>maxfreq){
            maxfreq=count;
            element=a[i];
        }
    }
    printf("Max frequency element: %d",element);
    return 0;
}