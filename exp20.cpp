#include<iostream>
using namespace std;
int main()
{
    int var=2;
    float var1=2.54;
    int *ptr=&var;
    float *ptr1=&var1;
    cout << "value of variable" << endl;
    cout << var << endl;
    cout << "value of address indicated by ptr" << endl;
    cout << *ptr << endl;
    cout << "address of ptr" << endl;
    cout << &ptr << endl;
    cout <<"address of var" << endl;
    cout << &var << endl;
    cout <<"value of ptr" << endl;
    cout << ptr << endl;
    cout << "value of variable 1" << endl;
    cout << var1 << endl;
    cout << "value of address indicated by ptr1" << endl;
    cout << *ptr1 << endl;
    cout << "address of ptr1" << endl;
    cout << &ptr1 << endl;
    cout <<"address of var1" << endl;
    cout << &var1 << endl;
    cout <<"value of ptr1" << endl;
    cout << ptr1 << endl;
    return 0;
}