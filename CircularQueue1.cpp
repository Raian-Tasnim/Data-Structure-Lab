#include<iostream>
using namespace std;
class CircularQueue
{
private:
    int front;
    int back;
    int arr[5];
    int itemCount;
public:
    CircularQueue()
    {
        itemCount=0;
        front=-1;
        back=-1;
        for(int i=0; i<5; i++)
        {
            arr[i]=0;
        }
    }
    bool isEmpty()
    {
        if(front==-1&&back==-1)
            return true;
        else
            return false;
    }
    bool isFull()
    {
        if((back+1)%5==front)
            return true;
        else
            return false;
    }
    void enqueue(int val)
    {
        if(isFull())
        {
            cout<<"Queue is full"<<endl;
            return;
        }
        else if(isEmpty())
        {
            back=0;
            front=0;
            arr[back]=val;
        }
        else
        {
            back=(back+1)%5;
            arr[back]=val;
        }
        itemCount++;
    }
    int dequeue()
    {
        int x=0;
        if(isEmpty())
        {
            cout<<"Queue is Empty"<<endl;
            return x;
        }
        else if(back==front)
        {
            x=arr[back];
            back=-1;
            front=-1;
            itemCount--;
            return x;
        }
        else
        {
            cout<<"Front value: "<<front<<endl;
            x=arr[front];
            arr[front]=0;
            front=(front+1)%5;
            itemCount--;
            return x;
        }
    }
    int count()
    {
        return(itemCount);
    }
    void display()
    {
        cout<<"Values of the queue are :";
        for(int i=0; i<5; i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};
int main()
{
    CircularQueue cq;
    int value,option;
    do
    {
        /*cout<<"Choose an option or select 0 to exit"<<endl;
        cout<<"1.Enqueue()"<<endl;
        cout<<"2.Dequeue()"<<endl;
        cout<<"3.isEmpty()"<<endl;
        cout<<"4.isFull()"<<endl;
        cout<<"5.count"<<endl;
        cout<<"6.display"<<endl;*/
        cin>>option;
        switch(option)
        {


        case 0:
        break;
    case 1:
        cout<<"Enter a value to enqueue."<<endl;
        cin>>value;
        cq.enqueue(value);
        break;
    case 2:
        cout<<"Dequeue a value from the queue:"<<cq.dequeue()<<endl;
        break;
    case 3:
        if(cq.isEmpty())
            cout<<"Queue is empty"<<endl;
        else
            cout<<"Queue is not empty"<<endl;
        break;
    case 4:
        if(cq.isFull())
            cout<<"Queue is full"<<endl;
        else
            cout<<"Queue is not full"<<endl;
        break;
    case 5:
        cout<<"Count the items of the queue:"<<cq.count()<<endl;
        break;
    case 6:
        cout<<"Display all the values of the queue"<<endl;
        cq.display();
        }
    }
    while(option!=0);
    return 0;


    }
