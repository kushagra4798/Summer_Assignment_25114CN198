#include<stdio.h>

int main(){
    int a[100], n, key, count;
    count = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the key to search: ");
    scanf("%d", &key);
    for(int i = 0; i < n; i++){
        if(a[i] == key){
            count++;
        }
    }
    printf("Frequency: %d\n", count);
    return 0;
}