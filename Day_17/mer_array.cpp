#include<stdio.h>
int main(){
    int n,m,i,j;
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

    int c[n+m];
    for(i=0;i<n;i++) 
    {
        c[i]=a[i];
    }
    for(j=0;j<m;j++) 
    {
        c[n+j]=b[j];
    }

    printf("Merged: ");
    for(i=0;i<n+m;i++) 
    {
        printf("%d ",c[i]);
    }
    return 0;
}