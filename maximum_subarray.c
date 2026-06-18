#include<stdio.h>
int main()
{
    int i,j,sum=0,target;
    int arr[] = {-2,-3,4,-1,-2,1,5,-3};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    
        for(int j=0;j<sizeof(arr)/sizeof(arr[0]);j++)
        {
            sum += arr[j];
        }
        if(sum==target)
        
    printf("subarray found from %d to %d whose sum %d", i, j, target);
    return 0;
    }