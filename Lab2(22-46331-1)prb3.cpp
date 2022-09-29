#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"the size of arr is: ";
    cin>>a;

    int arr[a];
    cout<<a<<" elements of arr: "<<endl;
    for(int i=0; i<a; i++)
        cin>>arr[i];

    cout<<"unique element's arr is: "<<endl;
    for(int i=0; i<a; i++)
    {
        int j;
        for(j=0; j<i; j++)
        {
            if(arr[i]==arr[j])
            {
                break;
            }

        }
        if (i == j)
            cout << arr[i] <<"  ";

    }

    return 0;
}
