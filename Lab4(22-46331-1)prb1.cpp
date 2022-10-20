#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]= {15,13,11,12,14};
    int temp;
    for(int i=0; i<7-1; i++){
        for(int j=0; j<7-i-1; j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0; i<5; i++)
        cout<<arr[i]<<" ";


    return 0;
}
