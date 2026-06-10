#include<stdio.h>

int main(){
    int a[100], n, key, found;
    found = 0;
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
            printf("Found at index %d\n", i);
            found = 1;
        }
    }
    if(found == 0){
        printf("Not found\n");
    }
    return 0;
}