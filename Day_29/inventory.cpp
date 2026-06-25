#include <stdio.h>

struct Item
{
    int itemId;
    char itemName[50];
    int quantity;
    float price;
};

int main()
{
    struct Item it[100];
    int n;
    int i;
    int choice;

    n = 0;

    while (1)
    {
        printf("\n1. Add Item\n");
        printf("2. Display All Items\n");
        printf("3. Search Item by ID\n");
        printf("4. Update Item Quantity\n");
        printf("5. Delete Item\n");
        printf("6. Find Total Inventory Value\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter Item ID: ");
            scanf("%d", &it[n].itemId);
            printf("Enter Item Name: ");
            scanf("%s", it[n].itemName);
            printf("Enter Quantity: ");
            scanf("%d", &it[n].quantity);
            printf("Enter Price: ");
            scanf("%f", &it[n].price);
            n = n + 1;
            printf("Item Added Successfully\n");
        }
        else if (choice == 2)
        {
            if (n == 0)
            {
                printf("No Records Found\n");
            }
            else
            {
                for (i = 0; i < n; i = i + 1)
                {
                    printf("Item ID: %d\n", it[i].itemId);
                    printf("Item Name: %s\n", it[i].itemName);
                    printf("Quantity: %d\n", it[i].quantity);
                    printf("Price: %.2f\n", it[i].price);
                    printf("-----------------------\n");
                }
            }
        }
        else if (choice == 3)
        {
            int searchId;
            int found;

            found = 0;
            printf("Enter Item ID to Search: ");
            scanf("%d", &searchId);

            for (i = 0; i < n; i = i + 1)
            {
                if (it[i].itemId == searchId)
                {
                    printf("Item Found\n");
                    printf("Item Name: %s\n", it[i].itemName);
                    printf("Quantity: %d\n", it[i].quantity);
                    printf("Price: %.2f\n", it[i].price);
                    found = 1;
                }
            }

            if (found == 0)
            {
                printf("Item Not Found\n");
            }
        }
        else if (choice == 4)
        {
            int updateId;
            int newQuantity;
            int found;

            found = 0;
            printf("Enter Item ID to Update: ");
            scanf("%d", &updateId);
            printf("Enter New Quantity: ");
            scanf("%d", &newQuantity);

            for (i = 0; i < n; i = i + 1)
            {
                if (it[i].itemId == updateId)
                {
                    it[i].quantity = newQuantity;
                    found = 1;
                    printf("Quantity Updated Successfully\n");
                }
            }

            if (found == 0)
            {
                printf("Item Not Found\n");
            }
        }
        else if (choice == 5)
        {
            int deleteId;
            int found;
            int j;

            found = 0;
            printf("Enter Item ID to Delete: ");
            scanf("%d", &deleteId);

            for (i = 0; i < n; i = i + 1)
            {
                if (it[i].itemId == deleteId)
                {
                    found = 1;

                    for (j = i; j < n - 1; j = j + 1)
                    {
                        it[j] = it[j + 1];
                    }

                    n = n - 1;
                }
            }

            if (found == 1)
            {
                printf("Item Deleted Successfully\n");
            }
            else
            {
                printf("Item Not Found\n");
            }
        }
        else if (choice == 6)
        {
            float totalValue;

            totalValue = 0;

            if (n == 0)
            {
                printf("No Records Found\n");
            }
            else
            {
                for (i = 0; i < n; i = i + 1)
                {
                    totalValue = totalValue + (it[i].quantity * it[i].price);
                }

                printf("Total Inventory Value: %.2f\n", totalValue);
            }
        }
        else if (choice == 7)
        {
            printf("Exiting Program\n");
            break;
        }
        else
        {
            printf("Invalid Choice. Try Again\n");
        }
    }

    return 0;
}