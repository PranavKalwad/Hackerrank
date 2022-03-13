DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* llist, int data) {
    
    DoublyLinkedListNode *p = (DoublyLinkedListNode*)malloc(sizeof(DoublyLinkedListNode));
DoublyLinkedListNode *q = llist;
p->data= data;
if(q->data>data)
{
    q->prev = p;
    p->next = q;
    p->prev = NULL;
    llist = p;
    return llist;
}
while(q!=NULL)
{
    if (q->data >= data)
    {
        p->next = q;
        p->prev = q->prev;
        q->prev->next = p;
        return llist;
    }
    else if (q->next==NULL)
    {
        q->next = p;
        p->prev = q;
        p->next = NULL;
        return llist;
    }
    q = q->next;
}
return llist;
}