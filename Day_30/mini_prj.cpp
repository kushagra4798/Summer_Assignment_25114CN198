#include <stdio.h>
#include <string.h>

void addItem(char names[][30], float prices[], int *count)
{
    printf("Enter item name: ");
    scanf("%s", names[*count]);

    printf("Enter item price: ");
    scanf("%f", &prices[*count]);

    *count = *count + 1;
    printf("Item added successfully.\n");
}

void displayItems(char names[][30], float prices[], int count)
{
    int i;

    if (count == 0)
    {
        printf("No items to display.\n");
    }
    else
    {
        for (i = 0; i < count; i++)
        {
            printf("Item %d: %s, Price: %.2f\n", i + 1, names[i], prices[i]);
        }
    }
}

float totalPrice(float prices[], int count)
{
    float total;
    int i;

    total = 0;
    for (i = 0; i < count; i++)
    {
        total = total + prices[i];
    }

    return total;
}

void searchItem(char names[][30], float prices[], int count)
{
    char searchName[30];
    int i;
    int found;

    printf("Enter item name to search: ");
    scanf("%s", searchName);

    found = 0;
    for (i = 0; i < count; i++)
    {
        if (strcmp(names[i], searchName) == 0)
        {
            printf("Item found. Price: %.2f\n", prices[i]);
            found = 1;
        }
    }

    if (found == 0)
    {
        printf("Item not found.\n");
    }
}

int main()
{
    char names[50][30];
    float prices[50];
    int count;
    int choice;
    float total;

    count = 0;

    do
    {
        printf("\n1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Calculate Total Price\n");
        printf("4. Search Item\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            addItem(names, prices, &count);
        }
        else if (choice == 2)
        {
            displayItems(names, prices, count);
        }
        else if (choice == 3)
        {
            total = totalPrice(prices, count);
            printf("Total Price: %.2f\n", total);
        }
        else if (choice == 4)
        {
            searchItem(names, prices, count);
        }
        else if (choice == 5)
        {
            printf("Exiting program.\n");
        }
        else
        {
            printf("Invalid choice.\n");
        }

    } while (choice != 5);

    return 0;
}