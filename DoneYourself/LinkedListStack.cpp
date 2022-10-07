#include <iostream>
//#include <boolean>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

class SingleLinkedListStack{
  public:
    Node *head;
    SingleLinkedListStack(){
        head = NULL; 
    }
    
    void insertAtHead(int data){
        Node* newNode = new Node(data);
        if(head == NULL){
            head = newNode;
        }
        Node *temp = newNode;
        temp->next = head;
        head = temp;
        
    }
    
    
    void deleteAtBack(){
        if(head == NULL){
            cout<< "Stack UnderFlow"<<endl;
        }
        head = head->next;
    }
    
    void Transeverse();
    
};
    void SingleLinkedListStack :: Transeverse()
    {
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<"  ";
            temp = temp->next;
        }
        cout<<endl;
    }



int main()
{
    SingleLinkedListStack s;
    s.insertAtHead(10);
    s.insertAtHead(20);
    s.insertAtHead(30);
    s.insertAtHead(40);
    s.insertAtHead(50);
    s.Transeverse();
    s.deleteAtBack();
    s.Transeverse();

    
    

    return 0;
}
