#include <iostream>
#include <cmath>
#include "ArvBinBusca.h"

using namespace std;

ArvBinBusca::ArvBinBusca ()
{
    raiz = NULL;
}

ArvBinBusca::~ArvBinBusca ()
{
    // OMITIDO
}

NoArv* ArvBinBusca::libera(NoArv *p)
{
    if (p != NULL)
    {
        p->setEsq (libera (p->getEsq ()));
        p->setDir (libera (p->getDir ()));
        delete p;
        p = NULL;
    }
    return p;
}

void ArvBinBusca::insere (int val)
{
    raiz = auxInsere (raiz, val);
}

NoArv* ArvBinBusca::auxInsere (NoArv *p, int val)
{
    if(p == NULL)
    {
        p = new NoArv ();
        p->setInfo (val);
        p->setEsq (NULL);
        p->setDir (NULL);
    }
    else if (val < p->getInfo ())
        p->setEsq (auxInsere (p->getEsq (), val));
    else
        p->setDir (auxInsere (p->getDir (), val));
    return p;
}

void ArvBinBusca::imprime()
{
    cout << "ABB em ordem: ";
    imprimeEmOrdem (raiz);
    cout << endl;
}

void ArvBinBusca::imprimeEmOrdem (NoArv *p)
{
    if (p != NULL)
    {
        imprimeEmOrdem (p->getEsq ());
        cout << p->getInfo () << " ";
        imprimeEmOrdem (p->getDir ());
    }
}

void ArvBinBusca::removeMenor (int val)
{
    raiz = auxRemoveMenor (raiz, val);
}

// ----------------------------------------------------------------------------
//Q1
int* ArvBinBusca::criaVetFolhas(int k, int *n)
{
    // Implemente aqui a sua solução para a questão 1.
    // Se necessário, remova o código abaixo.
    return NULL;

}
//-Q1
// ----------------------------------------------------------------------------

// ------------------------------------------------------------------------
//Q2
int ArvBinBusca::classificaFilhos(NoArv *pai)
{
    // Implemente aqui a sua solução para a questão 2 - letra A
    // Se necessário, remova o código abaixo.
    return 0;
}

int ArvBinBusca::contaNos1Filho(int val)
{
    // Implemente aqui a sua solução para a questão 2 - letra B
    // Se necessário, remova o código abaixo.
    return 0;
}
//-Q2
// ------------------------------------------------------------------------

// ----------------------------------------------------------------------------
//Q3
NoArv* ArvBinBusca::auxRemoveMenor (NoArv *p, int val)
{
    // Implemente aqui a sua solução para a questão 3.
    // Se necessário, remova o código abaixo.
    return NULL;

}
//-Q3
// ----------------------------------------------------------------------------
