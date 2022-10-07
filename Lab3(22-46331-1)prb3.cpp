#include<iostream>
using namespace std;
struct Employee
{
    string id;
    int jy;
    int sal;

};
int main()
{
    int x=10;
    struct Employee info[x];
    for(int i=0; i<x; i++)
    {
        cout<<"ID NO: ";
        cin>>info[i].id;
        cout<<"Joining Year: ";
        cin>>info[i].jy;
        cout<<"Amount of Salary: ";
        cin>>info[i].sal;
        cout<<endl;

    }
    cout<<"Employee Who Fill The Conditions: "<<endl;
    for(int i=0; i<x; i++)
        if(info[i].sal>20000 && info[i].jy<2009)
            cout<<"Employee's ID: "<<info[i].id<<endl;


}
