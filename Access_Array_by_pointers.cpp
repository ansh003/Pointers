#include<iostream>
using namespace std;
int main()
{
    int arr[5]={5,6,2,3,1};
    int i;
    int *ptr = &arr[0];
    for(i=0;i<5;i++)
    {
        cout <<"value "<<*ptr<<" address "<<ptr<< endl;
        ptr++;
    }
    double arr1[5]={5.5,6.515,2.84854,3.156656,165655.8654456};
    int j;
    double *ptr1 = &arr1[0];
    for(j=0;j<5;j++)
    {
        cout <<"value "<<*ptr1<<" address "<<ptr1<< endl;
        ptr1++;
    }
    return 0;
}
