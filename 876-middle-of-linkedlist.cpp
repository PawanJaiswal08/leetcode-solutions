ListNode *middleNode(ListNode *head)
{
    ListNode *singlePtr = head;
    ListNode *doublePtr = head;

    while (doublePtr != NULL && doublePtr->next != NULL)
    {
        singlePtr = singlePtr->next;
        doublePtr = doublePtr->next->next;
    }
    return singlePtr;
}