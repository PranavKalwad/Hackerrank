void reversePrint(SinglyLinkedListNode* llist)
{
    if(llist==NULL)
    {
        return;
    }
    else if(llist->next==NULL)
    {
        printf("%d\t",llist->data);
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
    SinglyLinkedListNode* one=llist;
    while(one!=NULL)
    {
        printf("%d\n",one->data);
        one=one->next;
    }
}