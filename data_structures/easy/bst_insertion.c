struct node* create_node(int ele)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->left=NULL;
    temp->right=NULL;
    temp->data=ele;
    return temp;
}

struct node* insert( struct node* root, int data ){
	
    struct node* temp=create_node(data);
    if(root==NULL)
    {
        return temp;
    }
    else
    {
        if(root->data>data)
        {
            root->left=insert(root->left,data);     
        }   
        else
        {
            root->right=insert(root->right,data);
        }
    }
    return root;
}