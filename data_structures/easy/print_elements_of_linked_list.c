void printLinkedList(SinglyLinkedListNode* head) {
if(head==NULL)
{
    return;
}
else {
    SinglyLinkedListNode* pres=head;
    while(pres!=NULL)
    {
        printf("%d\n",pres->data);
        pres=pres->next;
    }
}

}