#include <iostream>
#include <vector>
using namespace std;
template<typename T>
class TreeNode{
    public:
    T data;
    vector<TreeNode*> children;
    TreeNode(T data){
        this->data=data;
    }
};
TreeNode<int>* takeinput(){
    int data;
    cout<<"enter the data\n";
    cin>>data;
    TreeNode<int>* root= new TreeNode<int>(data);
    int n;
    cout<<"enter the number of child of "<<data<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        TreeNode<int>* child= takeinput();
        root->children.push_back(child);
    }
    return root;
}
void print(TreeNode<int>* root){
    cout<<root->data<<" : ";
    for(int i=0;i<root->children.size();i++){
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;
    for(int i = 0;i<root->children.size();i++){
        print(root->children[i]);
    }
}
int main()
{
    system("cls");
    TreeNode<int>* root=takeinput();
    print(root);
}