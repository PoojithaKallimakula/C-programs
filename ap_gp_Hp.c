/*
Name:K Poojitha
Date:06-10-2023
Description
:AP :
In mathematics, an arithmetic progression (AP) or arithmetic sequence is a sequence of numbers such that the difference between the consecutive terms is constant.
For instance, the sequence 5, 7, 9, 11, 13, 15 ... is an arithmetic progression with common difference of 2.
GP :
In mathematics, a geometric progression, also known as a geometric sequence, is a sequence of numbers where each term after the first is found by multiplying the previous one by a fixed, non-zero number called the common ratio.
For example, the sequence 2, 6, 18, 54, ... is a geometric progression with common ratio 3. Similarly 10, 5, 2.5, 1.25, ... is a geometric sequence with common ratio 1/2.
HP :
 In mathematics, a harmonic progression (or harmonic sequence) is a progression formed by taking the reciprocals of an arithmetic progression.
Sample input:
Enter the First Number 'A': 2
Enter the Common Difference / Ratio 'R': 3
Enter the number of terms 'N': 5
Sample output:AP = 2, 5, 8, 11, 14
GP = 2, 6, 18, 54, 162
HP = 0.500000, 0.200000, 0.125000, 0.090909, 0.071428
*/

#include<stdio.h>
int main()
{
    int A,R,N;
    int AP,GP;
    float HP;
    printf("Enter the First Number 'A': ");
    scanf("%d",&A);
    printf("Enter the Common Difference / Ratio 'R': ");
    scanf("%d",&R);
    printf("Enter the number of terms 'N': ");
    scanf("%d",&N);
    if ( N < 0 )
        printf("Invalid input");
    else
    {
        AP=A;
        printf("AP = %d",AP);
        for ( int i=2;i<=N;i++ )
        {
            AP=AP+R;
            printf(", %d",AP);

        }

        GP=A;
        printf("\nGP = %d",GP);
        for ( int i=2;i<=N;i++ )
        {
            GP=GP*R;
            printf(", %d",GP);
        }

        HP=(float)1/A;
        AP=A;
        printf("\nHP = %f",HP);
        for ( int i=2;i<=N;i++ )
        {
            AP=AP+R;
            HP=(float)1/AP;
            printf(", %f",HP);

    }
    }

   return 0;
}

