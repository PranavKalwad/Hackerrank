int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}

int getHeight(struct node* root){
    if(root==NULL)
    {
        return -1;
    }
    else
    {
        int lc,rc;
        lc= getHeight(root->left);
        rc = getHeight(root->right);
        if(lc>rc)
            return (lc+1);
        else
            return (rc+1);
    }
}