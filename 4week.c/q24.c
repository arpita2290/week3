#include <stdio.h>
int main() {
    int arr[2][2][2];
    
    printf("Enter elements of 2x2x2 array:\n");
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            for(int k=0;k<2;k++)
                scanf("%d",&arr[i][j][k]);
    
    printf("\nArray elements:\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++)
                printf("%d ",arr[i][j][k]);
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}