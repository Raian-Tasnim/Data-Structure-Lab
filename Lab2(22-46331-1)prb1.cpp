#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the size of Array1: "<<endl;
    cin>>a;

    int arr1[a];
    cout<<a<<" elements of arr1: ";
    for(int i=0; i<a; i++)
        cin>>arr1[i];

    cout<<"size of arr2: "<<endl;
    cin>>b;

    int arr2[b];
    cout<<b<<" elements of arr2: ";
    for(int i=0; i<b; i++)
        cin>>arr2[i];

    int m_arr[a+b];

    for(int i=0, j=a-1; i>a,j>=0; i++,j--)
        m_arr[i]=arr1[j];

    for(int i=a, j=b-1; i>(a+b),j>=0; i++,j--)
        m_arr[i]=arr2[j];

    cout<<"the marged array is:"<<endl;

    for(int i=0; i<a+b; i++)
        cout<<m_arr[i]<<"  ";

    return 0;
}
