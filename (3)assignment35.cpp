/* Write a C++ program to find the largest of three elements using a template. */

#include<iostream>
using namespace std;

template <class type1,class type2,class type3,class type4>

type4 MAX(type1 num1,type2 num2,type3 num3)
{
    if( num1 > num2 )
        return num1 > num3 ? num1 : num2;

    else
        return num2 > num3 ? num2 : num3;

}

int main()
{
    cout<<"Maximum of three numbers is: "<<MAX<int,int,int,int>(100,70,80)<<endl;

    return 0;
}
