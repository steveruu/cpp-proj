#include <iostream>
#include <vector>

int main()
{
    std::cout << "Hello World!" << std::endl;

    // dynamic array, can change its size (not its type)
    std::vector<std::string> students = {"UX", "Anonym"};
    students.push_back("adyze");

    for (std::string student : students)
    {
        std::cout << student << std::endl;
    }
}