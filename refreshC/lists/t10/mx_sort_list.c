#include"list.h"

t_list *mx_sort_list(t_list *list, bool (*cmp)(void *a, void *b)) {
    t_list *temp = list;
    while(temp) {
        if (temp->next != NULL) {
            if (cmp(temp->data, temp->next->data)) {
                t_list *cpy = temp;
                temp = temp->next;
                temp->next = cpy;
            }
            temp = temp->next;
        }
    }
    return list;
}
