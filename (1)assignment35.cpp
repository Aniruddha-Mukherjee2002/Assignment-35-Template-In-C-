/* Write a C++ program to demonstrate the addition of multiple types of data using
generic functions or templates. */

#include<iostream>
using namespace std;

template <class type1,class type2,class type3>

type3 Add(type1 num1, type2 num2)
{
    return( num1 + num2 );
}

int main()
{
    cout<<"Addition of Two Number is: "<<Add<float,int,float>(20.55,30)<<endl;
    return 0;
}
