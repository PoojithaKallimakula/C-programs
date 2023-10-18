/*
Name:K Poojitha
Date:12-10-2023
Description:In mathematics, the sieve of Eratosthenes, one of a number of prime number sieves, is a simple, ancient algorithm for finding all prime numbers up to any given limit. It does so by iteratively marking as composite (i.e., not prime) the multiples of each prime, starting with the multiples of 2.
The sieve of Eratosthenes is one of the most efficient ways to find all of the smaller primes. It is named after Eratosthenes of Cyrene, a Greek mathematician.
Sample input:Enter the value of 'n' : 20
Sample output:The primes less than or equal to 20 are : 2, 3, 5, 7, 11, 13, 17, 19
*/

#include<stdio.h>
int main()
{
    int n,index=0;  //declare n,index=0
    printf("Enter the value of 'n' : ");    //print the message
    scanf("%d",&n); //read n from user
    if ( n < 1 )    //check whether n is less than 1 or not
        printf("Please enter a positive number which is > 1"); // print the error message
    else
    {
        int arr[n-1];   //declare arr[n-1]
        for(int i=2;i<=n;i++)   //store i=2 to i=n into arr
        {
            arr[index]=i;
            index++;
        }
        //finding primes using sieve of Eratosthenes
        for(int i=0;i*i<n;i++)  //iterate the 1st loop for sqrt(n) times
        {
            for(int j=2;j<n-1;j++)    //iteate the 2nd loop for n-1 times
            {
                if(arr[i] != 0 && arr[j]%arr[i] == 0  && arr[j] != 0 && arr[i] != arr[j])
                    arr[j]=0;
            }
        }
          
        for( index=0;index<n-1;index++) //itearte through array and printing the array elements
        {
            if (arr[index] == 0 )
                continue;
            else
              printf("%d ",arr[index]);
        }
    }

   return 0;
}

