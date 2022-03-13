SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data)
{
    SinglyLinkedListNode* node =create_singly_linked_list_node(data);
    if(llist==NULL)
    {
        node->next=llist;
        llist=node;
    }
    else
    {
        node->next=llist;
        llist=node;
    }
    return llist;
}