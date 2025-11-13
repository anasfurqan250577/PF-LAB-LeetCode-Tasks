#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[2*n], arr2[2*n];
    for(int i=0; i<(2*n); i++) scanf("%d", &arr[i]);
    for(int i=0; i<n; i++){
        arr2[2*i] = arr[i];
        arr2[2*i+1] = arr[i+n];
    }
    
    for(int i=0; i<(2*n); i++) printf("%d ", arr2[i]);
    
    return 0;
}
