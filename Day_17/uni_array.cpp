#include<stdio.h>
int main(){
    int n,m,i,j,found;
    printf("Size of array 1: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements: ");
    for(i=0;i<n;i++) 
    {
        scanf("%d",&a[i]);
    }

    printf("Size of array 2: ");
    scanf("%d",&m);
    int b[m];
    printf("Enter elements: ");
    for(i=0;i<m;i++) 
    {
        scanf("%d",&b[i]);
    }

    printf("Union: ");
    for(i=0;i<n;i++) 
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<m;i++){
        found=0;
        for(j=0;j<n;j++)
            if(b[i]==a[j]) 
            {
                found=1;
            }
        if(!found) 
        {
            printf("%d ",b[i]);
        }
    }
    return 0;
}