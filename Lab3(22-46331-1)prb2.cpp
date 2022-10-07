#include<bits/stdc++.h>
using namespace std;
int main()
{

    int x,temp;
    string arr;

    cout<<"The sentence is: "<<endl;
    getline(cin,arr);

    cout<<"Given sentence is : "<<endl;

    for(int i=0; i<arr.size(); i++)
        cout<<arr[i];
    cout<<endl;
    cout<<"Enter The Number of Changing Value: "<<endl;
    cin>>x;

    for(int i=2;i<arr.size();i+=3)
    {
        temp=arr[i];
        arr[i]=char(temp+x);

    }
    cout<<"Changed Sentence : "<<endl;

    for(int i=0;i<arr.size();i++)
        cout<<arr[i];


}
