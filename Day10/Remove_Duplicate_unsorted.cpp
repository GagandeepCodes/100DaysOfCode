#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    Node *deletenode(Node *&head)
    {
        // position 1
        if (position == 1)
        {
            Node *temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
        }
        Node *curr = head;
        Node *prev = NULL;
        int count = 1;

        while (count < position)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;
        curr->next = NULL;

        delete curr;
    }

    // Function to remove duplicates from unsorted linked list.
    Node *removeDuplicates(Node *head)
    {
        // your code goes here
        unordered_map<int, int> m;
        Node *temp = head;
        while (temp != NULL)
        {
            m[temp->data]++;
            temp = temp->next;
        }

        Node *temp2 = head;
        while (temp2 != NULL)
        {
            bool flag = false;
            Node *now = temp2;
            if (m[temp->data] > 2)
            {
                flag = true;
            }
            if (m[temp->data] > 1 && flag == true)
            {
                delete now;
                m[temp->data] = 1;
            }
        }
    }
};
int main()
{

    return 0;
}