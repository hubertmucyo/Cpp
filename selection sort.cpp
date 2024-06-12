// selection sort with immediate swapping
#include <iostream>
using namespace std;

int main() {
    int array[5] = {2, 3, 1, 45, 15};
    cout << "The array is: ";
    for (int i = 0; i < 5; i++) {
        cout << array[i] << " ";
    }

    for (int j = 0; j < 5; j++) {
        for (int i = j + 1; i < 5; i++) {
            if (array[i] < array[j]) {
                // Swap the elements
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }

    cout << "\nAfter selection sort with immediate swapping:\n";
    for (int i = 0; i < 5; i++) {
        cout << array[i] << " ";
    }
    return 0;
}




/**selection sort using index
#include<iostream>
using namespace std;

int main(){
	int array[5]={2,3,1,45,15};
	cout<<"The array is: ";
	for(int i=0;i<5;i++){
		cout<<array[i]<<" ";
	}
    for(int j = 0; j < 5; j++) {
        int temp = j;
        for(int i = j + 1; i < 5; i++) {
            if(array[i] < array[minimum_index]) {
                minimum_index = i;
            }
        }
        int sorter = array[j];
        array[j] = array[minimum_index];
        array[minimum_index] = sorter;
    }
	cout<<"\nAfter selection sort:\n";
	for(int i=0;i<5;i++){
		cout<<array[i]<<" ";
	}
	return 0;
}
**/




