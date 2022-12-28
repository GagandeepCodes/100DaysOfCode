#include <bits/stdc++.h>
using namespace std;
int find(int N)
{
    // code here
    Node *head = NULL;
    Node *temp = NULL;
    Node *prev = NULL;
    for (int i = 1; i <= N; i++)
    {
        if (head == NULL)
        {
            head = new Node(i);
            temp = head;
        }
        else
        {
            temp->next = new Node(i);
            temp = temp->next;
        }
    }
    temp->next = head;
    prev = head;
    temp = head->next;
    while (temp->next != temp)
    {
        prev->next = temp->next;
        prev = prev->next;
        temp = temp->next->next;
    }
    return temp->data;
}
int main()
{

    return 0;
}