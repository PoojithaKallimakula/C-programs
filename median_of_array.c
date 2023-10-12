/*
Name:K Poojitha
Date:12-1-2023
Description:In probability theory and statistics, a median is described as the number separating the higher half of a sample, a population, or a probability distribution, from the lower half. The median of a finite list of numbers can be found by arranging all the numbers from lowest value to highest value and picking the middle one.
Example:
 For getting the median of input array { 12, 11, 15, 10, 20 }, first sort the array. We get { 10, 11, 12, 15, 20 } after sorting. Median is the middle element of the sorted array which is 12.
Sample input
:Enter the 'n' value for Array A: 5
Enter the 'n' value for Array B: 5

Enter the elements one by one for Array A: 3 2 8 5 4
Enter the elements one by one for Array B: 12 3 7 8 5
Sample output:
Median of array1 : 4
Median of array2 : 7
Median of both arrays : 5.5
*/

#include<stdio.h>
float sorted_Array(int arr[] ,int size); 
int main()
{
    int M,N,arr1[20],arr2[20];
    printf("Enter the 'n' value for Array A: ");
    scanf("%d",&N);
    printf("Enter the 'm' value for Array B: ");
    scanf("%d",&M);
    printf("Enter the elements one by one for Array A: ");
    for (int i=0;i<N;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the elements one by one for Array B: ");
    for (int i=0;i<M;i++)
    {
        scanf("%d",&arr2[i]);
    }
    float median1=sorted_Array(arr1,N);
    float  median2=sorted_Array(arr2,M);
    float median=(float)(median1+median2)/2; 
    printf("Median of array1 : %g\n",median1);
    printf("Median of array2 : %g\n",median2);
    printf("Median of both arrays : %g",median);

   return 0;
}
float sorted_Array(int *arr,int size)
{
    float result;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i] > arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    if (size%2 == 0)
    {
        result=(float)(arr[size/2]+arr[size/2-1])/2;

    }
    else
        result=arr[size/2];
        
    return result;
}



