#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void generateBarcode(char barcode[], char message[])
{
    int messageLength = strlen(message);
    for (int i = 0; i < messageLength; i++) {
        barcode[i] = message[i] + 1;
    }

    barcode[messageLength] = '\0';

    printf("Barcode generated successfully!\n");
}

void scanAndDecodeBarcode(char barcode[], char message[])
{
    int barcodeLength = strlen(barcode);
    for (int i = 0; i < barcodeLength; i++) {
        message[i] = barcode[i];
    }

    message[barcodeLength - 1] = '\0';
    printf("Decoded message: %s\n", message);
}
void generateBarcodeFromInt(char barcode[], int number)
{
    char numberString[10];
    sprintf(numberString, "%d", number);
    int numberStringLength = strlen(numberString);
    for (int i = 0; i < numberStringLength; i++) {
        barcode[i] = numberString[i] + 1;
    }
    barcode[numberStringLength] = '\0';
    printf("Barcode generated successfully!\n");
}
void scanAndDecodeBarcodeFromInt(char barcode[], int *number)
{
    int barcodeLength = strlen(barcode);
    char numberString[10];
    for (int i = 0; i < barcodeLength; i++) {
        numberString[i] = barcode[i];
    }
    numberString[barcodeLength] = '\0';
    *number = atoi(numberString);

    printf("Decoded number: %d\n", *number);
}

int main()
{
    char barcode[100];
    char message[100];
    int number;

    int choice;

    do {
        printf("\n1. Generate Barcode from String\n2. Generate Barcode from Integer\n3. Scan Barcode and Show Message\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter the message to encode: ");
                scanf("%s", message);

                generateBarcode(barcode, message);

                printf("Generated barcode: %s\n", barcode);
                break;
            case 2:
                printf("Enter the number to encode: ");
                scanf("%d", &number);

                generateBarcodeFromInt(barcode, number);

                printf("Generated barcode: %s\n", barcode);
                break;
            case 3:
                printf("Enter the barcode to scan: ");
                scanf("%s", barcode);

                if (barcode[0] == 's') {
                    scanAndDecodeBarcodeFromInt(barcode, &number);
                    printf("Decoded message: %d\n", number);
                } else {
                    scanAndDecodeBarcode(barcode, message);
                    printf("Decoded message: %s\n", message);
                }

                break;
            case 4:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while(choice != 4);

    return 0;
}
