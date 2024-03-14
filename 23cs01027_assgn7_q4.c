#include <stdio.h>

int n;

int max(int a, int b){
    if(a < b)
        return b;
    return a;
}
int getMax(int *a, int i){
    if(i < n-1){
        return max(a[i], getMax(a, i+1));
    }
    else{
        return a[i];
    }
}

int main(){
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the array: ");
    for(int i = 0;i < n ;++i)
        scanf("%d", &a[i]);
    printf("%d\n", getMax(a, 0));
    return 0;
}