/*
#include <stdio.h>

int main()
{
    int r, c;
    printf("Enter row and column(r c): ");
    scanf("%d %d", &r, &c);

    int Matrix1[r][c];
    int Matrix2[r][c];
    int Result[r][c];

    printf("INput for first Matrix: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("[%d][%d]= ", i, j);
            scanf("%d", &Matrix1[i][j]);
        }
    }

    printf("input for second Matrix: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("[%d][%d]= ", i, j);
            scanf("%d", &Matrix2[i][j]);
        }
    }

    printf("After addition: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            Result[i][j] = Matrix1[i][j] + Matrix2[i][j];
            printf("%d ", Result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/

// using function
#include <stdio.h>
void input(int matrix[100][100], int r, int c);
void add(int matrix1[100][100],int matrix2[100][100], int Result[100][100], int r, int c);

int main()
{
    int r, c;
    printf("Enter Row and Colum (r c): ");
    scanf("%d %d", &r, &c);

    int Matrix1[r][c];
    int Matrix2[r][c];
    int Result[r][c];

    printf("Input for first matrix: \n");
    input(Matrix1,r,c);

    printf("Input for second Matrix: \n");
    input(Matrix2,r,c);

    printf("The Result is: \n");
    add(Matrix1,Matrix2,Result,r,c);

    return 0;
}

void input(int matrix[100][100], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("[%d][%d]= ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void add(int Matrix1[100][100], int Matrix2[100][100], int Result[100][100], int r, int c){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            Result[i][j]=Matrix1[i][j] + Matrix2[i][j];
            printf("%d ", Result[i][j]);
        }
        printf("\n");
    }
}