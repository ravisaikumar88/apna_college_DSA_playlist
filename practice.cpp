#include <iostream>

class Singleton {
private:
    static Singleton* instance;
    Singleton() {} // Private constructor to prevent direct instantiation

public:
    static Singleton* getInstance() {
        if (!instance) {
            instance = new Singleton();
        }
        return instance;
    }

    void showMessage() {
        std::cout << "Hello, Singleton!" << std::endl;
    }
};

// Initialize the static instance pointer to null
Singleton* Singleton::instance = nullptr;

int main() {
    Singleton* obj1 = Singleton::getInstance();
    Singleton* obj2 = Singleton::getInstance();

    obj1->showMessage(); // Output: Hello, Singleton!
    obj2->showMessage(); // Output: Hello, Singleton!

    // obj1 and obj2 point to the same instance
    if (obj1 == obj2) {
        std::cout << "Both objects are the same instance." << std::endl;
    }

    return 0;
}
