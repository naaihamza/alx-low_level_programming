#include <stddef.h>

typedef struct list {
    char* str;
    struct list* next;
} list_t;

size_t list_len(const list_t* h) {
    size_t count = 0;

    while (h != NULL) {
        count++;
        h = h->next;
    }

    return count;
}

