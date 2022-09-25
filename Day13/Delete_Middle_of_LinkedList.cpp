#include<bits/stdc++.h>
using namespace std;
int getlength(Node *head, int length)
{
    if(head->next == NULL) return length;
    return getlength(head->next,length+1);

}
void deletenode(Node *&head, int position)
{
    // deleting first node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    // deleting middle or last node
    else
    {
        Node *curr = head;
        Node *prev = NULL;
        int count = 1;
        while (count < position)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
        prev->next = curr->next;
        curr->next = NULL;

        // updating the tail
        // if (prev->next == NULL)
        // {
        //     tail = prev;
        // }
        delete curr;
    }
}
// Deletes middle of linked list and returns head of the modified list
Node* deleteMid(Node* head)
{
    // Your Code Here
    int s = 0;
    int e = getlength(head,1) - 1;
    int mid = -1;
    if(e%2==0){
        mid = (s+e)/2;
    }
    if(e%2){
        mid = (s+e)/2 +1;
    }
    deletenode(head,mid+1);
    return head;
}
int main()
{
    
    return 0;
}