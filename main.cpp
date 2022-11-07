//vectors > array usage bc they are more flexible.
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> days = {4, 3, 5, 6};
    cout << days.size() << endl; //function .size() gets the size of the vector (4 elements).
    days.push_back(800); //function .push_back()  adds an element to the vector
    cout << days.size() << endl; //adds 800 to last index.
    cout << days[4] << endl; //prints out the new value.
    days.pop_back(); //removes the last element of vector.
    cout << days.size(); //back to 4 elements.
    return 0;
}
