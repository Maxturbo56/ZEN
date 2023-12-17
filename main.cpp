#include "Zen.cpp"

class Osoba : public ZEN{
};

class Konj : public ZEN{
};

class Stolica : public ZEN{
};

int main()
{
    Osoba Kemo,Meso,Bemo,Femo;
    Konj Hamo,Vemo;
    Stolica Demo, Gemo, Hemo;
    Kemo.set_ZEN_Name("KLJ");
    Meso.set_ZEN_Name("KLJ");
    Demo.set_ZEN_Name("KLJ");
    Gemo.set_ZEN_Name("KLJ");
    Femo.set_ZEN_Name("KLJ");
    ZEN_Container zen_Container;
    zen_Container.Add_To_ZEN_Container(Hamo);
    zen_Container.Add_To_ZEN_Container(Kemo);
    zen_Container.Add_To_ZEN_Container(Hemo);
    zen_Container.Add_To_ZEN_Container(Meso);
    zen_Container.Add_To_ZEN_Container(Bemo);
    zen_Container.Add_To_ZEN_Container(Demo);
    zen_Container.Add_To_ZEN_Container(Gemo);
    zen_Container.Add_To_ZEN_Container(Femo);
    zen_Container.Add_To_ZEN_Container(Vemo);
    zen_Container.Read_ZEN_Container();
    zen_Container.Remove_From_ZEN_Container_With_Name("KLJ");
    zen_Container.Read_ZEN_Container();
    for(int i = 0; i < 100; i++)
    {
        std::cout<<"+\n";
    }
    return 0;
}