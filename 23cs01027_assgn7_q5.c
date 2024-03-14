#include <stdio.h>

int main(){
    char s[1000];
    printf("Input: ");
    fgets(s, 1000, stdin);

    int l = -1;
    for(int i = 0;s[i]!='\0'; ++i){
        l++;
    }
    int i =0;
    while(i < l - i - 1){
        if(s[i] != s[l - i - 1]){
            printf("Not a palindrome\n");
            return 0;
        }
        ++i;
    }
    printf("String is a palindrome\n");
    return 0;
}