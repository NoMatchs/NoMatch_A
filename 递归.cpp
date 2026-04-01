#include <iostream>

using namespace std;

int fac(int n)
{
    int x;
    if (n == 0)
    {
        x = 1;
    }
    else
    {
        return fac(n - 1) * n;
    }
}

int Sum(LinkList *head)
{
    if (head == null)
    {
        return 0;
    }
    else
    {
        return head->data + Sum(head->next);
    }
}

int main()
{

    return 0;
}