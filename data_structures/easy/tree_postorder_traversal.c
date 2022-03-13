void postOrder( struct node *root)
{
    struct node* p=root;
    if(p!=NULL)
    {
        postOrder(p->left);
        postOrder(p->right);
        printf("%d\t",p->data);
    }
}