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
int max_height(Node* root)
{
    if(root==NULL) return 0;
    int l=max_height(root->left);
    int r=max_height(root->right);
    return max(l,r)+1;
    
}

int main()
{
     Node* root=input_tree();
     cout<<max_height(root) <<endl;
     return 0;
     

}