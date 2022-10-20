#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]= {18,15,14,16,11};
    int val,position=-1;
    cout<<"The number is : ";
    cin>>val;

    for(int i=0; i<5; i++){
        if(val==arr[i])
        {
            position=i+1;
            break;
        }
    }
    if(position==-1){
        cout<<"Not found!";
    }
else
   {
       cout<<val<<" found in "<<position<<" position";
   }

    return 0;

}
