#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d",&r, &c);

    int matrix1[r][c];
    int matrix2[r][c];
    int result[r][c];

    printf("Enter the valuce for 1st matrix: \n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("[%d][%d] = ",i,j);
            scanf("%d", &matrix1[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("Enter the valuce for 2st matrix: \n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("[%d][%d] = ",i,j);
            scanf("%d", &matrix2[i][j]);
        }
        printf("\n");
    }

    printf("The result fter addtion is: \n ");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            result[i][j]=matrix1[i][j] + matrix2[i][j];
            printf(" %d", result[i][j]);
        }
        printf('\n');

    }


    return 0;
}