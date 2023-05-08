//print 1d array
//10/04/23
#include<stdio.h>
int main()
{
  int num[5];
  for (int i=0; i<5; i++)
  {
  printf("enter the nunber of student");
  scanf("%d",&num[i]);

  }
  for (int j=0; j<5; j++){
    printf("the number of %d student is %d\n",j, num[j]);
    
  }

}



