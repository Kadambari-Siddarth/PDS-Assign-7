#include <stdio.h>
#include <string.h>

int swap(char *s, int i){
    if(i >= strlen(s) - i - 1) {
        return 0;
    }
    char tmp = s[i];
    s[i] = s[strlen(s) - i - 1];
    s[strlen(s) - i - 1] = tmp;
    return swap(s, i + 1);
}

int main(){
    char s[1000];
    printf("Enter a string: ");
    scanf("%s", &s);
    swap(s, 0);
    printf("%s\n", s);
    return 0;
}