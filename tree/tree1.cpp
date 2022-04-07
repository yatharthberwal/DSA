#include <iostream>
#include <vector>
using namespace std;
template<typename T>
class TreeNode{
    public:
    T data;
    vector<TreeNode*> child;
    TreeNode(T data){
        this->data=data;
    }
};
void print(TreeNode<int>* root){
    cout<<root->data<<" : ";
    for(int i=0;i<root->child.size();i++){
        cout<<root->child[i]->data<<",";
    }
    cout<<endl;
    for(int i =0;i<root->child.size();i++){
        print(root->child[i]);
    }
}
int main()
{
    system("cls");
    TreeNode<int> *root=new TreeNode<int>(10);
    TreeNode<int> *node1=new TreeNode<int>(20);
    TreeNode<int> *node2=new TreeNode<int>(30);
    root->child.push_back(node1);
    root->child.push_back(node2);
    print(root);
}