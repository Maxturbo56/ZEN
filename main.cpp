#include "Zen.cpp"

class Osoba : public ZEN{
};

int main()
{
    ZEN_Base zen_base;
    ZEN_Container z;

    Osoba o;
    o.set_ZEN_Name("Osoba");
    o.add_attribute_of_ZEN("Ime : Kemo");
    o.add_attribute_of_ZEN("Godine : 22");
    o.add_attribute_of_ZEN("Boja Ociju : Zelena");
    zen_base.Write(o);
    zen_base.Read_To_ZEN_Container(z, o);
    z.Read_ZEN_Container();
    return 0;
}