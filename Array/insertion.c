#include<stdio.h>
#include<conio.h>

void display(int arr[],int n){

    // Traversal
    for(int i=0;i<n;i++)
    {
        printf("%d \n",arr[i]);
    }
    printf("\n");

}

  int indInsertion(int arr[],int size ,int element,int capacity,int index)
  {
      // insertion
      if(size>capacity)
      {
        return -1;
      }
      for(int i= size-1;i>=index;i--)
      {
          arr[i+1]=arr[i];
      }
      arr[index]=element;
      return 1;


  }

int main()
{
    int arr[50]={7,8,12,27,88};
    int size=5, element=2,index=0;
    indInsertion(arr,size,element,100,index);
    size+=1;
    display(arr,size);

    return 0;
}