#include <stdio.h>
#include <string.h>

int main() {
    char name[50];

    printf("Enter your name: ");
    
    // Use fgets instead of scanf to safely read input (handles spaces)
    if (fgets(name, sizeof(name), stdin) != NULL) {
        // Remove newline character if present
        name[strcspn(name, "\n")] = '\0';
        
        if (strlen(name) > 0)
            printf("Hello, %s! 👋 Welcome to the C world.\n", name);
        else
            printf("Hello, mysterious stranger! 👀 Welcome to the C world.\n");
    } else {
        printf("Input error. Please try again.\n");
    }

    return 0;
}
