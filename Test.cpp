#include "doctest.h"
#include "FamilyTree.hpp"
using namespace family;

#include <string>
using namespace std;

TEST_CASE("Checking add father")
{
    Tree T("eliel0");
    string father = "";
    father = "eliel1";
    T.addFather("eliel0", father);
    CHECK(T.relation(father) == string("father"));

    father = "eliel2";
    T.addFather("eliel1", father);
    CHECK(T.relation(father) == string("greatfather"));

    father = "eliel3";
    T.addFather("eliel2", father);
    CHECK(T.relation(father) == string("great-greatfather"));

    father = "eliel4";
    T.addFather("eliel3", father);
    CHECK(T.relation(father) == string("great-great-greatfather"));

    father = "eliel5";
    T.addFather("eliel4", father);
    CHECK(T.relation(father) == string("great-great-great-greatfather"));

    father = "eliel6";
    T.addFather("eliel5", father);
    CHECK(T.relation(father) == string("great-great-great-great-greatfather"));

    father = "eliel7";
    T.addFather("eliel6", father);
    CHECK(T.relation(father) == string("great-great-great-great-great-greatfather"));

    father = "eliel8";
    T.addFather("eliel7", father);
    CHECK(T.relation(father) == string("great-great-great-great-great-great-greatfather"));

    father = "eliel9";
    T.addFather("eliel8", father);
    CHECK(T.relation(father) == string("great-great-great-great-great-great-great-greatfather"));

    father = "eliel10";
    T.addFather("eliel9", father);
    CHECK(T.relation(father) == string("great-great-great-great-great-great-great-great-greatfather"));

    father = "eliel11";
    T.addFather("eliel10", father);
    CHECK(T.relation(father) == string("great-great-great-great-great-great-great-great-great-greatfather"));

    father = "eliel12";
    T.addFather("eliel11", father);
    CHECK(T.relation(father) == string("great-great-great-great-great-great-great-great-great-great-greatfather"));

    father = "eliel13";
    T.addFather("eliel12", father);
    CHECK(T.relation(father) == string("great-great-great-great-great-great-great-great-great-great-great-greatfather"));

    father = "eliel14";
    T.addFather("eliel13", father);
    CHECK(T.relation(father) == string("great-great-great-great-great-great-great-great-great-great-great-great-greatfather"));

    father = "eliel15";
    T.addFather("eliel14", father);
    CHECK(T.relation(father) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-greatfather"));

    father = "eliel16";
    T.addFather("eliel15", father);
    CHECK(T.relation(father) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatfather"));

    father = "eliel17";
    T.addFather("eliel16", father);
    CHECK(T.relation(father) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatfather"));

    father = "eliel18";
    T.addFather("eliel17", father);
    CHECK(T.relation(father) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatfather"));

    father = "eliel19";
    T.addFather("eliel18", father);
    CHECK(T.relation(father) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatfather"));

    father = "eliel20";
    T.addFather("eliel19", father);
    CHECK(T.relation(father) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatfather"));

    father = "eliel21";
    T.addFather("eliel20", father);
    CHECK(T.relation(father) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatfather"));

    father = "eliel22";
    T.addFather("eliel21", father);
    CHECK(T.relation(father) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatfather"));

    father = "eliel23";
    T.addFather("eliel22", father);
    CHECK(T.relation(father) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatfather"));

    father = "eliel24";
    T.addFather("eliel23", father);
    CHECK(T.relation(father) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatfather"));

    father = "eliel25";
    T.addFather("eliel24", father);
    CHECK(T.relation(father) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatfather"));

    father = "eliel26";
    T.addFather("eliel25", father);
    CHECK(T.relation(father) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatfather"));

    father = "eliel27";
    T.addFather("eliel26", father);
    CHECK(T.relation(father) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatfather"));

    father = "eliel28";
    T.addFather("eliel27", father);
    CHECK(T.relation(father) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatfather"));

    father = "eliel29";
    T.addFather("eliel28", father);
    CHECK(T.relation(father) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatfather"));

    father = "eliel30";
    T.addFather("eliel29", father);
    CHECK(T.relation(father) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatfather"));

    father = "eliel31";
    T.addFather("eliel30", father);
    CHECK(T.relation(father) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatfather"));

    father = "eliel32";
    T.addFather("eliel31", father);
    CHECK(T.relation(father) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatfather"));

    father = "eliel33";
    T.addFather("eliel32", father);
    CHECK(T.relation(father) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatfather"));

    father = "eliel34";
    T.addFather("eliel33", father);
    CHECK(T.relation(father) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatfather"));
}
TEST_CASE("Checking add mother")
{
    Tree T("eliel0");
    string mother = "";
    mother = "eliel1";
    T.addMother("eliel0", mother);
    CHECK(T.relation(mother) == string("mother"));

    mother = "eliel2";
    T.addMother("eliel1", mother);
    CHECK(T.relation(mother) == string("greatmother"));

    mother = "eliel3";
    T.addMother("eliel2", mother);
    CHECK(T.relation(mother) == string("great-greatmother"));

    mother = "eliel4";
    T.addMother("eliel3", mother);
    CHECK(T.relation(mother) == string("great-great-greatmother"));

    mother = "eliel5";
    T.addMother("eliel4", mother);
    CHECK(T.relation(mother) == string("great-great-great-greatmother"));

    mother = "eliel6";
    T.addMother("eliel5", mother);
    CHECK(T.relation(mother) == string("great-great-great-great-greatmother"));

    mother = "eliel7";
    T.addMother("eliel6", mother);
    CHECK(T.relation(mother) == string("great-great-great-great-great-greatmother"));

    mother = "eliel8";
    T.addMother("eliel7", mother);
    CHECK(T.relation(mother) == string("great-great-great-great-great-great-greatmother"));

    mother = "eliel9";
    T.addMother("eliel8", mother);
    CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-greatmother"));

    mother = "eliel10";
    T.addMother("eliel9", mother);
    CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-greatmother"));

    mother = "eliel11";
    T.addMother("eliel10", mother);
    CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-great-greatmother"));

    mother = "eliel12";
    T.addMother("eliel11", mother);
    CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-great-great-greatmother"));

    mother = "eliel13";
    T.addMother("eliel12", mother);
    CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-great-great-great-greatmother"));

    mother = "eliel14";
    T.addMother("eliel13", mother);
    CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-great-great-great-great-greatmother"));

    mother = "eliel15";
    T.addMother("eliel14", mother);
    CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-greatmother"));

    mother = "eliel16";
    T.addMother("eliel15", mother);
    CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatmother"));

    mother = "eliel17";
    T.addMother("eliel16", mother);
    CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatmother"));

    mother = "eliel18";
    T.addMother("eliel17", mother);
    CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatmother"));

    mother = "eliel19";
    T.addMother("eliel18", mother);
    CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatmother"));

    mother = "eliel20";
    T.addMother("eliel19", mother);
    CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatmother"));

    mother = "eliel21";
    T.addMother("eliel20", mother);
    CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatmother"));

    mother = "eliel22";
    T.addMother("eliel21", mother);
    CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatmother"));

    mother = "eliel23";
    T.addMother("eliel22", mother);
    CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatmother"));

    mother = "eliel24";
    T.addMother("eliel23", mother);
    CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatmother"));

    mother = "eliel25";
    T.addMother("eliel24", mother);
    CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatmother"));

    mother = "eliel26";
    T.addMother("eliel25", mother);
    CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatmother"));

    mother = "eliel27";
    T.addMother("eliel26", mother);
    CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatmother"));

    mother = "eliel28";
    T.addMother("eliel27", mother);
    CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatmother"));

    mother = "eliel29";
    T.addMother("eliel28", mother);
    CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatmother"));

    mother = "eliel30";
    T.addMother("eliel29", mother);
    CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatmother"));

    mother = "eliel31";
    T.addMother("eliel30", mother);
    CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatmother"));

    mother = "eliel32";
    T.addMother("eliel31", mother);
    CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatmother"));

    mother = "eliel33";
    T.addMother("eliel32", mother);
    CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatmother"));

    mother = "eliel34";
    T.addMother("eliel33", mother);
    CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatmother"));

    mother = "eliel35";
    T.addMother("eliel34", mother);
    CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatmother"));

    mother = "eliel36";
    T.addMother("eliel35", mother);
    CHECK(T.relation(mother) == string("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatmother"));
}
TEST_CASE("Checking find")
{
    Tree T("eliel0");
    string father = "";
    father = "eliel1";
    T.addFather("eliel0", father);
    CHECK(T.find("father") == string("eliel1"));

    father = "eliel2";
    T.addFather("eliel1", father);
    CHECK(T.find("greatfather") == string("eliel2"));

    father = "eliel3";
    T.addFather("eliel2", father);
    CHECK(T.find("great-greatfather") == string("eliel3"));

    father = "eliel4";
    T.addFather("eliel3", father);
    CHECK(T.find("great-great-greatfather") == string("eliel4"));

    father = "eliel5";
    T.addFather("eliel4", father);
    CHECK(T.find("great-great-great-greatfather") == string("eliel5"));

    father = "eliel6";
    T.addFather("eliel5", father);
    CHECK(T.find("great-great-great-great-greatfather") == string("eliel6"));

    father = "eliel7";
    T.addFather("eliel6", father);
    CHECK(T.find("great-great-great-great-great-greatfather") == string("eliel7"));

    father = "eliel8";
    T.addFather("eliel7", father);
    CHECK(T.find("great-great-great-great-great-great-greatfather") == string("eliel8"));

    father = "eliel9";
    T.addFather("eliel8", father);
    CHECK(T.find("great-great-great-great-great-great-great-greatfather") == string("eliel9"));

    father = "eliel10";
    T.addFather("eliel9", father);
    CHECK(T.find("great-great-great-great-great-great-great-great-greatfather") == string("eliel10"));

    father = "eliel11";
    T.addFather("eliel10", father);
    CHECK(T.find("great-great-great-great-great-great-great-great-great-greatfather") == string("eliel11"));

    father = "eliel12";
    T.addFather("eliel11", father);
    CHECK(T.find("great-great-great-great-great-great-great-great-great-great-greatfather") == string("eliel12"));

    father = "eliel13";
    T.addFather("eliel12", father);
    CHECK(T.find("great-great-great-great-great-great-great-great-great-great-great-greatfather") == string("eliel13"));

    father = "eliel14";
    T.addFather("eliel13", father);
    CHECK(T.find("great-great-great-great-great-great-great-great-great-great-great-great-greatfather") == string("eliel14"));

    father = "eliel15";
    T.addFather("eliel14", father);
    CHECK(T.find("great-great-great-great-great-great-great-great-great-great-great-great-great-greatfather") == string("eliel15"));

    father = "eliel16";
    T.addFather("eliel15", father);
    CHECK(T.find("great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatfather") == string("eliel16"));

    father = "eliel17";
    T.addFather("eliel16", father);
    CHECK(T.find("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatfather") == string("eliel17"));

    father = "eliel18";
    T.addFather("eliel17", father);
    CHECK(T.find("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatfather") == string("eliel18"));

    father = "eliel19";
    T.addFather("eliel18", father);
    CHECK(T.find("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatfather") == string("eliel19"));

    father = "eliel20";
    T.addFather("eliel19", father);
    CHECK(T.find("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatfather") == string("eliel20"));

    father = "eliel21";
    T.addFather("eliel20", father);
    CHECK(T.find("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatfather") == string("eliel21"));

    father = "eliel22";
    T.addFather("eliel21", father);
    CHECK(T.find("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatfather") == string("eliel22"));

    father = "eliel23";
    T.addFather("eliel22", father);
    CHECK(T.find("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatfather") == string("eliel23"));

    father = "eliel24";
    T.addFather("eliel23", father);
    CHECK(T.find("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatfather") == string("eliel24"));

    father = "eliel25";
    T.addFather("eliel24", father);
    CHECK(T.find("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatfather") == string("eliel25"));

    father = "eliel26";
    T.addFather("eliel25", father);
    CHECK(T.find("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatfather") == string("eliel26"));

    father = "eliel27";
    T.addFather("eliel26", father);
    CHECK(T.find("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatfather") == string("eliel27"));

    father = "eliel28";
    T.addFather("eliel27", father);
    CHECK(T.find("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatfather") == string("eliel28"));

    father = "eliel29";
    T.addFather("eliel28", father);
    CHECK(T.find("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatfather") == string("eliel29"));

    father = "eliel30";
    T.addFather("eliel29", father);
    CHECK(T.find("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatfather") == string("eliel30"));

    father = "eliel31";
    T.addFather("eliel30", father);
    CHECK(T.find("great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-great-greatfather") == string("eliel31"));
}