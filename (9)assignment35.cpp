
#include<iostream>
using namespace std;
template <class type1,class type2>

type2 Add(type1 num1,type1 num2)
{
    return(num1+num2);
}

int main()
{
    cout<<"Addition of two numbers is : "<<Add<int,int>(20,30)<<endl;

    return 0;
}

