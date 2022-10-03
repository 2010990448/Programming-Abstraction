// implementation of stcks using arrays
#include<iostream>
using namespace std;
class stack 
{
    int top;
    int arr[5];
    
    public:
    stack()
    {
        top=-1;
        for(int i=0;i<5;i++)
        {
            arr[i]=0;
        }
    }
    
    
    // is empty
    bool empty()
    {
        if(top==-1)
        {
            return true;
        }return false;
    }
    
    // full
    bool full()
    {
        if(top==4)   // size-1
        {
            return true;
        }return false;
    }
    
    // push
    void push(int x)
    {
        // case1 ->if stack is full no insertion possible
        if(full())
        {
            cout<<"no insertion possible..stack overflow"<<endl;
        }
        else
        {
            top++;
            arr[top]=x;
        }
    }
    
    
    // pop 
    int pop()
    {
        int store=0;
        // if stack is empty
        if(empty())
        {
            cout<<"no deletion is possible..underflow "<<endl;
            return store;
        }
        else
        {
            store=arr[top];
            arr[top]=0;
            top--;
            return store;
        }
    }
    
    void display()
    {
        for(int i=4;i>=0;i--)
        {
            cout<<arr[i]<<" ";
        }
    }
};
int main()
{
    stack s;
    int x,option;
    do{
        cout<<"enter the correct option.enter 0 to exit"<<endl;
        cout<<"1.push()"<<endl;
        cout<<"2.pop()"<<endl;
        cout<<"3.empty()"<<endl;
        cout<<"4.full()"<<endl;
        cout<<"5.display()"<<endl;
        cin>>option;
        
        switch(option)
        {
            case 0:
            break;
            
            
            case 1:
            cout<<"enter the value u want to add in stack"<<endl;
            cin>>x;
            s.push(x);
            break;
            
            
            case 2:
           // cout<<"dequued ele is"<<s.top()<<endl;
            s.pop();
            break;
            
            
            case 3:
            if(s.empty())
            {
                cout<<"stack is empty"<<endl;
            }
            else
            {
                cout<<"stack is not empty"<<endl;
            }
            break;
            
            
            case 4:
            if(s.full())
            {
                cout<<"stack is full"<<endl;
            }
            else
            {
                cout<<"stack is not full"<<endl;
                
            }
            break;
            
            
            case 5:
            s.display();
            break;
        }
    }
    while(option!=0);
    return 0;
}
