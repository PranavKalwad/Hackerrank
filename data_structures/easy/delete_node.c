SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position)
{
    if(llist==NULL)
    {
        return llist;
    }
    else if(llist->next==NULL) //Single node in the linked list
    {
        SinglyLinkedListNode* pres=llist;
        free(llist);
        llist=NULL;
        return llist;
    }
    else if(position==0)
    {
        SinglyLinkedListNode* pres=llist;
        llist=pres->next;
        pres->next=NULL;
        free(pres);
        pres=NULL;
        return llist;
    }
    else
    {
        SinglyLinkedListNode* pres=llist;
        SinglyLinkedListNode* prev=NULL;
        for(int i=0;i<position;i++)
        {
            prev=pres;
            pres=pres->next;
        }
        prev->next=pres->next;
        pres->next=NULL;
        free(pres);
        pres=NULL;
    }
    return llist;
}