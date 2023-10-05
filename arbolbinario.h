#pragma once
#include<iostream>
#include<queue>
#include<stack>
#include<fstream>

using namespace std;

template<class T>
class ABNodo
{
    typedef ABNodo<T>* pABNodo;
public:
    T      m_Dato;
    pABNodo  m_pSon[2];
    int ID;
public:
    ABNodo(T d,int id)
    {
        ID = id;
        m_Dato = d;
        m_pSon[0] = m_pSon[1] = 0;
    }
    void Matate()
    {
        if (m_pSon[0]!=0) m_pSon[0]->Matate();
        if (m_pSon[1]!=0) m_pSon[1]->Matate();
        delete this;

    }
};

template<class T>
class Tree
{
    typedef ABNodo<T>* pABNodo;
private:
    pABNodo m_pRoot;
    pABNodo m_Current;
public:
    Tree() { m_Current = m_pRoot = nullptr; };
    ~Tree() { /*if (m_pRoot) delete m_pRoot; */ }
private:
    bool find(pABNodo  p, T d)
    {
        if (!p) return false;
        if (p->m_Dato == d) return true;
        if (p->m_Dato > d) {
            find(p->m_pSon[0], d);
        }
        else {
            find(p->m_pSon[1], d);
        }
        

    }
    bool insert(pABNodo& p, T d,int id)
    {
        if (!p) { p = new ABNodo<T>(d,id); return true; }
        if (p->m_Dato == d) return false;

        return insert(p->m_pSon[p->m_Dato < d], d,id);
    }
    pABNodo father(int id,T d) {
        pABNodo pTmp = m_pRoot;
        pABNodo padre = NULL;
        if (!pTmp) { return 0; }
        while (pTmp) {
            if (pTmp->m_Dato == d && pTmp->ID == id) {
                return padre;
            }
            padre = pTmp;
            pTmp = pTmp->m_pSon[pTmp->m_Dato < d];
        }
        return 0;
    }
    bool son0(T d,int id) {
        pABNodo pTmp = m_pRoot;
        if (!pTmp) {
            return false;
        }
        while (pTmp) {
            if (pTmp->m_Dato == d && pTmp->ID == id) {
                if (pTmp->m_pSon[0])
                    return true;
            }
            pTmp = pTmp->m_pSon[pTmp->m_Dato < d];
        }
        return false;
    }
    bool son1(T d, int id) {
        pABNodo pTmp = m_pRoot;
        if (!pTmp) {
            return false;
        }
        while (pTmp) {
            if (pTmp->m_Dato == d && pTmp->ID == id) {
                if (pTmp->m_pSon[1])
                    return true;
            }
            pTmp = pTmp->m_pSon[pTmp->m_Dato < d];
        }
        return false;
    }
    void print(pABNodo r, ostream& os)
    {
        if (!r) return;
        if (son0(r->m_Dato, r->ID))
            os << r->m_Dato << "->" << r->m_pSon[0]->m_Dato << endl;
        //else { os << r->m_Dato << "->" << "NULL" << endl; }
        if (son1(r->m_Dato, r->ID))
            os << r->m_Dato << "->" << r->m_pSon[1]->m_Dato << endl;
        //else { os << r->m_Dato << "->" << "NULL" << endl; }
        print(r->m_pSon[0], os);
        print(r->m_pSon[1], os);
    }
    void Iprints_2(pABNodo p, ostream& os, int num) {
        if (!p) return;
        if (num == NULL) {
            os << p->ID << "[label =\"" << p->m_Dato << "\"];\n";
            Iprints_2(p->m_pSon[0], os, num);
            Iprints_2(p->m_pSon[1], os, num);
        }
        else {
            if (p->m_Dato == num) {
                os << p->ID << "[label =\"" << p->m_Dato << "\"][color=blue];\n";
            }
            else {
                os << p->ID << "[label =\"" << p->m_Dato << "\"];\n";
            }
            Iprints_2(p->m_pSon[0], os, num);
            Iprints_2(p->m_pSon[1], os, num);
        }
    }
    void Tprints_2(ostream& os, pABNodo r) {
        if (!r) return;
        if (son0(r->m_Dato, r->ID))
            os << r->ID << "->" << r->m_pSon[0]->ID << endl;
        //else { os << r->ID << "->" << "NULL" << endl; }
        if (son1(r->m_Dato, r->ID))
            os << r->ID << "->" << r->m_pSon[1]->ID << endl;
        //else { os << r->ID << "->" << "NULL" << endl; }
        Tprints_2(os, r->m_pSon[0]);
        Tprints_2(os, r->m_pSon[1]);
    }
    


public:
    bool Find(T d) { return find(m_pRoot, d); }
    bool Insert(T d,int id) { return insert(m_pRoot, d,id); }
    void pprint(ostream& os) { print(m_pRoot, os); }
    void Iprints(ostream& os, int num) {
        pABNodo p = m_pRoot;
        Iprints_2(p, os, num);
    }
    void Tprints(ostream& os) {
        pABNodo p = m_pRoot;
        Tprints_2(os, p);
    }
    friend ostream& operator<<(ostream& os, Tree<T>& A)
    {
        A.print(os);
        return os;
    }
    Tree<T>& add(T d,int id)
    {
        Insert(d,id);
        return *this;
    }
    void Delete_one_Son(T d) {
        if (!Find(d)) { return; }
        pABNodo pTmp = m_pRoot;
        pABNodo pTmp2 = NULL, pTmp3 = NULL;
        if (m_pRoot->m_Dato == d) {
            delete m_pRoot;
            return;
        }
        while (!(pTmp->m_pSon[pTmp->m_Dato < d] == 0)) {
            if (pTmp->m_Dato == d) {
                pTmp2->m_pSon[pTmp2->m_Dato < d] = pTmp3;
                delete pTmp;
                return;
            }
            pTmp2 = pTmp;
            pTmp = pTmp->m_pSon[pTmp->m_Dato < d];
        }
        pTmp2->m_pSon[pTmp2->m_Dato < d] = NULL;
        delete pTmp;
        return;
    }
    void Delete_Hoja(T d) {
        pABNodo Ptr_ABNodoBusq = m_pRoot;
        if (!m_pRoot) {
            return;
        }
        while (Ptr_ABNodoBusq) {
            if (Ptr_ABNodoBusq->m_pSon[0] == 0 && Ptr_ABNodoBusq->m_pSon[1] == 0) {
                cout << "Hoja" << d << " encontrada para eliminar" << endl;
                delete Ptr_ABNodoBusq;
                return;
            }
            if (Ptr_ABNodoBusq->m_Dato > d) {
                Ptr_ABNodoBusq = Ptr_ABNodoBusq->m_pSon[0];
            }
            if (Ptr_ABNodoBusq->m_Dato < d) {
                Ptr_ABNodoBusq = Ptr_ABNodoBusq->m_pSon[1];
            }
        }
        cout << "Hoja" << d << " no encontrada" << endl;
        return;
    }
    

    pABNodo sibling(T d)
    {
        pABNodo pTmp = m_pRoot;
        pABNodo hermano = NULL;
        if (!pTmp) { return 0; }
        while (pTmp) {
            if (pTmp->m_Dato == d) {
                return hermano;
            }
            hermano = pTmp->m_pSon[pTmp->m_Dato > d];
            pTmp = pTmp->m_pSon[pTmp->m_Dato < d];
        }
        return 0;
    }

    pABNodo Uncle(T d)
    {
        pABNodo pTmp = m_pRoot;
        if (!pTmp) { return 0; }
        pABNodo padre = father(d);
        pABNodo tio = sibling(padre->m_Dato);
        return tio;
    }

    pABNodo grandParent(T d)
    {
        pABNodo pTmp = m_pRoot;
        if (!pTmp) { return 0; }
        pABNodo padre = father(d);
        pABNodo abue = father(padre->m_Dato);
        return abue;
    }





    pABNodo Begin() {
        m_Current = m_pRoot;
        return m_Current;
    }
    pABNodo End() { return 0; }


    pABNodo Next()
    {
        m_Current = m_Current->m_pSon[0];
        return m_Current;
    }


    T  GetData()
    {
        return m_Current->m_Dato;
    }

};