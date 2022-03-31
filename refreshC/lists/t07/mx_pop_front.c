#include "list.h"

void mx_pop_front(t_list **list){
    t_list *tmp = *list;
    *list = (*list)->next;
    free(tmp);
}
