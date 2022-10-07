#include<iostream>
using namespace std;
int main()
{

    int a,b,i,j;

    cout<<"COUNT OF ROW: "<<endl;
    cin>>a;
    cout<<"COUNT OF COLUMN: "<<endl;
    cin>>b;
    int mat[a][b];
    cout<<"Elements are: "<<endl;
    for(i=0;i<a;i++)
        for(j=0;j<b;j++)
            cin>>mat[i][j];

    cout<<"Actual Matrix: "<<endl;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            cout<<mat[i][j]<<"\t";
        }
        cout<<endl;
    }


    cout<<"Transpose Matrix: "<<endl;
    for(j=0;j<b;j++)
    {
        for(i=0;i<a;i++)
        {
            cout<<mat[i][j]<<"\t";
        }
        cout<<endl;
    }

}
