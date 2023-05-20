#ifndef LINKEDLISTS_H
#define LINKEDLISTS_H

#include <iostream>


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


void reverse(ListNode* head_ref) {
    ListNode* curr = head_ref;
    ListNode* prev = NULL;
    ListNode* next = NULL;

    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

}

void push(ListNode** head_ref, int new_data) {
    ListNode* new_node = new ListNode();
    new_node->val = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
    
}

void append(ListNode** head_ref, int new_data) {
    ListNode* new_node = new ListNode();
    ListNode *last = *head_ref;
    new_node->val = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = new_node;
    return;
}

/*

say:
5 6 4 
  7 2 

reverse:

4 6 5
2 7 

4 + 2 = 6, carry = 0 -> 6 x x
6 + 7 = 13, carry = 1, sum = 3 -> 6 3 x
5 + 0 = 5, carry = 1, sum = 6  - > 6 3 6
rev again:
636


h1 + h2 + carry, push into variable called sum
if sum >= 10, do  
move to next and repeat
*/

//create a new node with single data, so next is null
ListNode* newNode(int new_data) {
    ListNode* new_node = new ListNode();
    new_node->val = new_data;
    new_node->next = NULL;
    return new_node;
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    //reverse them first
    // reverse(l1);
    // reverse(l2);

    //for the results
    ListNode* answer = NULL;

    //store nodes of temporary sum and the previous number
    ListNode *temp, *prev = NULL;
    int carry = 0, sum;

    while(l1 != NULL || l2 != NULL) {
        sum = carry + (l1 ? l1->val:0) + (l2 ? l2->val : 0);

        carry = (sum >= 10) ? 1 : 0;
        sum = sum % 10;
        temp = newNode(sum);
        if (answer == NULL) 
            answer = temp;
        else 
            prev->next = temp;
        
        prev = temp;

        if (l1) 
            l1 = l1->next;
        if (l2) 
            l2 = l2->next;
        
            
    }    
    if (carry > 0) 
        temp->next = newNode(carry);
    

    // reverse(answer);
    return answer;


}

void printList(ListNode* head_ref) {
    while(head_ref != NULL) {
        std::cout << head_ref->val << " ";
        head_ref = head_ref->next; 
    }
    std::cout << std::endl;
}
#endif