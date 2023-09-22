#include<iostream>
int main(){
   int arr[]={2,4,6,8,9};
   bool flag=0;
   for (auto element : arr)
   {
    if (element %2 != 0)
    {
        std::cout<<"NOT ALL EVEN";
        flag =1;
        break;
    }
  }
  if(flag==0)
  std::cout<<"ALl EVEN";

    return 0;
}