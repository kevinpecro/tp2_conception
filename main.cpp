#include <iostream>

using namespace std;

class vecteur2
{
    protected:
    	int n;
    	int *tab;

    public:
    	vecteur2(int);
    	vecteur2(int,int*);
    	~vecteur2();
    	void initialise(int,int*);
    	void affiche();
    	void homothetie(int);
    	int scalaire(vecteur2);

};

class matrice :public vecteur2
{
	protected :
	int nbl,nbc;

	public:
    	matrice();
    	matrice(int,int);
    	matrice(int,int,int*);
    	matrice(int);
    	~matrice();
    	matrice(const matrice&);
    	matrice& operator=(const matrice&);
    	void affiche 
}



matrice::matrice():vecteur2()
{
	nbl=0;
	nbc=0;
}

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
