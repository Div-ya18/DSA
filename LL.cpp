#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = nullptr;
    }
};

// Node* reverse(Node* head){
//     Node* curr = head;
//     Node* next = nullptr;
//     Node* prev = nullptr;
//     while(curr!=nullptr){
//         next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//     }
//     return prev;
// }
    
// void printl(Node* head){
//     Node* temp = head;
//     while(temp!=nullptr){
//         cout<<temp->data<<"->";
//         temp = temp->next;
//     }
// }
    // check loop ----   bool middle(Node* head){
    //     //if(head==nullptr) return nullptr;
        
    //     Node* slow = head;
    //     Node* fast = head;
        
    //     while(slow->next != nullptr && fast->next != nullptr){
    //         slow = slow -> next;
    //         fast = fast->next->next;
    //         if(slow == fast)
    //             return true;
            
    //     }
    //     return false;
     
    // }
//  Node* middle(Node* head){
//      Node* curr = head;
//      Node* prev = NULL;
     
//      while(curr!=NUll){
//          Node* next = curr->next;
//          prev = curr;
//          curr = next;
//          //next = next->next;
     
         
         
//      }
//      return head;
//  }

int main (){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    
    Node* rev = reverse(head);
    printl(rev);
return 0;
}
