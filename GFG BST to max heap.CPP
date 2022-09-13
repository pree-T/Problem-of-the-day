class Solution{
    int k=0;
    
  public:
    void convertToMaxHeapUtil(Node* root)
    {
        vector<int> arr;
        inorder(root,arr);
        preorder(root,arr);
        
    }   
    
    void inorder(Node* root,vector<int> &arr)
    {
        if(root==NULL)
        return;
        inorder(root->left,arr);
        arr.push_back(root->data);
        inorder(root->right,arr);
        
    }
    void preorder(Node* root,vector<int> &arr)
    {
        if(root==NULL)
        return;
        preorder(root->left,arr);
        preorder(root->right,arr);
        root->data=arr[k++];
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    getchar();
    while (t--)
    {
        string inp, ch;
        getline(cin, inp);
        struct Node* root = buildTree(inp);
        Solution ob;
        ob.convertToMaxHeapUtil(root);
        postorderTraversal(root);
        cout << "\n";
    }
    return 0;
}
