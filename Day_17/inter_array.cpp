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

    printf("Intersection: ");
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            if(a[i]==b[j]) 
            {
                printf("%d ",a[i]);
            }
    return 0;
}