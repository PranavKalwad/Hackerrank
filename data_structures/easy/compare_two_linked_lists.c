bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2)
{
    SinglyLinkedListNode* p1=head1;
    SinglyLinkedListNode* p2=head2;
    if(p1==NULL && p2==NULL)
    {
        return 0;
    }
    if(p1==NULL || p2==NULL)
    {
        return 0;
    }
    while(p1!=NULL && p2!=NULL)
    {
        if(p1==NULL || p2==NULL)
        {
            return 0;
        }
        if(p1->data==p2->data)
        {
            p1=p1->next;
            p2=p2->next;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}