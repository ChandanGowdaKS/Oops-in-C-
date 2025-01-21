#include <iostream>

class Example {
private:
    int a, b;

public:
    // Constructor
    Example(int a, int b) {
        // Using the this pointer to distinguish between member variables and parameters
        this->a = a;
        this->b = b;
    }

    // Method to display values
    void display() const {
        std::cout << "a: " << this->a << ", b: " << this->b << std::endl;
    }

    // Method to set values
    void setValues(int a, int b) {
        // Using the this pointer to distinguish between member variables and parameters
        this->a = a;
        this->b = b;
    }
};

int main() {
    Example example(5, 10);
    example.display();

    example.setValues(20, 30);
    example.display();

    return 0;
}
