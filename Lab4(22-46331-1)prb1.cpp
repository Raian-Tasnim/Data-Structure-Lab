#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]= {18,15,24,66,11};
    for(int i=0; i<7-1; i++)
        for(int j=0; j<7-i-1; j++)
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);

    for(int i=0; i<5; i++)
        cout<<arr[i]<<" ";


    return 0;
}
