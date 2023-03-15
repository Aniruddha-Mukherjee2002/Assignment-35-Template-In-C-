/* Write a C++ Program to find Sum of Array using function template. */

#include<iostream>
using namespace std;

template<typename type1>

type1 AddArray()
{
    int size;
    cout<<"Enter size of array: ";
    cin>>size;

    type1 arr[size];
    cout<<"Enter "<<size<<" elements: ";

    for(int i =0; i<size; i++)
    {
        cin>>arr[i];  // taking elemets by user;
    }

    type1 sum=0;

    for(int i =0; i<size; i++)
    {
        sum+=arr[i];
    }
    return sum;
}

int main()
{

    cout<<AddArray<int>();

    return 0;
}
