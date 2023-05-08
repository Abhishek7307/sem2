#include<stdio.h>
int main()
{
    int a=10,sum=0,product=1;
    for (int i = 1; i <=10; i++)
    {
        sum=sum+(a-i);
       product=product*(a-i+1);


    }
    printf("sum is %d\n",sum);
    printf("product is %d",product);

}