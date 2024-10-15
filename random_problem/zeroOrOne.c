#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int zeroCount = 0,oneCount = 0;
    for(int i=0; i<n; i++){
        int x;
        scanf("%d",&x);

        if(x==0){
            zeroCount++;
        }
        else{
            oneCount++;
        }
    }
    printf("%d %d\n", zeroCount,oneCount);
    return 0;
}
