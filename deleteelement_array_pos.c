/*
Name:K Poojitha
Date:
Description:
Sample input:
Sample output:
*/

#include<stdio.h>
int main()
{
  int size;
  printf("enter the size");
  scanf("%d",&size);
  int arr[size];
  for(int i=0;i<size;i++)
      scanf("%d",&arr[i]);
  int pos;
  scanf("%d",&pos);

  if(pos < size && pos >= 0)
  {
      /*
      for(int i=pos;i<size;i++)
          arr[i]=arr[i+1];
  
  for(int i=0;i<size-1;i++)
      printf("%d",arr[i]);
  }
  */
  for(int i=0;i<size;i++)
  {
      if(i == pos)
          continue;
      else
          printf("%d",arr[i]);
  }
}

  else
      printf("Invalid input");

}

