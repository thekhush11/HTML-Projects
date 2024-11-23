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
    for (int i = 0; i < barcodeLength - 1; i++) {
        message[i] = barcode[i] - 1;
    }

    message[barcodeLength - 1] = '\0';

    printf("Decoded message: %s\n", message);
}

int main()
{
    char barcode[100];
    char message[100];

    int choice;

    do {
        printf("\n1. Generate Barcode\n2. Scan Barcode\n3. Exit\n");
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
                printf("Enter the barcode to scan: ");
                scanf("%s", barcode);

                scanAndDecodeBarcode(barcode, message);

                break;
            case 3:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while(choice != 3);

    return 0;
}

