#include <iostream>
#include <vector>
#include <queue>
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
TreeNode<int>* takeInput(){
    int rootdata;
    cout<<"enter the root data\n";
    cin>>rootdata;
    TreeNode<int>* root=new TreeNode<int>(rootdata);
    queue<TreeNode<int>*> pendingNode;
    pendingNode.push(root);
    while(pendingNode.size()!=0){
        TreeNode<int>* front=pendingNode.front();
        pendingNode.pop();
        cout<<"enter the number of child of "<<front->data<<endl;
        int num;
        cin>>num;
        cout<<"enter the data of child of "<<front->data<<endl;
        for(int i=1;i<=num;i++){
            int data;
            cin>>data;
            TreeNode<int>* child=new TreeNode<int>(data);
            front->children.push_back(child);
            pendingNode.push(child);
        }
    }
    return root;
}
void print(TreeNode<int>* root){
    cout<<root->data<<" : ";
    for(int i=0;i<root->children.size();i++){
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++){
        print(root->children[i]);
    }

}
int main()
{
    system("cls");
    TreeNode<int>* root=takeInput();
    print(root);
}