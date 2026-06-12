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
    int b[100],m=0;
    for(int i=0;i<n;i++){
        int dup=0;
        for(int j=0;j<m;j++){
            if(a[i]==b[j]){ dup=1; break; }
        }
        if(dup==0){ b[m]=a[i]; m++; }
    }
    printf("Array after removing duplicates: ");
    for(int i=0;i<m;i++) printf("%d ",b[i]);
    return 0;
}