#include <iostream>
#include "notifikaattori.h"

using namespace std;

int main()
{
    Notifikaattori n;
    Seuraaja*s1=new Seuraaja("Heimo");
    Seuraaja*s2=new Seuraaja("Raimo");
    Seuraaja*s3=new Seuraaja("Anni");

    n.tulosta();
    n.postita("Hei vaan");
    n.poistaa(s2);

    n.lisaa(s1);
    n.lisaa(s2);
    n.lisaa(s3);
    n.tulosta();
    n.postita("Hei vaan!");

    n.poistaa(s2);
    n.tulosta();
    n.poistaa(s1);
    n.poistaa(s3);
    n.tulosta();
    return 0;
}
