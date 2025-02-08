#include <stdio.h>

int check_sorted(int* arr, int n){
    int is_sorted = 1;
    
    for (int i=0; i<n; i++){ 
        if (arr[i] > arr[i+1]){ 
            is_sorted = 0;
        }
    }
    return is_sorted;
}

int main(){
    int n;
    scanf("%d", n); 
    int a[n];
    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int result = check_sorted(a, n);
    printf("%s", result ? 'Sorted' : 'Not Sorted');
}