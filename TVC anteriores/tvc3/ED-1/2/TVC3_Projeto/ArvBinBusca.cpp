#include "ArvBinBusca.h"
#include <cmath>

// ----------------------------------------------------------------------------
//Q1

void ArvBinBusca::nosImpares02Filhos(int *nImp, int *n02F)
{

}


//-Q1

// ----------------------------------------------------------------------------
//Q2
void auxinsNaoRec(int val, NoArv p) 
{

  while (p != NULL) {
    if (p->getInfo() == val) {
      cout << "Já existe esse numero na arvore";
    } else if (p->getInfo() > val) {
      p = p->getEsq();
    } else {
      p = p->getDir();
    }
  }

  if(p == NULL){
    NoArvesq = new NoArv();
    esq = NULL;
    NoArv *dir = new NoArv();
    dir = NULL;

    p->setInfo(val);
    p->setEsq(esq);
    p->setDir(dir);
  }
}

void ArvBinBusca::insNaoRec(int val) 
{ 
  auxinsNaoRec(val, raiz); 
}


//-Q2

// ----------------------------------------------------------------------------
//Q3

int* ArvBinBusca::vetIntervalo(int a, int b, int k)
{
    ///RETIRAR O C�DICO ABAIXO. USADO PARA RODAR CORRETAMENTO OS TESTES
    return NULL;
}

//-Q3

// ----------------------------------------------------------------------------
// Restante da classe ArvBinBusca
// ----------------------------------------------------------------------------

ArvBinBusca::ArvBinBusca()
{
    raiz = NULL;
}

ArvBinBusca::~ArvBinBusca()
{
    /// destrutor vazio (s� para avalia��o)
}

void ArvBinBusca::cria(int c, ArvBinBusca *sae, ArvBinBusca *sad)
{///S� para a avalia��o.
    NoArv *p = new NoArv();
    p->setInfo(c);
    p->setEsq(sae->raiz);
    p->setDir(sad->raiz);
    raiz = p;
}

void ArvBinBusca::addValores1()
{//adiciona valores em uma ABB
    ArvBinBusca *arvRaizNula = new ArvBinBusca(), a1, a2;

    a1.cria(-35, arvRaizNula, arvRaizNula);
    this->cria(-19, arvRaizNula, arvRaizNula);
    this->cria(-20, &a1, this);

    a1.cria(-5, arvRaizNula, arvRaizNula);
    a1.cria(10, &a1, arvRaizNula);
    this->cria(-15, this, &a1);

    a1.cria(45, arvRaizNula, arvRaizNula);
    a2.cria(60, arvRaizNula, arvRaizNula);
    a1.cria(50, &a1, &a2);

    a2.cria(80, arvRaizNula, arvRaizNula);
    a1.cria(75, &a1, &a2);

    this->cria(40, this, &a1);
}

void ArvBinBusca::addValores2()
{//adiciona valores em uma ABB
    ArvBinBusca *arvRaizNula = new ArvBinBusca(), a1, a2;

    this->cria(-35, arvRaizNula, arvRaizNula);
    this->cria(-20, this, arvRaizNula);

    a1.cria(-5, arvRaizNula, arvRaizNula);
    a1.cria(10, &a1, arvRaizNula);
    this->cria(-15, this, &a1);

    a1.cria(60, arvRaizNula, arvRaizNula);
    a1.cria(50, arvRaizNula, &a1);
    this->cria(40, this, &a1);
}

void ArvBinBusca::imprime()
{
    auxImprime(raiz);
    cout << endl;
}

void ArvBinBusca::auxImprime(NoArv *p)
{
    if(p != NULL)
    {
        auxImprime(p->getEsq());
        cout << p->getInfo() << " ";
        auxImprime(p->getDir());
    }
}
