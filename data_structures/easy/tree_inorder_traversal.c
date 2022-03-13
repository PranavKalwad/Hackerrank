void inOrder( struct node *root)
{
    struct node* p=root;
    if(p!=NULL)
    {
        inOrder(p->left);
        printf("%d\t",p->data);
        inOrder(p->right);
    }
}