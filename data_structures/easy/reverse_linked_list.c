SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist) {
    if(llist==NULL)
    {
        return llist;
    }
    else if(llist->next==NULL)
    {
        return llist;
    }
    else
    {
     SinglyLinkedListNode* pres=llist;
     SinglyLinkedListNode* prev=NULL;
     SinglyLinkedListNode* next=NULL;
     while(pres!=NULL)
        {
            //Store the next link.
            next=pres->next;
            //Reversing the current link
            pres->next=prev;
            //Moving the pointers ahead by 1 position
            prev=pres;
            pres=next;
        }
        //Changing the head pointer
         llist=prev;   
    }
    return llist;
}
