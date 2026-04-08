#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node(int _data, Node *_next = NULL) : data(_data), next(_next) {}
};

void Delete(Node *&head, int n, int a){
    Node *now = head;
    Node *prev = NULL;
    int count = 1;
    int times = 0;

    while (times < a - 1) {
        if (count == n) {
            if (now == head) {
                head = head->next;
            }
            cout << now->data << ", ";
            Node *toDelete = now;
            now = now->next;
            delete toDelete;
            if (prev) {
                prev->next = now;
            }
            times++;
            count = 1;
        } else {
            count++;
            prev = now;
            now = now->next;
        }

        // Adjust prev if we've gone around the circle
        if (now == head) {
            prev = NULL;
        }
    }
    cout << head->data;
}

int main(void){
    int a;
    cin >> a;
    Node *head = NULL;
    Node *now = NULL;

    // Initialize the circular linked list
    for(int n = 0; n < a; n++){
        if(n == 0){
            head = new Node(n + 1);
            now = head;
        } else {
            now->next = new Node(n + 1);
            now = now->next;
        }
    }
    now->next = head; // Complete the circle

    int k;
    cin >> k;

    cout << '<';
    Delete(head, k, a);
    cout << '>' << endl;

    return 0;
}
