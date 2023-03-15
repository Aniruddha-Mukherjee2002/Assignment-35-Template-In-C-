/* Write a C++ Program to find Largest among two numbers using function template. */

#include<iostream>
using namespace std;

template <class type1,class type2>

type2 MAX(type1 num1,type1 num2)
{
    return num1>num2 ? num1 : num2;
}

int main()
{
    cout<<"Maximum of two number is: "<<MAX<int,int>(30,50)<<endl;

    return 0;
}
