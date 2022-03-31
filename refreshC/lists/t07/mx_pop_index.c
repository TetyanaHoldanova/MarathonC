#include "list.h"

void mx_pop_index(t_list **list, int index) {
    if(list != NULL && *list != NULL) {
        if(index <= 0)
            mx_pop_front(list);
        else {
            t_list *tmp = *list;
            t_list *tmp1 = *list;
            for (int i = 0; i < index; i++){
                if (tmp->next != NULL)
                    tmp1 = tmp;
                    tmp = tmp->next;
            }
            if(tmp->next == NULL)
                mx_pop_back(list);
            else {
                t_list *temp = tmp->next;
                tmp1->next = temp;
                free(tmp);
            }
        }
    }
}
