#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }

    int x;
    scanf("%d",&x);
    arr[x-1]=1-arr[x-1];
    for(int i=0; i<n; i++) {
        printf("%d",arr[i]);
        if (i<n-1) {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
