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

  void indDeletion(int arr[],int size ,int index)
  {            
      //Deletion                             
      for(int i=index;i<size-1;i++)
      {
         arr[i]=arr[i+1];
      }
  }

int main()
{
    int arr[50]={7,8,12,27,88};
    int size=5, element=12,index=3;
    indDeletion(arr,size,index);
    size-=1;
    display(arr,size);
    return 0;
}