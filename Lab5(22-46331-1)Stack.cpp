#include<iostream>
using namespace std;
class Stack{
private:
    int top;
    int arr[5];
public:
    Stack()
{
    top=-1;
    for(int i=0;i<5;i++)
    {
        arr[i]=0;
    }
}
bool isEmpty()
{
    if (top==-1)
        return true;
    else
        return false;
}
bool isFull()
{
    if(top==4)
        return true;
    else
        return false;
}
void push(int val)
{
    if(isFull())
    {
        cout<<"stack overflow"<<endl;

    }
    else
    {
        top++;
        arr[top]=val;
    }

}
int pop()
{
    if (isEmpty())
        {


        cout<<"stack underflow"<<endl;
        return 0;
}
else
    {
    int popvalue=arr[top];
    arr[top]=0;
    top--;
    return popvalue;
    }
}

void display()
{
    cout<<" the values of the stack are:"<<endl;
    for(int i=4;i>=0;i--)
    {
        cout<<arr[i]<<endl;
    }
}

};
int main()
{
   Stack s;
   s.push(1);
   s.push(2);
   s.push(3);
   s.pop();
   s.push(4);
   s.push(5);


   s.pop();
   s.display();
    s.top();
}







