// C program for dynamic memory allocation using malloc(),callo(),relloc() and free function().
#include <stdio.h>
#include<stdlib.h>
void mal(int n);
void cal(int n);
void rel(int n);
int main() {
    int j;
    printf("Enter number of elements:");
    scanf("%d",&j);
    printf("\nEntered number of elements: %d", j);
    printf("\n");
    mal(j);
    printf("\n");
    cal(j);
    printf("\n");
    rel(j);
    return 0;
}
void mal(int n){
    int* ptr;
    int i;
    // Dynamically allocate memory using malloc()
    ptr = (int*)malloc(n * sizeof(int));
    
    // Check if the memory has been successfully
    // allocated by malloc or not
    if (ptr == NULL)  {
            printf("\nMemory not allocated.");
            exit(0);
    }
    else {
        // Memory has been successfully allocated
        printf("\nMemory successfully allocated using malloc.");
        // Get the elements of the array
        for (i = 0; i < n; ++i) {
        ptr[i] = i + 1;
        }
        // Print the elements of the array
        printf("\nThe elements of the array are: ");
        for (i = 0; i < n; ++i) 
        printf("%d, ", ptr[i]);
        }
        printf("\n");
        // Free the memory
        free(ptr);
        printf("\nMemory successfully freed.\n");
}
void cal(int n){
    int* ptr;
    int i;
    // Dynamically allocate memory using calloc()
    ptr = (int*)calloc(n, sizeof(int));
    // Check if the memory has been successfully
    // allocated by calloc or not
    if (ptr == NULL) {
        printf("\nemory not allocated.");
        exit(0);
      }
    else {
        // Memory has been successfully allocated
        printf("\nMemory successfully allocated using calloc.");
        // Get the elements of the array
        for (i = 0; i < n; ++i) {
        ptr[i] = i + 1;
          }
        // Print the elements of the array
        printf("\nThe elements of the array are: ");
        for (i = 0; i < n; ++i) {
        printf("%d, ", ptr[i]);
          }
        }
        printf("\n");
        // Free the memory
        free(ptr);
        printf("\nMemory successfully freed.\n");
}
void rel(int n){
    int* ptr;
    int  i;
    // Get the number of elements for the array
    printf("Enter number of elements: %d\n", n);
    // Dynamically allocate memory using calloc()
    ptr = (int*)calloc(n, sizeof(int));
    // Check if the memory has been successfully
    // allocated by malloc or not
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else {
        // Memory has been successfully allocated
        printf("Memory successfully allocated using calloc.\n");
        // Get the elements of the array
        for (i = 0; i < n; ++i) {
        ptr[i] = i + 1;
        }
        // Print the elements of the array
        printf("The elements of the array are: ");
        for (i = 0; i < n; ++i) {
        printf("%d, ", ptr[i]);
        }
        int m ;
        printf("\n\nEnter the new size of the array for memory y re-allocated :" );
        scanf("%d",&m);
        // Dynamically re-allocate memory using realloc()
        ptr = (int*)realloc(ptr, n * sizeof(int));
        // Memory has been successfully allocated
        printf("Memory successfully re-allocated using realloc.\n");
        // Get the new elements of the array
        for (i = 5; i < m; ++i) {
        ptr[i] = i + 1;
        }
        // Print the elements of the array
        printf("The elements of the array are: ");
        for (i = 0; i < m; ++i) {
        printf("%d, ", ptr[i]);
        }
        printf("\n");
        // Free the memory
        free(ptr);
        printf("\nMemory successfully freed.\n");
        }
}

