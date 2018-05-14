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
	    	vecteur2(const vecteur2&);
	    	~vecteur2();
	    	void initialise(int,int*);
	    	void affiche();
	    	void homothetie(int);
	    	int scalaire(vecteur2);

	};

	class vecteur2
	{
	    private:
	    	int n;
	    	int *tab;

	    public:
	    	vecteur2(int);
	    	vecteur2(int,int*);
	    	vecteur2(const vecteur2&);
	    	~vecteur2();
	    	void initialise(int,int*);
	    	void affiche();
	    	void homothetie(int);
	    	int scalaire(vecteur2);

	};

	vecteur2::vecteur2(int x)
	{
	    n=x;
	    tab = new int[n];
	    for (int i = 0; i < n; ++i)
	    {
	        tab[i]=0;
	    }
	}

	vecteur2::vecteur2(int x,int* tmp)
	{
	    n=x;
	    tab = new int[n];
	    for (int i = 0; i < n; ++i)
	    {
	        tab[i]= tmp[i];
	    }
	}


	vecteur2::~vecteur2(){}

	vecteur2::vecteur2(const vecteur2& src) //source = vecteur paramatre de la methode scalaire
	{
	    n=src.n;
	    tab= new int[n];
	    for (int i = 0; i < n; ++i)
	    {
	        /* code */
	        tab[i]=src.tab[i];
	    }
	}

	void vecteur2::initialise (int nb,int *ptab)
	{
	    for (int i = 0; i < nb; ++i)
	    {
	        /* code */
	        tab[i]=ptab[i];
	    }
	}

	void vecteur2::affiche()
	{
	    for (int i = 0; i < n; ++i)
	    {
	        /* code */
	        cout << tab[i] << endl;
	    }
	    cout << "-----------------------------" << endl;
	}

	void vecteur2::homothetie(int x)
	{

	    for (int i = 0; i < n; i++)
	    {
	        tab[i]=tab[i]*2;
	    }
	}

	int vecteur2::scalaire(vecteur2 pv)
	{
	    int s=0;
	    for (int i = 0; i < n; ++i)
	    {
	        /* code */
	        s=s+tab[i]* pv.tab[i];

	    }
	    return s;
	}

class matrice : public vecteur2
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
    	void affiche();
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

matrice::matrice(int pnbl, int pnbc, int* ptab): vecteur2(pnbl*pnbc, ptab)
{
	nbl= pnbl; nbc:pnbc;
}



int main()
{
    int tmp[]={1,2,3,4,5,6};

    matrice m1(2,3); m1.affiche();

    matrice m2(2,3,tmp);m2.affiche();

    matrice m3(2,2);m3.affiche();

}
