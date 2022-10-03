#include<iostream>
using namespace std;
class queue 
{
    int arr[5];
    int front;
    int rear;
    
    public:
    queue()
    {
        front=-1;
        rear=-1;
        for(int i=0;i<5;i++)
        {
            arr[i]=0;
        }
    }
    
    // enqueue
    

void enqueue(int val)
{
    // case 1--> if queue is full.--insertion not possible
    if(rear==4)  // size-1
    {
        cout<<"insertion not possible"<<endl;
        return ;
    }
    
    // case 2-->
     else if(front==-1 && rear==-1)
    {
        front=0;
        rear=0;
        arr[rear]=val;
    }
    else
    {
        rear++;
        arr[rear]=val;
        
    }
    
    
}


int  dequeue()
{
    int store=0;
    // case 1->if queue is empty
    if(front==-1 && rear==-1)
    {
        cout<<"no deleetion possible"<<endl;
        return  store;
    }
    // if there is one element in queue
    else if(front==rear)
    {
        store=arr[front];
        arr[front]=0;
        front=-1;
        rear=-1;
        return store;
        
    }
    // if there are more than 1 ele in queue and u want to delete them
    else
    {
        store=arr[front];
        arr[front]=0;
        front++;
        return store;
    }
}
    void display()
    {
        for(int i=0;i<5;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    
    bool isEmpty()
    {
        if(front==-1 && rear==-1)
        {
            return true;
            
        }
        else
        {
            return false;
        }
        
    }
    
    bool isFull()
    {
        if(rear==4)  // size -1
        {
            return true;
            
        }
        else
        {
            return false;
        }
    }
    
    
    
 
};



int main()
{
    queue q;
    int option,val;
    do{
        cout<<"select the correct otion.enter 0 to exit"<<endl;
        cout<<"1.enqueue"<<endl;
        cout<<"2.dequeue"<<endl;
        cout<<"3.display"<<endl;
        cout<<"4.empty"<<endl;
        cout<<"5.full"<<endl;
        
        cin>>option;
        
        
        switch(option)
        {
            case 0:
            break;
            
            
            case 1:
            cout<<"enter the value u ant to add"<<endl;
            cin>>val;
            q.enqueue(val);
            break;
            
            
            case 2:
            q.dequeue();
            break;
            
            case 3:
            q.display();
            break;
            
            case 4:
            if(q.isEmpty())
            {
                cout<<"queue is empty"<<endl;
                
            }
            else
            {
                cout<<"queue is not empty"<<endl;
            }
            break;
            
            
            case 5:
            if(q.isFull())
            {
                cout<<"queue is full"<<endl;
                
            }
            else
            {
                cout<<"queue is not full"<<endl;
            }
            break;
            
            
        }
    }
        while(option!=0);
    
        return 0;
    

}
