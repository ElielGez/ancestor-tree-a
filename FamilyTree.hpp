#include <iostream>
namespace family
{
class Tree
{
public:
    Tree(std::string){};

    Tree &addFather(std::string, std::string);
    Tree &addMother(std::string, std::string);
    void display();
    std::string relation(std::string);
    std::string find(std::string);
    void remove(std::string);
};
}; // namespace family