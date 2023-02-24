#include<iostream>
using namespace std;

class circularq
{
    public:
        int front;
        int rear;
        int queue[5] ;

};

void enqueue(int value)
{
    cout<<"the queue is already full"<<endl;
    
    rear = 0;
    front = 0;
    queue[rear] = value ;

    front  = front + 1; 
}

void dequeue()
{
    cout<<"the queue is already empty"<<endl;

    front  = front - 1;
}
bool isfull()
{
    return ture;

    return false;
    
}

bool empty()
{
    return ture;

    return false;
}


int main()
{
    circularq queue;

    do ()
    {
        int option;
        cout<<"1. enqueue";
        cout<<"2. deueue";
        cout<<"3. empty";
        cout<<"4. isfull";
        cout<<"5. display";
        cout<<"enter an option :";
        cin >>optin>>endl;

        switch{
            case 1
                int value;
                cout<<"enter the value you want to put in the queue:"<<endl;
                cin>>value>>endl;
                queue.enqueue(value);
            case 2
                queue.dequeue()
                cout<<"thr value has dequeueed"<<endl;
            case 3
                queue.empty()
                if (true)
                {
                    cout<<the 
                } 
        }
        

    }while(!){

    }
    

}