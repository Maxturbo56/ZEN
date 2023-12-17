#include <iostream>
#include <string>
#include <vector>

// --------------------------------------- //
//               ZEN OBJECT                //
// --------------------------------------- //

class ZEN{
    std::string name_of_ZEN;
    int value_of_ZEN;
public:
    ZEN(std::string name, int value);
    ZEN();
    ~ZEN() = default;
    void set_ZEN_Name(std::string ZEN_Name);
    std::string get_ZEN_Name();
    void set_ZEN_Value(int ZEN_Value);
    int get_ZEN_Value();
};

class ZEN_Container{
    std::vector <ZEN> ZEN_Vec;
public:
    //ZEN_Container();
    ~ZEN_Container() = default;
    void Add_To_ZEN_Container(ZEN zen);
    void Read_ZEN_Container();
    std::vector <ZEN> get_ZEN_Container(); 
    void Remove_From_ZEN_Container_With_Name(std::string s);
    void Remove_From_ZEN_Container_With_Value(int n);
    void Empty_ZEN_Container();
};