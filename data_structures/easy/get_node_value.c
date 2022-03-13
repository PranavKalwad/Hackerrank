int count_node(SinglyLinkedListNode* llist)
{
    int count=0;
    if(llist==NULL)
    {
        return count;
    }
    SinglyLinkedListNode* pres=llist;
    while(pres!=NULL)
    {
        count++;
        pres=pres->next;
    }
    return count;
}

int getNode(SinglyLinkedListNode* llist, int positionFromTail) {
    
    if(llist==NULL)
    {
        return 0;
    }
    int n=count_node(llist);
    SinglyLinkedListNode* pres=llist;
    for(int i=1;i<(n-positionFromTail);i++)
    {
        pres=pres->next;        
    }
    return (pres->data);
}