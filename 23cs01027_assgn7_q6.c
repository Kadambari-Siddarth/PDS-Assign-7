#include <stdio.h>
#include <string.h>

int main(){
    char s[1000];
    printf("Enter the string: ");
    fgets(s, 1000, stdin);

    char sub[1000];
    printf("Enter the substring: ");
    fgets(sub, 1000, stdin);

    if(strstr(s, sub)!= NULL){
        printf("It is a substring \n");
    }
    else
        printf("It is not a substring \n");
    return 0;
}