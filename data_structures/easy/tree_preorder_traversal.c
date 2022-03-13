void preOrder( struct node *root)
{
    struct node* p=root;
    if(p!=NULL)
    {
        printf("%d\t",p->data);
        preOrder(p->left);
        preOrder(p->right);
    }
}