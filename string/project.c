#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Plot {
    char plotID[20];
    char ownerName[50];
    float size; // in acres
    char location[50];
    float price;
};

struct Plot plots[1000];
int plotCount = 0;
char fileName[100];

// Function to load data from the file
void loadDataFromFile() {
    FILE *file = fopen(fileName, "r");
    if (file == NULL) {
        printf("File does not exist. A new file will be created upon saving.\n");
        return;
    }
    while (fscanf(file, "%19s\n%49[^\n]\n%f\n%49[^\n]\n%f\n",
                  plots[plotCount].plotID,
                  plots[plotCount].ownerName,
                  &plots[plotCount].size,
                  plots[plotCount].location,
                  &plots[plotCount].price) != EOF) {
        plotCount++;
    }
    fclose(file);
    printf("Data loaded successfully from %s.\n", fileName);
}

// Function to save data to the file
void saveDataToFile() {
    FILE *file = fopen(fileName, "w");
    if (file == NULL) {
        printf("Error: Unable to open file for writing.\n");
        return;
    }
    for (int i = 0; i < plotCount; i++) {
        fprintf(file, "%s\n%s\n%.2f\n%s\n%.2f\n",
                plots[i].plotID,
                plots[i].ownerName,
                plots[i].size,
                plots[i].location,
                plots[i].price);
    }
    fclose(file);
    printf("Data saved successfully to %s.\n", fileName);
}

// Function to add a plot
void addPlot() {
    if (plotCount >= 1000) {
        printf("Maximum plot limit reached. Cannot add more plots.\n");
        return;
    }
    struct Plot newPlot;
    printf("Enter Plot ID: ");
    getchar();
    fgets(newPlot.plotID, 20, stdin);
    newPlot.plotID[strcspn(newPlot.plotID, "\n")] = '\0';

    printf("Enter Owner Name: ");
    fgets(newPlot.ownerName, 50, stdin);
    newPlot.ownerName[strcspn(newPlot.ownerName, "\n")] = '\0';

    printf("Enter Plot Size (in acres): ");
    scanf("%f", &newPlot.size);
    getchar();

    printf("Enter Location: ");
    fgets(newPlot.location, 50, stdin);
    newPlot.location[strcspn(newPlot.location, "\n")] = '\0';

    printf("Enter Price: ");
    scanf("%f", &newPlot.price);

    plots[plotCount] = newPlot;
    plotCount++;
    printf("Plot added successfully!\n");

    saveDataToFile();
}

// Function to update a plot
void updatePlot() {
    char plotID[20];
    printf("Enter the Plot ID to update: ");
    getchar();
    fgets(plotID, 20, stdin);
    plotID[strcspn(plotID, "\n")] = '\0';

    for (int i = 0; i < plotCount; i++) {
        if (strcmp(plots[i].plotID, plotID) == 0) {
            printf("Plot found! Enter the details to update:\n");
            printf("1. Update Owner Name\n");
            printf("2. Update Price\n");
            printf("3. Update Size\n");
            printf("Enter your choice: ");
            int choice;
            scanf("%d", &choice);
            getchar();

            if (choice == 1) {
                printf("Enter new Owner Name: ");
                fgets(plots[i].ownerName, 50, stdin);
                plots[i].ownerName[strcspn(plots[i].ownerName, "\n")] = '\0';
            } else if (choice == 2) {
                printf("Enter new Price: ");
                scanf("%f", &plots[i].price);
            } else if (choice == 3) {
                printf("Enter new Size (in acres): ");
                scanf("%f", &plots[i].size);
            } else {
                printf("Invalid choice!\n");
            }
            printf("Plot updated successfully!\n");
            saveDataToFile();
            return;
        }
    }
    printf("Plot with ID %s not found.\n", plotID);
}

// Function to delete a plot by ID
void deletePlotByID() {
    char plotID[20];
    printf("Enter the Plot ID to delete: ");
    getchar();
    fgets(plotID, 20, stdin);
    plotID[strcspn(plotID, "\n")] = '\0';

    for (int i = 0; i < plotCount; i++) {
        if (strcmp(plots[i].plotID, plotID) == 0) {
            for (int j = i; j < plotCount - 1; j++) {
                plots[j] = plots[j + 1];
            }
            plotCount--;
            printf("Plot with ID %s deleted successfully!\n", plotID);
            saveDataToFile();
            return;
        }
    }
    printf("Plot with ID %s not found.\n", plotID);
}

// Function to list all plots or filter them
void listAndFilterPlots() {
    if (plotCount == 0) {
        printf("No plots available.\n");
        return;
    }

    printf("Choose an option:\n");
    printf("1. List all plots\n");
    printf("2. Filter plots\n");
    int choice;
    scanf("%d", &choice);
    getchar();

    if (choice == 1) {
        for (int i = 0; i < plotCount; i++) {
            printf("\n");
            printf("Plot ID: %s\n", plots[i].plotID);
            printf("Owner Name: %s\n", plots[i].ownerName);
            printf("Size (acres): %.2f\n", plots[i].size);
            printf("Location: %s\n", plots[i].location);
            printf("Price: %.2f\n", plots[i].price);
            printf("\n");
        }
    } else if (choice == 2) {
        printf("Filter options:\n");
        printf("1. By Location\n");
        printf("2. By Size (greater than or equal to a given size)\n");
        int filterChoice;
        scanf("%d", &filterChoice);
        getchar();

        if (filterChoice == 1) {
            char location[50];
            printf("Enter Location: ");
            fgets(location, 50, stdin);
            location[strcspn(location, "\n")] = '\0';

            printf("Plots in location %s:\n", location);
            for (int i = 0; i < plotCount; i++) {
                if (strcmp(plots[i].location, location) == 0) {
                    printf("Plot ID: %s | Owner: %s | Size: %.2f acres | Price: %.2f\n",
                            plots[i].plotID, plots[i].ownerName, plots[i].size, plots[i].price);
                }
            }
        } else if (filterChoice == 2) {
            float minSize;
            printf("Enter minimum size (in acres): ");
            scanf("%f", &minSize);

            printf("Plots with size >= %.2f acres:\n", minSize);
            for (int i = 0; i < plotCount; i++) {
                if (plots[i].size >= minSize) {
                    printf("Plot ID: %s | Owner: %s | Size: %.2f acres | Location: %s | Price: %.2f\n",
                            plots[i].plotID, plots[i].ownerName, plots[i].size, plots[i].location, plots[i].price);
                }
            }
        } else {
            printf("Invalid option!\n");
        }
    } else {
        printf("Invalid choice!\n");
    }
}

// Main function
int main() {
    printf("Enter the file name to store data (e.g., plots_data.txt): ");
    scanf("%s", fileName);
    getchar(); // Clear newline character from buffer

    loadDataFromFile();

    while (1) {
        printf("\nLand Management System Menu:\n");
        printf("1. Add a Plot\n");
        printf("2. List or Filter Plots\n");
        printf("3. Update a Plot\n");
        printf("4. Delete a Plot by ID\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        int choice;
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addPlot();
                break;
            case 2:
                listAndFilterPlots();
                break;
            case 3:
                updatePlot();
                break;
            case 4:
                deletePlotByID();
                break;
            case 0:
                printf("Thank you for using the Land Management System.\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}
