#include <stdio.h>
int main() {
    int m,n;
    printf("Enter rows and columns: ");
    scanf("%d%d",&m,&n);
    
    int A[m][n], B[m][n], C[m][n];
    
    printf("Enter elements of Matrix A:\n");
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++) scanf("%d",&A[i][j]);
    
    printf("Enter elements of Matrix B:\n");
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++) scanf("%d",&B[i][j]);
    
    printf("\nSum Matrix:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            C[i][j]=A[i][j]+B[i][j];
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}