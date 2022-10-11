#include<stdio.h>
#include <conio.h>
int main(){
    int a[10][10],b[10][10],c[10][10],d[10][10], row, col,i,j;

    printf("Enter the rows number of both matrices\n");
    scanf("%d",&row);
    printf("Enter the columns number of both matrices\n");
    scanf("%d",&col);


        printf("Enter the elements of matrix A\n");
        for(i=0;i<row;i++){
            for(j = 0;j < col;j++){
                printf("Enter the element at [%d%d] : ",i,j);
                scanf("%d",&a[i][j]);
            }
            printf("\n");

        }

        printf("Enter the elements of matrix B\n");
        for(i=0;i<row;i++){
            for(j = 0;j < col;j++){
                printf("Enter the element at [%d%d] : ",i,j);
                scanf("%d",&b[i][j]);
            }
            printf("\n");

        }

        printf("The addition of A and B is \n\t\t");
        for(i=0;i<row;i++){
            for(j = 0;j < col;j++){
                c[i][j]=a[i][j] + b[i][j];
            }
        }
        //printing addition
        for(i=0;i<row;i++){
            for(j = 0;j < col;j++){
                printf(" %d ",c[i][j]);
            }
            printf("\n\t\t");
        }


        printf("\nThe subtraction of A and B is \n\t\t");
        for(i=0;i<row;i++){
            for(j = 0;j < col;j++){
                d[i][j]=a[i][j] - b[i][j];
            }
        }

        //printing subtraction
        for(i=0;i<row;i++){
            for(j = 0;j < col;j++){
                printf(" %d ",d[i][j]);
            }
            printf("\n\t\t");
        }



    return 0;
}