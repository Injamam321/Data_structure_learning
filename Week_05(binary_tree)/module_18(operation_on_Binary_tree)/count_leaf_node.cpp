#include <bits/stdc++.h>
using namespace std;

// Node structure for the binary tree
class Node 
{
    public:
        int val;
        Node *left;
        Node *right;

    Node(int val) 
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* input_tree()
{
    int val;
    cin>>val;
    Node* root;
    if (val==-1) root=NULL;
    else root=new Node(val);
    queue<Node*>q;
    if (root) q.push(root);
    while (!q.empty())
    {
        //1.ber kore ana 
        Node* f=q.front();
        q.pop();

        //2.jabotio kaj kore falbo

        int l,r;
        cin>>l>>r;
        Node* myleft;
        Node* myright;
        if(l==-1)
            myleft=NULL;
        else
        {
            myleft=new Node(l);
    
        }
        if (r==-1)
        {
            myright=NULL;

        }
        else
        {
            myright=new Node(r);
        }
        f->left=myleft;
        f->right=myright;

        
        //3.children gulo ke push kore queue te rakhbo

        if (f->left!=NULL) q.push(f->left);
        if(f->right!=NULL) q.push(f->right);
    }
    return root;

}
int count_leaf(Node* root)
{
    if(root==NULL) return 0; 
    if(root->left==NULL && root->right==NULL)
    {
        return 1;
    }
    else
    {
        int l=count_leaf(root->left);
        int r=count_leaf(root->right);
        return l+r;
    }
    
}

int main()
{
     Node* root=input_tree();
     cout<<count_leaf(root) <<endl;
     return 0;
     

}