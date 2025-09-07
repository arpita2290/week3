#include <stdio.h>
int main() {
    int sales[5][3], i, j;
    
    // Input sales data
    for(i=0;i<5;i++){
        printf("Enter sales for salesman %d (3 products): ", i+1);
        for(j=0;j<3;j++) scanf("%d",&sales[i][j]);
    }
    
    // Total sales by each salesman
    printf("\nTotal sales by each salesman:\n");
    for(i=0;i<5;i++){
        int sum=0;
        for(j=0;j<3;j++) sum+=sales[i][j];
        printf("Salesman %d: %d\n", i+1, sum);
    }
    
    // Total sales of each product
    printf("\nTotal sales of each product:\n");
    for(j=0;j<3;j++){
        int sum=0;
        for(i=0;i<5;i++) sum+=sales[i][j];
        printf("Product %d: %d\n", j+1, sum);
    }
    return 0;
}