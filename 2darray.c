//print 2d array
//10/04/23
#include<stdio.h>
int main()
{
    int matrix[2][5];;
    for (int i=0; i<2; i++){
        for (int j=0; j<5; j++){
            printf("enter the value of %d%d element of matrix\n",i,j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int k=0; k<2; k++){
        for (int l=0; l<5; l++)
        {
            printf("enter the value of %d%d element of matrix%d\n",k,l, matrix[k][l]);
        }
    }
    return 0;

}