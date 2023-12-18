#include <iostream>
#include <string>
#include <vector>
#include <fstream>

// --------------------------------------- //
//               ZEN OBJECT                //
// --------------------------------------- //

class ZEN{
    std::string name_of_ZEN;
    int value_of_ZEN;
    std::vector <std::string> attributes_of_ZEN;
public:
    ZEN(std::string name, int value);
    ZEN();
    ~ZEN() = default;
    void set_ZEN_Name(std::string ZEN_Name);
    std::string get_ZEN_Name();
    void set_ZEN_Value(int ZEN_Value);
    int get_ZEN_Value();
    // OPERATORS
    int operator ++(int);
    int operator !();
    int operator +(ZEN& z);
    int operator -(ZEN& z);
    // ATTRIBUTION
    void add_attribute_of_ZEN(std::string s);
    void remove_attribute_of_ZEN(std::string s);
    void clear_Attributes_Of_ZEN();
    int attribute_SIZE();
    std::string get_Attribute_At_Index(int n);
};

std::ostream& operator <<(std::ostream& out, ZEN z);
std::istream& operator >>(std::istream& in, ZEN& z);

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
    ZEN Find_ZEN_With_Name(std::string s);
    ZEN Find_ZEN_With_Value(int n);
    void Empty_ZEN_Container();
    int get_ZEN_Container_Size();
    ZEN get_ZEN_At_Index(int n);
    void Add_ZEN_Container_To_Container(ZEN_Container operand);
};

class ZEN_File{
    std::string file_Name;
    std::ifstream file_Output;
    std::ofstream file_Input;  
public:
    void Write_ZEN_File(std::string file_To_Open, std::string write);
    void Overwrite_ZEN_File(std::string file_To_Open, std::string write);
    void Read_To_String(std::string file_To_Open, std::string &s);
    void Read_To_Vector(std::string open_what, std::vector <std::string> &vec);
};

class ZEN_Base : public ZEN_File{
public:
    void Write(ZEN z);
    void Read_To_ZEN_Container(ZEN_Container &z, ZEN object);
};