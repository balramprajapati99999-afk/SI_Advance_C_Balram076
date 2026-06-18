#include<stdio.h>
int main()
{
    int arr[]={1,3,4,6,3};
    int i;
    int size=sizeof(arr)/sizeof(arr[0]);
    {
        for(i=0;i<size/2;i++)
        {
            int temp=arr[i];
            arr[i]=arr[size-1-i];
            arr[size-1-i]=temp;
        }
        for(i=0;i<size;i++)
        {
            printf("%d ",arr[i]);
        }
    }
}