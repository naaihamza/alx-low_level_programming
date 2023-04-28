#include <stdlib.h>
#include <string.h>

typedef struct list {
    char* str;
    struct list* next;
} list_t;

list_t* add_node_end(list_t** head, const char* str) {
    list_t* new_node = (list_t*)malloc(sizeof(list_t));
    if (new_node == NULL) {
        // Failed to allocate memory for the new node
        return NULL;
    }

    new_node->next = NULL;

    new_node->str = strdup(str);
    if (new_node->str == NULL) {
        free(new_node);
        // Failed to duplicate the string
        return NULL;
    }

    if (*head == NULL) {
        *head = new_node; // The list is empty, make the new node the head
    } else {
        list_t* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_node; // Add the new node at the end
    }

    return new_node;
}


