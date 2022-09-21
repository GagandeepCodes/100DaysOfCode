#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int getlength(Node *head, int length){
        
    if(head->next == NULL) return length;
    return getlength(head->next,length+1);
    
    }

    void deletenode(Node* &head , int position){
        //position 1
        if(position==1){
            Node* temp = head;
            // head = head -> next;
            // temp -> next = NULL;
            delete temp;
        }
        Node* curr = head;
        Node* prev = NULL;
        int count = 1;
        
        while(count<position){
            prev = curr;
            curr = curr -> next;
        }
        
        prev-> next = curr -> next;
        curr -> next = NULL;
        
        delete curr;
    }
    
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates(Node *head) 
    {
     // your code goes here
     map<int , bool> check;
        Node* prev = NULL;
        Node* temp = head;
        
        while(temp != NULL){
            if(check[temp->data] != true){
                check[temp->data] = true;
                prev = temp;
                temp = temp->next;
            }
            else{
                prev->next = temp->next;
                Node* del = temp;
                temp = temp->next;
                
                delete(del);
            }
        }
        
        return head;
    }
};
int main()
{

    return 0;
}