int count_nodes(SinglyLinkedListNode* llist)
{
    int count=0;
    if(llist==NULL)
    {
        return count;    
    }
    else 
    {
        SinglyLinkedListNode* pres=llist;
        while(pres!=NULL)
        {
            count++;
            pres=pres->next;
        }
    }
    return count;
}


SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) 
{
    SinglyLinkedListNode* node = create_singly_linked_list_node(data);
    int n=count_nodes(llist);
    if(llist==NULL)
    {
        return 0;
    }
    else if(position<0 || position>n)
    {
        return 0;
    }
    else if(position==0)
    {
        node->next=llist;
        llist=node;
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
        prev->next=node;
        node->next=pres;
    }
    return llist;
}