#include <iostream>
#include <stdexcept>

class Vector {
private:
    int* data;       // Pointer to the dynamic array
    int size;        // Number of elements in the vector
    int capacity;    // Capacity of the vector

public:
    Vector() : data(nullptr), size(0), capacity(0) {}

    ~Vector() {
        delete[] data;
    }

    void push_back(const int& value) {
        if (size == capacity) {
            if (capacity == 0)
                capacity = 1;
            else
                capacity *= 2;

            int* newData = new int[capacity];

            for (int i = 0; i < size; ++i) {
                newData[i] = data[i];
            }

            delete[] data;

            data = newData;
        }

        data[size] = value;
        ++size;
    }

    int operator[](int index) {
        if (index >= size || index < 0) {
            throw std::out_of_range("Index out of range");
        }
        return data[index];
    }

    int getSize() const {
        return size;
    }
};

int main() {
    Vector myVector;

    // Add elements to the vector
    myVector.push_back(1); // size=1, capacity=1, data=[1]
    myVector.push_back(2); // size=2, capacity=2, data=[1, 2]
    myVector.push_back(3); // size=3, capacity=4, data=[1, 2, 3]

    // Access elements by index
    for (int i = 0; i < myVector.getSize(); ++i) {
        std::cout << "myVector[" << i << "] = " << myVector[i] << std::endl;
    }

    return 0;
}
