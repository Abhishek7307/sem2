// write a table useing listing for loop
//27-03-23
#include<stdio.h>
int main()
{
    int i,j;
    //Loop through rows
    for (i = 1; i <= 5; i++){
        // loop through columns
        for (j = 1; j <= 5; j++) {
            printf("%d ", i*j);

            }
            printf("\n");

        }
        return 0;

    }
