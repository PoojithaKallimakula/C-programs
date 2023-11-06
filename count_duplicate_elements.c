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
    int size,count=0;
    printf("Eneter the size");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);
    /*
    for(int i=0;i<size;i++)
    {
        count=1;
        for(int j=0;j<size;j++)
        {
            if(arr[i] == arr[j] && i != j &&arr[i] !='\0')
            {
                count++;
                arr[j]='\0';
            }
        }
        
  if(count>0 && arr[i] !='\0')  printf(" count of %d is %d",arr[i],count);
    }
//    printf(" total count is %d",count);
*/
    int max1,max2;
    max1=max2=arr[0];
    for(int i=1;i<size;i++)
    {
        if(arr[i]<max1)
        {
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]<max2 && arr[i]!=max1)
            max2=arr[i];

        
    }
    printf("%d",max2);

   return 0;
}

