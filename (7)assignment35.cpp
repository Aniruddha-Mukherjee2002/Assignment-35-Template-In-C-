/* Write a C++ Program of Templated class derived from Non-templated class. */

#include<iostream>
using namespace std;

class A
{
private:
    int num;
public:
    void setData(int x)
    {
        num=x;
    }
    int getData()
    {
        return num;
    }
};

template <class type>

class B : public A
{
private:
    type num;
public:
    void setdata(int x)
    {
        num=x;
    }

    void addData()
    {
        setData(40);
        cout<<"Addition is: "<<num+getData();
    }
};
int main()
{
    B <int>b;
    b.setdata(60);
    b.addData();
    return 0;
}
