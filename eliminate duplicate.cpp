#include <iostream>
using namespace std;

void remove_duplicates(int arr[], int &size) {
    int new_size = 0;

    for (int i = 0; i < size; i++) {
        bool is_duplicate = false;

        // Check if arr[i] is already in the unique part of the array
        for (int j = 0; j < new_size; j++) {
            if (arr[i] == arr[j]) {
                is_duplicate = true;
                break;
            }
        }

        // If it's not a duplicate, add it to the unique part of the array
        if (!is_duplicate) {
            arr[new_size] = arr[i];
            new_size++;
        }
    } 

    // Update the size to reflect the number of unique elements
    size = new_size;
}

int main() {
    int index;
    cout << "Enter the size of the array:\n";
    cin >> index;

    int arr[index];
    cout << "Enter values of the array:\n";
    for (int i = 0; i < index; i++) {
        cin >> arr[i];
    }

    remove_duplicates(arr, index);

    cout << "Array after removing duplicates:\n";
    for (int i = 0; i < index; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

