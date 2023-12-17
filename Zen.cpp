#include "Zen.h"

// -------------- //
//   ZEN OBJECT   //
// -------------  //

ZEN::ZEN(std::string name, int value)
{
    this->name_of_ZEN = name;
    this->value_of_ZEN = value;
}

ZEN::ZEN()
{
    this->name_of_ZEN = "Without_ZEN";
    this->value_of_ZEN = 0;
}

void ZEN::set_ZEN_Name(std::string ZEN_Name)
{
    this->name_of_ZEN = ZEN_Name;
}

std::string ZEN::get_ZEN_Name()
{
    return this->name_of_ZEN;
}

void ZEN::set_ZEN_Value(int ZEN_Value)
{
    this->value_of_ZEN = ZEN_Value;
}

int ZEN::get_ZEN_Value()
{
    return this->value_of_ZEN;
}

// -------------- //
// ZEN CONTAINER  //
// -------------  //

void ZEN_Container::Add_To_ZEN_Container(ZEN zen)
{
    this->ZEN_Vec.push_back(zen);
    std::cout<<"Added element "<<zen.get_ZEN_Name()<<" with value "<<zen.get_ZEN_Value()<<" to ZEN CONTAINER"<<std::endl;
}

void ZEN_Container::Read_ZEN_Container()
{
    if(this->ZEN_Vec.size() != 0)
    {
        std::cout<<"-------------------------------------------------------"<<std::endl;
        std::cout<<"ZEN CONTAINER CONTENTS : "<<std::endl<<std::endl;
        for (int i = 0; i < this->ZEN_Vec.size(); i++)
        {
            std::cout<<i<<". "<<ZEN_Vec[i].get_ZEN_Name()<<" : "<<ZEN_Vec[i].get_ZEN_Value()<<std::endl;
        }
        std::cout<<"-------------------------------------------------------"<<std::endl;
    }
    else
    {
        std::cout<<"ZEN CONTAINER IS EMPTY!"<<std::endl;
    }
}

std::vector <ZEN> ZEN_Container::get_ZEN_Container()
{
    std::cout<<"Fetching ZEN CONTAINER ..."<<std::endl;
    return this->ZEN_Vec;
    std::cout<<"DONE!"<<std::endl;
}

void ZEN_Container::Remove_From_ZEN_Container_With_Name(std::string s)
{
    if(this->ZEN_Vec.size() > 0)
    {
        while(this->ZEN_Vec.back().get_ZEN_Name() == s)
        {
            this->ZEN_Vec.pop_back();
        }

        for(int i = 0; i < this->ZEN_Vec.size(); i++)
        {   
            if(this->ZEN_Vec[i].get_ZEN_Name() == s)
            {
                this->ZEN_Vec[i] = this->ZEN_Vec.back();
                this->ZEN_Vec.pop_back();
                i = 0;
            }
        }

        std::cout<<"Removed elements with name "<<s<<"!"<<std::endl;
    }
    else
    {
        std::cout<<"ZEN CONTAINER empty!"<<std::endl;       
    }
}

void ZEN_Container::Remove_From_ZEN_Container_With_Value(int n)
{
    if(this->ZEN_Vec.size() > 0)
    {
        while(this->ZEN_Vec.back().get_ZEN_Value() == n)
        {
            this->ZEN_Vec.pop_back();
        }

        for(int j = 0; j < this->ZEN_Vec.size(); j++)
        {   
            if(this->ZEN_Vec[j].get_ZEN_Value() == n)
            {
                this->ZEN_Vec[j] = this->ZEN_Vec.back();
                this->ZEN_Vec.pop_back();
                j = 0;
            }
        }

        std::cout<<"Removed elements with value of "<<n<<"!"<<std::endl;
    }
    else
    {
        std::cout<<"ZEN CONTAINER empty!"<<std::endl;       
    }
}

