#include<iostream>

int Delete_Number(int arr[],int size , int index)
{
  if (index == size || index < 0 )
  {
    std::cout<<"INVALID INDEX";
  }
  else
  {
    for( int i=index ;i<size-1;i++)
        {
            arr[i]=arr[i+1];
        }
        return --size;
  }
}

int main()
{
    int arr[]={1,2,3,4,5,6};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    int arr_index=5;

    arr_size=Delete_Number(arr,arr_size,arr_index);

    std::cout<<"Array After Deleting Index Number"<<arr_index<<std::endl;
    for(int i=0;i<arr_size;i++)
        std::cout<<arr[i]<<"\n";
    
    return 0;
}