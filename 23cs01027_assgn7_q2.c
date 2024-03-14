#include <stdio.h>
#include <string.h>

int main(){
    char s[1000];
    printf("Input: ");
    fgets(s, 1000, stdin);

    int j, i;
    for( i = 0,  j = 0; s[i] != '\0'; ++i){
        //65 = A, 90 = Z; 97 = a, z = 122
        if((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122)){
            s[j] = s[i];
            ++j;
        }
    }
    s[j] = '\0';
    printf("Output: %s\n", s);
    return 0;
}
