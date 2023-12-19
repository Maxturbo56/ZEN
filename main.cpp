#include "Zen.cpp"

class Osoba : public ZEN{
};

class Stol : public ZEN{
};

int main()
{
    ZEN_Base zen_base;
    ZEN_Container z;

    Osoba o;
    o.set_ZEN_Name("Osoba");
    o.set_ZEN_Value(1);
    o.add_attribute_of_ZEN("Ime : Kemo");
    o.add_attribute_of_ZEN("Godine : 22");
    o.add_attribute_of_ZEN("Boja Ociju : Zelena");
    zen_base.Write(o);
    zen_base.Read_To_ZEN_Container(z, o);
    Stol s;
    s.set_ZEN_Value(2);
    s.set_ZEN_Name("Stol");
    s.add_attribute_of_ZEN("Velicina : 22 x 100");
    s.add_attribute_of_ZEN("Boja : Bijel");
    s.add_attribute_of_ZEN("Drvo");
    zen_base.Write(s);
    zen_base.Read_To_ZEN_Container(z, s);
    z.Read_ZEN_Container();
    return 0;
}