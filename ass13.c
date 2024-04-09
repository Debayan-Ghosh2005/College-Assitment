#include <stdio.h>

int main() { 
    int arr[50];
    int size, i, pass, temp;  
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    printf("Enter the array elements:\n");
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    for(pass = 0; pass < size - 1; pass++) {
        for(i = 0; i < size - 1 - pass; i++) {
            if(arr[i] < arr[i + 1]) {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
    printf("Descending order of the array elements:\n");
    for(i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}
