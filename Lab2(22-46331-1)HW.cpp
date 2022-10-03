#include <iostream>
using namespace std;
int main()
{
    int a[10],x,count=0;

    cout<<"the elements are: ";
    for(int i =0;i<10;i++)
    {
        cin>>a[i];
    }
    cout<<"which number you want? "<<endl;
    cin>>x;
    for(int i=0;i<10;i++)
    {
        if(a[i]==x)
            count++;
    }
    cout<<x<<" "<<"appears"<<" "<<count<< " "<<"times"<<endl;

    return 0;

}
