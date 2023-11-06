/*
Name:K Poojitha
Date:03-11-2023
Description:Read size and elements into the array. After reading the input, you need to pass array to the function. In function, you need to remove duplicates/copy non-duplicate elements into new array.
You need to print he final output in main
Please use the prototype given below:
 void fun(int *arr1, int size, int *arr2, int *new_siz
Sample input:Enter the size: 5

Enter elements into the array: 5 1 3 1 5
Sample output:After removing duplicates: 5 1 3
*/

#include <stdio.h>

void fun(int arr1[], int size, int arr2[], int *new_size);

int main()
{
int size, ret;

      //Read size from the user
        printf("Enter the size of the array :");
        scanf("%d", &size);
        int arr1[size]; 
      //Read elements into the array
      for(int i = 0;i < size ;i++)
          scanf("%d",&arr1[i]);
      int arr2[10];
      int new_size=0;
 
      //funtion call
        fun( arr1, size,  arr2, &new_size);



}
 void fun(int arr1[], int size, int arr2[], int *new_size)
{
    int k=0;
    for(int i = 0;i < size;i++)
    {
        for(int j = 1;j < size;j++)
        {
            if(arr1[i] == arr1[j] && i != j)
            {
                arr1[j]='\0';
            }
        }
        if(arr1[i] != '\0')
        {
            arr2[k++] = arr1[i];
            *new_size=k;
        }
    }
    for(int j=0;j<*new_size;j++)
    {
        printf("%d ",arr2[j]);
    }
}
