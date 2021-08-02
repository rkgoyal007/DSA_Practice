#include <bits/stdc++.h>
using namespace std; 


void twoSmallest(int arr[],int arr_size)
{
    int first ,second;
    if(arr_size<2)
    {
        cout<<"Invalid input";
        return;
    }
    first=second=INT_MAX;
    for(int i=0;i<arr_size;i++)
    {
        if(arr[i]<first)
        {
            second=first;
            first=arr[i];
        }
        else if(arr[i]<second && arr[i]!=first)
        {
            second=arr[i];
        }
        if(second==INT_MAX)
        {
            cout<<"There is no second smallest number";
        }
        else
        {
            cout<<"first smallest number is"<<first<<"second smallest number is:"<<second;

        }
    }

}

int main()
{
    int arr[]={4,6,3,6,8,9,78,43};
    int n=sizeof(arr)/sizeof(arr[0]);
    twoSmallest(arr,n);
    return 0;
}
