/* Write a C++ Program to Perform Simple Addition Function Using Templates. */
#include<iostream>
using namespace std;
template<class type1,class type2,class type3>
type3 Addition(type1 num1,type2 num2)
{
    return(num1+num2);
}
int main()
{
    cout<<"Simple Addition of two number is : "<<Addition<float,float,float>(20.45,76.56);

    return 0;
}
