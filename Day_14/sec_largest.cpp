#include<stdio.h>

int main(){
    int a[100], n, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(int i = n-2; i >= 0; i--){
        if(a[i] != a[n-1]){
            printf("Second largest: %d\n", a[i]);
            return 0;
        }
    }
    printf("No second largest element\n");
    return 0;
}