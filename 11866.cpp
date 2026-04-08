#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node(){
            next=NULL;}
        Node(int _data, Node *_next){
            data=_data;
            next=_next;
        }
        Node(int _data){
            data= _data;
            next=NULL;
        }
};


void Delete(Node *head, int n,int a){
    Node *now=head;
    Node *prev=NULL;
    Node *nxt=NULL;
    int count=1;
    int times=0;
    
    while(times!=a-1){
        if(count==n){
            nxt=now->next;
            if(now==head){
                head=head->next;
            }
            cout<<now->data<<", ";
            delete now;
            prev->next=nxt;
            now=nxt;
            
            times++;
            count=1;
        }
        else{
            count++;
            prev=now;
            now=now->next;

        }
    }
   
        
    cout<<head->data;
    delete head;
}

int main(void){
    int a;
    cin>>a;
    int *circle=new int[a];
    int k;
    Node *head=NULL;
    Node *null=head;
    Node *now=NULL;
    Node *tmp=NULL;

    for(int n=0;n<a;n++){
        circle[n]=n+1;
        if(n==0){
            head=new Node(circle[n],head);
            now=head;
        }
        else{
            tmp=new Node(circle[n]);
            now->next=tmp;
            now=tmp;
        }
        
    }
    now->next=head;
    free(circle);
    
    cin>>k;
  
    cout<<'<';
    Delete(head,k,a);
    cout<<'>'<<endl;
    
    
    return 0;
}