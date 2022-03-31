#include "list.h"

void mx_push_back(t_list **list, void *data){
    t_list *new_node = mx_create_node(NULL);
    new_node->data = data;
    t_list *temp = *list;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = new_node;
}