void ZEN_Container::Empty_ZEN_Container()
{
    this->ZEN_Vec.clear();
    std::cout<<"Wiped ZEN CONTAINER!"<<std::endl;
}

ZEN ZEN_Container::Find_ZEN_With_Name(std::string s)
{
    ZEN temp;
    for(int i = 0; i < this->ZEN_Vec.size(); i++)
    {
        if(this->ZEN_Vec[i].get_ZEN_Name() == s)
        {
            temp = this->ZEN_Vec[i];
            break;
        }
    }

    return temp;
}

ZEN ZEN_Container::Find_ZEN_With_Value(int n)
{
    ZEN temp;
    for(int i = 0; i < this->ZEN_Vec.size(); i++)
    {
        if(this->ZEN_Vec[i].get_ZEN_Value() == n)
        {
            temp = this->ZEN_Vec[i];
            break;
        }
    }

    return temp;
}

// ------------------------------ //
//           OPERATORS            //
// ------------------------------ //

int ZEN::operator ++(int)
{
    return this->value_of_ZEN++;
}

int ZEN::operator !()
{
    return this->value_of_ZEN = 0;
}

int ZEN::operator +(ZEN& z)
{
    return this->value_of_ZEN += z.get_ZEN_Value();
}

int ZEN::operator -(ZEN& z)
{
    return this->value_of_ZEN -= z.get_ZEN_Value();
}

std::ostream& operator <<(std::ostream& out, ZEN z)
{
    out<<"( "<<z.get_ZEN_Name()<<" . "<<z.get_ZEN_Value()<<" )\n";
    return out;
}

std::istream& operator >>(std::istream& in, ZEN& z)
{
    std::string name;
    int n;
    std::cout<<"Enter ZEN name : "<<std::endl;
    std::cin>>name;
    std::cout<<"Enter ZEN value : "<<std::endl;
    std::cin>>n;
    z.set_ZEN_Name(name);
    z.set_ZEN_Value(n);
    return in;
}

int ZEN_Container::get_ZEN_Container_Size()
{
    int temp;
    if(this->ZEN_Vec.size() > 0)
    {
        temp = ZEN_Vec.size();
    }
    else
    {
        std::cout<<"ZEN Container empty!"<<std::endl;
        return 0;
    }
    return temp;
}

ZEN ZEN_Container::get_ZEN_At_Index(int n)
{
    ZEN temp;

    if(n > this->ZEN_Vec.size() || n < 0)
    {
        std::cout<<"Cannot return ZEN at position "<<n<<"!"<<std::endl;
    }
    else
    {
        temp = this->ZEN_Vec[n];
    }

    return temp;
}

void ZEN_Container::Add_ZEN_Container_To_Container(ZEN_Container operand)
{
    ZEN temp;

    for(int i = 0; i < operand.get_ZEN_Container_Size(); i++)
    {
        temp = operand.get_ZEN_At_Index(i);
        this->Add_To_ZEN_Container(temp);
    }
}

void ZEN_File::Write_ZEN_File(std::string file_To_Open, std::string write)
{
    this->file_Input.open(file_To_Open, std::ios::app);
    file_Input<<write;
    this->file_Input.close();
}

void ZEN_File::Overwrite_ZEN_File(std::string file_To_Open, std::string write)
{
    this->file_Input.open(file_To_Open);
    file_Input<<write;
    this->file_Input.close();
}

void ZEN_File::Read_To_String(std::string file_To_Open, std::string &s)
{
    std::string line;
    this->file_Output.open(file_To_Open, std::ios::out);
    while(getline(file_Output, line))
    {
        s += line;
    }
    this->file_Output.close();
}

/*void ZEN_Base::Read_To_Vector(std::string file_To_Open, std::vector <std::string> &s)
{
    std::string line;
    this->file_Output.open(file_To_Open, std::ios::out);
    while(getline(file_Output, line))
    {
        s.push_back(line);
    }
    this->file_Output.close();
}*/
