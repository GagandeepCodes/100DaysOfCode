#include <bits/stdc++.h>
using namespace std;
Node *solve(Node *&head1, Node *&head2)
{
    Node *curr1 = head1;
    Node *next1 = curr1->next;
    Node *curr2 = head2;
    Node *next2 = curr2->next;

    while (next1 != NULL && curr2 != NULL)
    {
        if (curr2->data >= curr1->data && curr2->data <= next1->data)
        {
            curr1->next = curr2;
            next2 = curr2->next;
            curr2->next = next1;
            curr1 = curr2;
            curr2 = next2;
        }
        else
        {
            curr1 = next1;
            next1 = next1->next;

            if (next1 == NULL)
            {
                curr1->next = curr2;
                // break;
                return head1;
            }
        }
    }
    if (next1 == NULL)
    {
        curr1->next = curr2;
        // break;
        return head1;
    }
    return head1;
}
// Function to merge two sorted linked list.
Node *sortedMerge(Node *head1, Node *head2)
{
    // code here
    if (head1->data < head2->data)
    {
        return solve(head1, head2);
    }
    else
    {
        return solve(head2, head1);
    }
    int main()
    {

        return 0;
    }