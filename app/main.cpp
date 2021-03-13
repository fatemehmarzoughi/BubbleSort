
#include <iostream>
#include <stdlib.h>
using namespace std;

// #include "Foo.h"

void BubbleSort(int data[] , int n)
{
  int subArrayEnd = n-1;
  int nextEnd = n-1;
  do
  {
    for(int i = 0; i<subArrayEnd ; i++ )
    {
      if(data[i] > data[i+1])
         swap(data[i] ,data[i+1]);
      nextEnd = i;
    }
    subArrayEnd = nextEnd;
  }
  while(subArrayEnd > 0);
  std::cout<<"Sorted List : ";
  for(int i=0 ; i<n ; i++)
    std::cout<<data[i]<<" , ";
}

int main()
{
  // Foo d = Foo();
  // std::cout<< d.doSomething()<<std::endl;
  int input[10];
  for(int i=0 ; i<10 ; i++)
  {
    std::cout<<"["<<i<<"] = ";
    std::cin>>input[i];
  }
  std::cout<<"Unsorted List : ";
  for(int i=0 ; i<10 ; i++)
    std::cout<<input[i]<<" , ";
  std::cout<<"Sorting..."<<std::endl;
  BubbleSort(input , 10);
  return 0;
}
