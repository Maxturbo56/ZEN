#include "Zen.cpp"

class Osoba : public ZEN{
};

class Konj : public ZEN{
};

class Stolica : public ZEN{ 
};

int main()
{
    Osoba osoba;
    Konj konj;
    Stolica stolica;

    osoba.set_ZEN_Name("Kemo");
    konj.set_ZEN_Name("Konjo");
    stolica.set_ZEN_Name("Medo");

    ZEN_Container zec;

    zec.Add_To_ZEN_Container(osoba);
    zec.Add_To_ZEN_Container(konj);
    zec.Add_To_ZEN_Container(stolica);

    zec.Read_ZEN_Container();

    zec.Remove_From_ZEN_Container_With_Name("Medo");
    zec.Read_ZEN_Container();

    ZEN_File file;

    file.Overwrite_ZEN_File("main.txt", "ovo je recenica");

    return 0;
}