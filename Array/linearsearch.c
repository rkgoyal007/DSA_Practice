#include<stdio.h>
#include<conio.h>

int linearSearch(int arr[],int size,int element)
{
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            return i;
        }   
    }
    return -1;
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int size= sizeof(arr)/sizeof(int);
    int element=4;
    int searchIndex = linearSearch(arr,size,element);
    printf("the element %d is found at index %d \n",element,searchIndex);
    return 0;
}
