ListNode * InsertatFirst(int value, ListNode * head) {

  // Step1 : creating a new Node with the given val
  ListNode * newnode = new ListNode(value);

  // Step2 : Making next of newly created Node to point the head of LinkedList
  newnode -> next = head;

  // Making the newly created Node as head
  head = newnode;
  return head;
}
