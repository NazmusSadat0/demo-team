#include <stdio.h>
#include <stdlib.h>
int array(int arr[],int left,int right,int key)
{
    while(left<=right)
    {
        int mid=left+(right-left)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        if(arr[mid]<key)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
    return -1;
}
int main()
{
    int arr[]={1,5,9,7,10,15,19,21,25,29};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=array(arr,0,n-1,21);
    if(result==-1)
        printf("THE NUMBER IS NOT FOUND");
    else
        printf("THE NUMBER IS IN %d INDEX",result);

        printf("\n \tAdil here");
        
    return 0;
}
