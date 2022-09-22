#include<bits/stdc++.h>
using namespace std;
Node* reverseDLL(Node * head)
{
    //Your code here
    if(head == NULL || head-> next == NULL)
    {
        // head = NULL;
        return head;
    }

    Node* prev1 = NULL;
    Node* curr = head;
    Node* forward = NULL;
    // tail = curr;

    while(curr!=NULL)
    {
        forward = curr->next;
        if(curr->next!=NULL)
            // When forward is NULL , this case will give segmention fault
            //Thats why if statement is used.
            forward -> prev = curr;
        curr -> next = prev1;
        curr -> prev = forward;
        prev1 = curr;
        curr = forward;
    }

    head = prev1;
    
    return head;
    
}
int main()
{
    
    return 0;
}