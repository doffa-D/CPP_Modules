#include <iostream>

template <typename T>
class MyTemplateClass {
private:
    T data;

public:
    MyTemplateClass(T value) : data(value) {}

    T getData() {
        return data;
    }
};

int main() 
{
    MyTemplateClass<int> intInstance(42);
    MyTemplateClass<std::string> doubleInstance("sss");

    int intValue = intInstance.getData();
    std::string doubleValue = doubleInstance.getData();

    std::cout << "Int value: " << intValue << std::endl;
    std::cout << "Double value: " << doubleValue << std::endl;

    return 0;
}
