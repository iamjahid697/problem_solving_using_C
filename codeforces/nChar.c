#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch >= 'a' && ch <= 'z'){
        ch -= 32;
    }
    else{
        ch +=32;
    }
    printf("%c\n", ch);
    return 0;
}
