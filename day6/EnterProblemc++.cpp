#include <iostream>
int main(){
    int age;
    char name[20];
    std::cout << "Enter age: ";
    std::cin >> age;
    std::cout << "Enter name: ";
    // std::cin >> name;
    std::cin.ignore();
    std::cin.getline(name, 20);

    std::cout << "Name: " << name << " age: " << age;
    return 0;
}