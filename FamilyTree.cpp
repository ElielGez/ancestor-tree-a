#include "FamilyTree.hpp"

using namespace family;

Tree &Tree::addFather(std::string child, std::string father)
{
    Tree *t = new Tree("tree");
    return *t;
}
Tree &Tree::addMother(std::string child, std::string mother)
{
    Tree *t = new Tree("tree");
    return *t;
}
void Tree::display() {}
std::string Tree::relation(std::string name)
{
    return "not implemented";
}
std::string Tree::find(std::string relation)
{
    return "not implemented";
}
void Tree::remove(std::string name){};