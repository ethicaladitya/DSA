#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data ){
        this -> data =data;
        this->next=NULL;
    }
};
void insertathead(node* &head,int d) {
    node*temp=new node(d);
    temp->next=head;
    head= temp;
    
}
void insertattail(node*tail,int d){
    node*temp=new node(e);
    tail->next=temp;
    tail=tail->next;
}
void print(node* &head) {
    node* temp =head;
    while(temp !=NULL){
        cout<<temp-> data<<"";
        temp=temp->next;

    }
    cout<<endl;
}
int main(){
    node* node1 =new node(12);
    
    cout<<node1 -> data<<endl;
    cout<<node1 -> next<<endl;
    node*head=node1;
    print(head);
    insertathead(head,12);
    print(head);
return 0;
}