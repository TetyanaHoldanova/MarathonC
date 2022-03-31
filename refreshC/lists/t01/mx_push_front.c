#include "list.h"

void mx_push_front(t_list **list, void *data){
    t_list *new_node = mx_create_node(NULL);
    new_node->data = data;
    t_list *temp = *list;
    *list = new_node;
    new_node->next = temp;
}
