SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data)
{
    
    SinglyLinkedListNode* node=create_singly_linked_list_node(data);
    if(head==NULL)
    {
        head=node;
    }
    else 
    {
        SinglyLinkedListNode* pres=head;
        while(pres->next!=NULL)
        {
            pres=pres->next;
        }
        pres->next=node;
    }
    return head;
}