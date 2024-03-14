#include <stdio.h>
#include <string.h>

int main(){
    int f[256] = {0};
    char s[1000];
    printf("Enter a string: ");
    fgets(s, 1000, stdin);
    // scanf("%s", &s);

    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    for(int i = 0; s[i] != '\0'; ++i){
        ++f[s[i]];
    }
    printf("Frequency of %c is %d", c, f[c]);
    return 0;
}