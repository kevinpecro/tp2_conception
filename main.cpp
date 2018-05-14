
matrice::matrice(int pnbl,int pnbc):vecteur2(pnbl*pnbc)
{
    nbl=pnbl; nbc=pnbc;
}

int main()
{

    int tmp[]={1,2,3,4,5,6};

    matrice m1(2,3); m1.affiche();
    matrice m2(2,3,tmp);m2.affiche();
    matrice m3(2,2);m3.affiche();


}

#include <iostream>

using namespace std;

class matrice
{
private:

public:

}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
