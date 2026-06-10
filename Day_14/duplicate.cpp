#include<stdio.h>

int main(){
    int a[100], n;
    int found = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("Duplicates: ");
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(a[i] == a[j]){
                printf("%d ", a[i]);
                found = 1;
                break;
            }
        }
    }
    if(found == 0){
        printf("No duplicates found");
    }
    else{
        printf("\n");
    }
    return 0;
}