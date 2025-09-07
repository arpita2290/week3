#include <stdio.h>
int main() {
    int arr[2][2][2] = {{{1,2},{3,4}},{{5,6},{7,8}}};
    int *ptr = (int *)arr;
    
    printf("Elements using pointer:\n");
    for(int i=0;i<8;i++) printf("%d ",*(ptr+i));
    
    return 0;
}