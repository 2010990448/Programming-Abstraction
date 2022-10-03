// queues using link list 
#include<iostream>
using namespace std;
// create a node
class node
{
    public:
    int data;
    node*next;


   public:
   node(int d)
   {
       data=d;
       next=NULL;
   }
};
class queue
{
    public:
    node*rear;
    node*front;
    
    queue()
    {
        front=NULL;
        rear=NULL;
        
    }
    
    
    // enqueue operatoin in queue
    void enqueue(int data)
    {
    // create a node
    node*n=new node(data);
    // case 1-->if queue is empty
    if(front==NULL)
    {
        front=n;
        rear=n;
        return;
        
    }
    else
    {
        rear->next=n;
        rear=n;
        
    }
    
    }
    
    
    void dequeue()
    {
        // if queue is empty
        if(front==NULL)
        {
            cout<<"queue is empty"<<endl;
            return;
        }
        else{
            
        
        
        // store the value of front in a pointer
        node*store=front;
        front=front->next;
        delete store;
        
        } 
        
    }
    
    
};




int main()
{
    queue q;
    q.enqueue(10);
    q.enqueue(20);
     q.enqueue(30);
      q.enqueue(40);
       q.enqueue(50);
       cout<<"queue front: "<<(q.front)->data<<endl;
       cout<<"queue rear: "<<(q.rear)->data<<endl;
    
    
    
}
