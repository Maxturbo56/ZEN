#include "Zen.h"

// -------------- //
//   ZEN OBJECT   //
// -------------  //

ZEN::ZEN(std::string name, int value)
{
    this->name_of_ZEN = name;
    this->value_of_ZEN = value;
}

ZEN::ZEN(){
    this->name_of_ZEN = "Without_ZEN";
    this->value_of_ZEN = 0;
}

void ZEN::set_ZEN_Name(std::string ZEN_Name)
{
    this->name_of_ZEN = ZEN_Name;
}

std::string ZEN::get_ZEN_Name(){
    return this->name_of_ZEN;
}

void ZEN::set_ZEN_Value(int ZEN_Value){
    this->value_of_ZEN = ZEN_Value;
}

int ZEN::get_ZEN_Value(){
    return this->value_of_ZEN;
}

// -------------- //
// ZEN CONTAINER  //
// -------------  //

void ZEN_Container::Add_To_ZEN_Container(ZEN zen){
    this->ZEN_Vec.push_back(zen);
    std::cout<<"Added element "<<zen.get_ZEN_Name()<<" with value "<<zen.get_ZEN_Value()<<" to ZEN CONTAINER"<<std::endl;
}

void ZEN_Container::Read_ZEN_Container(){
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

std::vector <ZEN> ZEN_Container::get_ZEN_Container(){
    std::cout<<"Fetching ZEN CONTAINER ..."<<std::endl;
    return this->ZEN_Vec;
    std::cout<<"DONE!"<<std::endl;
}

void ZEN_Container::Remove_From_ZEN_Container_With_Name(std::string s){
    if(ZEN_Vec.size() != 0)
    {
        for(int i = 0; i < ZEN_Vec.size(); i++)
        {
            check_name:
            if(ZEN_Vec.back().get_ZEN_Name() != s)
            {
                if(ZEN_Vec[i].get_ZEN_Name() == s)
                {
                    ZEN_Vec[i] = ZEN_Vec.back();
                    ZEN_Vec.pop_back();
                }
            }
            else
            {
                ZEN_Vec.pop_back();
                goto check_name;
            }
        }

        if(ZEN_Vec.back().get_ZEN_Name() == s)
        {
            ZEN_Vec.pop_back();
        }

        std::cout<<"Removed elements with name "<<s<<" !"<<std::endl;
    }
    else
    {
        std::cout<<"ZEN CONTAINER empty!"<<std::endl;       
    }
}

void ZEN_Container::Remove_From_ZEN_Container_With_Value(int n){
    if(ZEN_Vec.size() != 0)
    {    
        for(int i = 0; i < ZEN_Vec.size(); i++)
        {
            if(ZEN_Vec[i].get_ZEN_Value() == n)
            {
                    ZEN_Vec[i] = ZEN_Vec.back();
                    ZEN_Vec.pop_back();
                }
            check_value:
            if(ZEN_Vec.back().get_ZEN_Value() != n)
            {
            }
            else
            {
                ZEN_Vec.pop_back();
                goto check_value;
            }
        }

        if(ZEN_Vec.back().get_ZEN_Value() == n)
        {
            ZEN_Vec.pop_back();
        }
        
        std::cout<<"Removed elements with value "<<n<<" !"<<std::endl;
    }
    else
    {
        std::cout<<"ZEN CONTAINER empty!"<<std::endl;       
    }
}

void ZEN_Container::Empty_ZEN_Container(){
    this->ZEN_Vec.clear();
    std::cout<<"Wiped ZEN CONTAINER!"<<std::endl;
}