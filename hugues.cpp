#include <iostream>
#include <string>
using namespace std;

// Function to tell Hugues to shut up
void tellHuguesToShutUp(const string& name) {
    cout << "Hey " << name << ", please shut up!" << endl;
}

int main() {
    string name = "Hugues";

    // Call the function to tell Hugues to shut up
    tellHuguesToShutUp(name);

    return 0;
}
