// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N

#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch >= 'a' && ch <= 'z'){
        ch -= 32; //lowercase
    }
    else{
        ch +=32; //uppercase
    }
    printf("%c\n", ch);
    return 0;
}
