#include<iostream>
using namespace std;
struct stack
{
    stackNode *top;
    int size;

    stack()
    {
        top=NULL;
        size=0;
    }
    void Push(int new_data)
    {
        stackNode * new_node = new stackNode(new_data);
        new_node->next=top;
        top=new_node;
        size++;
        cout<<"pushed "<<"->"<<new_data<<endl;
    }
    int stackPop()
    {
        if(top==NULL)
        {
            return -1;
        }
        int topdata=top->data;
        stackNode *temp=top;
        top=top->next;
        delete temp;
        return topdata;
    }
    int stacksize()
    {
        return size;
    }
    bool stackisempty()
    {
        return top==NULL;
    }
    int top()
    {
        if(top==NULL)
        {
            return -1;
        }
        return top->data;
    }
    void printstack()
    {
        
    }
};
struct stackNode
{
    int data;
    stackNode *next;
    int size;
    stackNode(int d)
    {
        data=d;
        next=nullptr;
    }
};
int main()
{
    stack s;
    s.Push(10);

}