#include <iostream>
#include <stack>
 
struct node
{
    node(int const rhs) : data(rhs){}
    int data;
    node* left = nullptr, *right = nullptr;
};
 
void add(node*& root, int const rhs)
{
    node** tmp = &root;
    while(*tmp)
    {
        if(rhs > (*tmp)->data)
        {
            tmp = &(*tmp)->right;
        }
        else if(rhs < (*tmp)->data)
        {
            tmp = &(*tmp)->left;
        }
        else
        {
            break;
        }
    }
    if(!*tmp)
    {
        *tmp = new node(rhs);
    }
}
 
void inOrderPrint(node* tmp)
{
    std::stack<node*> stk;
    while(!stk.empty() || tmp)
    {
        if(tmp)
        {
            stk.push(tmp);
            tmp = tmp->left;
        }
        else
        {
            tmp = stk.top();
            stk.pop();
            std::cout << tmp->data << '\n';
            tmp = tmp->right;
        }
    }
}
 
void del(node*& root)
{
    node** tmp = &root;
    node** top = nullptr;
    std::stack<node**> stk;
    while(!stk.empty() || *tmp)
    {
        if(*tmp)
        {
            stk.push(tmp);
            tmp = &(*tmp)->left;
         }
        else
        {
            top = stk.top();
            if((*top)->right)
            {
                tmp = &(*top)->right;
            }
            else
            {
                stk.pop();
                delete *top;
                *top = nullptr;
                tmp = top;
            }
        }
    }
}
 
int main()
{
    node* root = nullptr;
    int arr[] = {8, 9, 4, 7, 11, 5, 10, 6};
    for(auto const val : arr)
    {
        add(root, val);
    }
 
    inOrderPrint(root);
 
    del(root);
}
