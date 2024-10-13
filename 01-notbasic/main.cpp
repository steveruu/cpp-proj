#include <iostream>

#define printr(fnarg)                    \
    {                                    \
        std::cout << fnarg << std::endl; \
    }

namespace syner
{
    std::string majitel;
};

int main()
{
    printr("Vitej v programu!");

    class trida
    {
    public:
        std::string nazev;
        std::string zaci[30];
        std::string *nazevptr = &nazev;
    };

    // vylozene instance objektu p3a
    trida p3a;
    p3a.zaci[1] = "zestak";
    // namespace - ::
    syner::majitel = p3a.zaci[6];

    printr(p3a.nazevptr);

    trida *p2a = new trida(); // null ptr
    p2a;                      // nevyhodi segfault pac je to useless

    printr(p2a)             // segfault
        printr(p2a->nazev); // taktez segfault

    return 0;
}