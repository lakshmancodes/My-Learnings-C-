/*#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor with a default argument for next node
    Node(int data1, Node *next1 = nullptr)
    {
        data = data1;
        next = nullptr;
    }
};

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    vector<int> vec(arr, arr + sizeof(arr) / sizeof(arr[0]));

    // Create the first node
    Node *y = new Node(vec[2]);

    // Print the data of the first node
    cout << y->data;

    // Don't forget to free the memory allocated for the node
    delete y;

    return 0;
}
// CONVERT ARRAY TO A LINKED LIST
#include <iostream>
#include <vector>
using namespace std;

class Node
{
    int data;
    Node *next;

    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
    Node(int data1)
    {
        data=data1;
        next=nullptr;
    }
};
Node* convertarrll(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}


int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    vector<int> vec(arr, arr + sizeof(arr) / sizeof(arr[0]));
    Node* head = convertarrll(arr);
    cout<<head->data;
}
// convert array to a linked list

/*#include <iostream>
#include <vector>
using namespace std;
class Node
{
    int data;
    Node *next;
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};
Node *convert(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head = convert(arr);
    cout << head->data;
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
class Node
{
    int data;
    Node* next;
    Node(int data1,Node *next1)
    {
        data=data1;
        next=nullptr;
    }
    Node(int data1)
    {
        data=data1;
        next=nullptr;
    }
    Node* covertarr(vector<int> &arr)
    {
        Node* head= new Node (arr[0]);
        Node* mover=head;
        for(int i=1;i<arr.size();i++)
        {
            Node* temp= new Node (arr[i]);
            temp->next=mover;
            mover=temp;
        }
    }

};
int main()
{
    vector<int> arr={1,2,3,4};
    Node* head = covertarr(arr);
    cout<<covertarr<<endl;
}

#include<iostream>
#include<vector>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }

    Node(int data1, Node* next1)
    {
        data = data1;
        next = next1;
    }
};

Node* convarr(vector<int> &arr)
{
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node* newnode = new Node(arr[i]);
        temp->next = newnode;
        temp = temp->next;
    }
    return head;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    Node* head = convarr(arr);

    // Print the linked list
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }

    return 0;
}

#include<iostream>
using namespace std;
// Node* head;
// Node* temp;

class Node
{   
public: 
    
    int data;
    Node* next;
    Node(int data1 )
    {
        data=data1;
        next=nullptr;
    }
    Node(int data1,Node* next1)
    {
        data=data1;
        next=next1;
    }
};
Node* head;
Node* temp;
void add(int new_data)
{
    Node* new_node = new Node(new_data);
    if(head==NULL)
    {
        head=new_node;
        temp=new_node;
    }
    temp->next=new_node;
    temp=temp->next;
}
void display()
{
    if(head==NULL)
    {
        cout<<"the linked list is empty"<<endl;
    }
    temp=head;
    while(temp->next!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
void reversei()
{
    Node* prev=NULL;
    Node* front;
    temp=head;
    while(temp!=NULL)
    {
        front=temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
    }
}
int main()
{
    add(10);
    add(20);
    add(30);
    add(40);
    add(50);
    add(60);
    display();
    cout<<endl;
    reversei();
    display();
    cout<<endl;
}
*/