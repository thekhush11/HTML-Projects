#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to generate barcode
void generateBarcode(char barcode[], char message[])
{
    // Calculate the length of the message
    int messageLength = strlen(message);

    // Encode the message into the barcode
    for(int i = 0; i < messageLength; i++) 
	{
        barcode[i] = message[i] + 1;
    }

    // Add a null terminator to the barcode string
    barcode[messageLength] = '\0';

    printf("Barcode generated successfully!\n");
}

// Function to scan and decode barcode
void scanAndDecodeBarcode(char barcode[], char message[])
{
    // Calculate the length of the barcode
    int barcodeLength = strlen(barcode);

    // Decode the message from the barcode
    for (int i = 0; i < barcodeLength - 1; i++) {
        message[i] = barcode[i] - 1;
    }

    // Add a null terminator to the message string
    message[barcodeLength - 1] = '\0';

    printf("Encoded message: %s\n", message);
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
