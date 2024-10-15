#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int minSalami[n];
    int maxSalami = 0;
    for(int i=0; i<n; i++){
        scanf("%d",&minSalami[i]);
        if(minSalami[i]>maxSalami){
             maxSalami=minSalami[i];
        }

    }
    for(int i=0; i<n; i++){
        printf("%d ", maxSalami-minSalami[i]);
    }
    return 0;
}

