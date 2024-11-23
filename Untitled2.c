#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void generateBarcode(const char* message) {
    printf("Generating barcode...\n");

    // Print the barcode symbols based on ASCII values or numeric values
    for (int i = 0; i < strlen(message); i++) {
        printf("%d ", message[i]);
    }
    
    printf("\nBarcode generated successfully!\n");
}

void decodeBarcode(const char* barcode) {
    printf("Decoding barcode...\n");

    char* token = strtok(barcode, " ");
    while (token != NULL) {
        int value = atoi(token);
        printf("%c", value);
        token = strtok(NULL, " ");
    }
    
    printf("\nBarcode decoded successfully!\n");
}

int main() {
    int option;
    char input[1000];
    char barcode[1000];
    
    while (1) {
        printf("1. Generate Barcode\n");
        printf("2. Decode Barcode\n");
        printf("3. Exit\n");
        printf("Select an option: ");
        scanf("%d", &option);
        
        if (option == 1) {
            printf("Enter the message or details: ");
            scanf(" %[^\n]s", input);
            generateBarcode(input);
        } else if (option == 2) {
            printf("Enter the barcode: ");
            scanf(" %[^\n]s", barcode);
            printf("Barcode: %s\n", barcode);
            decodeBarcode(barcode);
        } else if (option == 3) {
            printf("Exiting...\n");
            break;
        } else {
            printf("Invalid option selected!\n");
        }
        
        printf("\n");
    }
    
    return 0;
}

