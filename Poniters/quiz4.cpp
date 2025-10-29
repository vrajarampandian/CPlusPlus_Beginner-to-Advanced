#include<iostream>
using namespace std;

// Define a class 'Person'
class Person {
public:
    string name; // Public member variable to store the name of the person

    // Constructor to initialize the 'name' variable
    Person(string n) : name(n) {}

    // Member function to display the name of the person
    void display() {
        cout << "Name: " << name << endl;
    }
};

// Function to swap two Person objects using double pointers
void swapper(Person **obj1, Person **obj2)
{
    // Double pointers are used here to modify the actual pointers in the calling function.
    // If single pointers were used, only local copies of the pointers would be swapped,
    // and the original pointers in the calling function would remain unchanged.

    // Temporary pointer to hold one of the objects during the swap
    Person *temp = *obj1;

    // Swap the pointers to the Person objects
    *obj1 = *obj2;
    *obj2 = temp;
}

int main()
{
    // Create two Person objects dynamically using 'new'
    Person *p1 = new Person("Alice"); // Pointer 'p1' points to a Person object with name "Alice"
    Person *p2 = new Person("Bob");   // Pointer 'p2' points to a Person object with name "Bob"

    // Display the names of the Person objects before swapping
    cout << "Before swapping:" << endl;
    p1->display(); // Displays "Name: Alice"
    p2->display(); // Displays "Name: Bob"

    // Call the 'swapper' function to swap the two Person objects
    // Pass the addresses of the pointers 'p1' and 'p2' (double pointers)
    swapper(&p1, &p2);

    // Display the names of the Person objects after swapping
    cout << "After swapping:" << endl;
    p1->display(); // Displays "Name: Bob" (p1 now points to the object originally pointed to by p2)
    p2->display(); // Displays "Name: Alice" (p2 now points to the object originally pointed to by p1)

    // Clean up dynamically allocated memory to avoid memory leaks
    delete p1; // Deletes the object currently pointed to by 'p1'
    delete p2; // Deletes the object currently pointed to by 'p2'

    return 0; // Indicate successful program termination
}