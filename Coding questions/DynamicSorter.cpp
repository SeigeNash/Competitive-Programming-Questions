#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the dynamic sorter data structure
typedef struct {
    void *data;                    // Pointer to the data array
    size_t size;                   // Number of elements in the array
    size_t element_size;           // Size of each element in bytes
    int (*compare)(const void *, const void *); // Comparison function pointer
    void (*swap)(void *, void *);   // Swapping function pointer
} DynamicSorter;

// Initialize the dynamic sorter
void dynamic_sorter_init(DynamicSorter *ds, size_t element_size,
                         int (*compare)(const void *, const void *),
                         void (*swap)(void *, void *)) {
    ds->data = NULL;
    ds->size = 0;
    ds->element_size = element_size;
    ds->compare = compare;
    ds->swap = swap;
}

// Add data to the dynamic array
void dynamic_sorter_add(DynamicSorter *ds, const void *element) {
    // Allocate or reallocate memory
    ds->data = realloc(ds->data, (ds->size + 1) * ds->element_size);
    if (ds->data == NULL) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }

    // Copy the element to the end of the array
    memcpy((char *)ds->data + (ds->size * ds->element_size), element, ds->element_size);
    ds->size++;
}
 
// Perform a comparison based on the provided compare function
int dynamic_compare(const void *a, const void *b, DynamicSorter *ds) {
    return ds->compare(a, b);
}

// Sort the data using the standard library qsort function
void dynamic_sort(DynamicSorter *ds) {
    qsort(ds->data, ds->size, ds->element_size, (int (*)(const void *, const void *))ds->compare);
}

// Cleanup and free memory
void dynamic_sorter_free(DynamicSorter *ds) {
    free(ds->data);
    ds->data = NULL;
    ds->size = 0;
}

// Example comparison function for integers
int int_compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// Example swapping function for integers
void int_swap(void *a, void *b) {
    int temp = *(int *)a;
    *(int *)a = *(int *)b;
    *(int *)b = temp;
}

// Example usage
int main() {
    DynamicSorter ds;
    dynamic_sorter_init(&ds, sizeof(int), int_compare, int_swap);

    int data[] = {5, 3, 8, 1, 2};
    for (size_t i = 0; i < sizeof(data) / sizeof(data[0]); i++) {
        dynamic_sorter_add(&ds, &data[i]);
    }

    printf("Unsorted data: ");
    for (size_t i = 0; i < ds.size; i++) {
        printf("%d ", *((int *)ds.data + i));
    }


    dynamic_sort(&ds);

    printf("\nSorted data: ");
    for (size_t i = 0; i < ds.size; i++) {
        printf("%d ", *((int *)ds.data + i));
    }
    printf("\n");

    dynamic_sorter_free(&ds);

    return 0;
}

