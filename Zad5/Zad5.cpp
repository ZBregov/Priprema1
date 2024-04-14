#include <iostream>
#include <cstdlib>
#include <sstream>

using namespace std;

int main(int argc, char* argv[]) {
    int polje[10]; // Array to store integers (max 10 elements)

    int numElements = 0;  // Initialize number of elements to 0

    // Check if any arguments were provided (excluding program name)
    if (argc > 1) {
        // Limit to maximum 10 elements
        numElements = min(argc - 1, 10);

        // Convert arguments to integers using a loop and checks
        for (int i = 1; i <= numElements; i++) {
            bool valid = true;
            for (int j = 0; argv[i][j] != '\0'; j++) {
                if (!isdigit(argv[i][j])) {
                    valid = false;
                    break;
                }
            }

            if (valid) {
                polje[i - 1] = atoi(argv[i]); // Convert only if valid integer string
            }
            else {
                // Handle non-numeric argument (e.g., print an error message)
                cerr << "Error: Argument " << i << " is not a valid integer." << endl;
            }
        }
    }
    else {
        cout << "No arguments provided. Enter up to 10 integers (separated by spaces): ";
        // Read user input for elements
        for (int i = 0; i < 10; i++) {
            if (!(cin >> polje[i])) {
                break; // Exit loop on non-numeric input
            }
            numElements++;
        }
    }

    // Square the elements in the array
    for (int i = 0; i < numElements; i++) {
        polje[i] *= polje[i];
    }

    // Print the squared elements
    cout << "Squared elements: ";
    for (int i = 0; i < numElements; i++) {
        cout << polje[i] << " ";
    }
    cout << endl;

    return 0;
}
