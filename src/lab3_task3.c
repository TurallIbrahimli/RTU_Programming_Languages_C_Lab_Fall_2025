#include <stdio.h>

// Function to calculate the length of a string (excluding '\0')
int my_strlen(const char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++; // Move to next character
    }
    return length;
}

// Function to copy string from src to dest
void my_strcpy(char *dest, const char *src) {
    while (*src != '\0') {
        *dest = *src;  // Copy character
        dest++;
        src++;
    }
    *dest = '\0';  // Null-terminate the destination
}

// Main function to test the implementations
int main() {
    const char *original = "Hello, world!";
    char copy[50]; // Make sure it's big enough

    // Test my_strlen
    int len = my_strlen(original);
    printf("Length: %d\n", len);  // Should print 13

    // Test my_strcpy
    my_strcpy(copy, original);
    printf("Copied string: %s\n", copy);  // Should print "Hello, world!"

    return 0;
}
