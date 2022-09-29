#include<iostream>
using namespace std;

    int arr[]= {1,2,4,5,7,8,19,20,21,23,24,45,60};

int i;
void oddFinder(int x, int y)
{
    cout<<"odd numbers are:";

    for(int i=0; i<13; i++)
    {
        for(int j=x; j<=y; j++)
        {
            if(arr[i]==j&&j%2!=0)
            {
                cout<<j<<" ";
            }
        }
    }


    cout<<endl;

}

int main()
{
    int x,y;
    cout<<"Enter Initial Value of Range: ";
    cin>>x;
    cout<<"Enter Terminal Value of Range: ";
    cin>>y;
    oddFinder(x,y);

    return 0;

}
