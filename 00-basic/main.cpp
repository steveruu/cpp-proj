#include <iostream>
#include <vector>

int main()
{
    std::cout << "Hello World!" << std::endl;

    // dynamic array, can change its size (not its type)
    std::vector<std::string> strings = {"UX", "Anonym"};
    strings.push_back("adyze");

    // forof
    for (std::string string : strings)
    {
        std::cout << string << std::endl;
    }

    // struct syntax
    struct
    {
        std::string name = "MH";
        std::string field = "React Developer";
    } sedmilhar;

    class student
    {
    public:
        std::string name;
        int phoneNumber;
        student() { std::cout << "student byl zalozen" << std::endl; };
    };

    // classes
    student ja;
    ja.name = "steveruu";
}