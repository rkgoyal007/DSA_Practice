#include<stdio.h>
#include<conio.h>

int binarySearch(int arr[],int size,int element)
{
int low,mid,high;
low=0;
high=size-1;

//search starts
while(low<=high) {
mid=(low+high)/2;
if(mid==element){
return mid;
}
if(mid<element){
low=mid+1;
}
else{
high=mid-1;
}
}
//search ends
return -1;
}


int main()
{
    // sorted array of binary search
    int arr[]={1,2,3,4,5,6,7,8};
    int size= sizeof(arr)/sizeof(int);
    int element=48;
    int searchIndex = binarySearch(arr,size,element);
    printf("the element %d is found at index %d \n",element,searchIndex);
    return 0;
}
