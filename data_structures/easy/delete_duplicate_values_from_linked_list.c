SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {
    
    if(llist==NULL)
    {
        return llist;
    }
    if(llist->next==NULL)
    {
        return llist;
    }
    SinglyLinkedListNode* pres=llist->next;
    SinglyLinkedListNode* test=llist;
    while(pres!=NULL && test!=NULL)
    {
        if((pres->data)!=(test->data))
        {
            test=pres;
            pres=pres->next;
        }
        else 
        {
            test->next=pres->next;
            pres=pres->next;
        }
        //test=pres;
        //pres=pres->next;
    }
    return llist;
}
