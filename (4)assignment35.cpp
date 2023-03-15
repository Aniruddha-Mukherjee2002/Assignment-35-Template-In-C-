#include<iostream>
using namespace std;
template <class type1,class type2>

type2 Swap(type1 num1,type1 num2)
{
    int t;
    t = num1;
    num1 = num2;
    num2 = t;
    cout<<num1<<" "<<num2;
}

int main()
{
    cout<<"After swapping : ";
    Swap<int,int>(20,30);

    return 0;
}
