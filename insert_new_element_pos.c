/*
Name:K Poojitha
Date:
Description:
Sample input:
Sample output:
*/
#if 0
#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int arr[100];
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);
    int val;
    scanf("%d",&val);
    int pos;
    scanf("%d",&pos);
    for(int i=size;i>=pos;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=val;
    for(int i=0;i<=size;i++)
    {
        printf("%d ",arr[i]);
    }


   return 0;
}
#endif
#if 1
#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int arr[100];
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);
    int val;
    scanf("%d",&val);
    int pos;
    for(int i=0;i<size;i++)
    {
        if(val<arr[i])
        {
            pos=i;
            break;
        }
    }
    for(int i=size;i>=pos;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=val;
    for(int i=0;i<=size;i++)
    {
        printf("%d ",arr[i]);
    }


   return 0;
    }
#endif
