#include<iostream>
using namespace std;
int main()
{
      int arr[5],n,temp=-2;

    int s,e,mid;
    cout<<"enter the elements = ";
    for(int i=0;i<=4;i++)
    {
        cin>>arr[i];
    }
    cout<<"the number you want to search:";
    cin>>n;
    s=0;
    e=4;
    while(s<=e)
    {
      mid=(s+e)/2;
      if(arr[mid]==n)
      {
          temp=mid;
          break;
      }
      else if(n<arr[mid])
      {
          e=mid-1;
      }
    else
    {
        s=mid+1;
    }
    }
    if(temp==-2)
    {
        cout<<"element not found"<<endl;

    }

    else
        cout<<"elemnt is in index :"<<temp<<endl;









    return 0;
}
