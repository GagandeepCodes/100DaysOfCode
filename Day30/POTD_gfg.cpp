#include <bits/stdc++.h>
using namespace std;
Node *sortList(Node *head)
{
    // Your Code Here
    Node *curr = head;
    while (curr->next != NULL)
    {
        if (curr->next->data < 0)
        {
            Node *temp = curr->next->next;
            curr->next->next = head;
            head = curr->next;
            curr->next = temp;
        }
        else
        {
            curr = curr->next;
        }
    }
    return head;
}
int main()
{

    return 0;
}