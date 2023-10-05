#pragma once
#include <iostream>
#include<fstream>
using namespace std;
template <class T>
class RBNodo {
    typedef RBNodo<T>* pRB;
public:
    T m_Dato;
    pRB m_pSon[2] = { 0,0 };
    pRB p = 0;
    bool color{ 1 }; //1 rojo,0 negro

public:
    RBNodo(T d) :m_Dato(d) {}
    void print() {}
};

template <class T>
class RBThree {
    typedef RBNodo<T>* pRB;
private:
    pRB m_pRoot = 0;
    void printf(pRB temp) {
        if (!temp)
            return;
        cout << "- Color: ";
        if (temp->color)
            cout << "Rojo ";
        else cout << "Negro ";
        cout << " - Dato: " << temp->m_Dato << endl;
        printf(temp->m_pSon[0]);
        printf(temp->m_pSon[1]);
    }
public:
    RBThree() {};
    void print() {
        printf(m_pRoot);
    }
    pRB abuelo(pRB d) {
        if (d && d->p) return d->p->p;
        return 0;
    }
    pRB tio(pRB d) {
        pRB a = abuelo(d);
        if (!a) return 0;
        if (a->m_pSon[0] == d->p) return a->m_pSon[1];
        else
            return a->m_pSon[0];
    }
    void rotate(pRB r, bool dir) {
        pRB aux;
        if (dir) {
            aux = r->m_pSon[0];
            r->m_pSon[0] = aux->m_pSon[1];
            if (r->m_pSon[0]) r->m_pSon[0]->p = r;
            aux->m_pSon[1] = r;
        }
        else {
            aux = r->m_pSon[1];
            r->m_pSon[1] = aux->m_pSon[0];
            if (r->m_pSon[1]) r->m_pSon[1]->p = r;
            aux->m_pSon[0] = r;
        }
        if (r->p) {
            if (r->p->m_pSon[0] == r) r->p->m_pSon[0] = aux;
            else r->p->m_pSon[1] = aux;
        }
        else {
            m_pRoot = aux;
        }
        aux->p = r->p;
        r->p = aux;
    }
    void caso1(pRB r) {
        if (!r->p) {
            r->color = 0;
        }
        else
            caso2(r);
    }
    void caso2(pRB r) {
        if (r->p->color == 1)
            caso3(r);
        else
            return;
    }
    void caso3(pRB r) {
        pRB a = abuelo(r);
        pRB t = tio(r);
        if (t && (t->color == 1)) {
            r->p->color = 0;
            t->color = 0;
            a->color = 1;
            caso1(a);
        }
        else
            caso4(r, a);
    }
    void caso4(pRB r, pRB a) {
        if ((r == r->p->m_pSon[1]) && (r->p == a->m_pSon[0])) {
            rotate(r->p, 0);
            r = r->m_pSon[0];
        }
        else if ((r == r->p->m_pSon[0]) && (r->p == a->m_pSon[1])) {
            rotate(r->p, 1);
            r = r->m_pSon[1];
        }
        caso5(r, a);
    }
    void caso5(pRB r, pRB a) {
        r->p->color = 0;
        a->color = 1;
        if ((r == r->p->m_pSon[0]) && (r->p == a->m_pSon[0]))
            rotate(a, 1);
        else
            rotate(a, 0);
    }
    void Add(T d) {
        if (!m_pRoot) {
            m_pRoot = new RBNodo<T>(d);
            m_pRoot->color = 0;
            return;
        }
        pRB p = m_pRoot;
        pRB q = p;
        while (p) {
            q = p;
            if (p->m_Dato == d)
                return;
            p = p->m_pSon[p->m_Dato < d];
        }
        pRB& r = q->m_pSon[q->m_Dato < d];
        r = new RBNodo<T>(d);
        r->p = q;
        caso1(r);
    }
    bool FindT(pRB temp, T d) {
        if (!temp)
            return false;
        if (temp->m_Dato == d)
            return true;
        FindT(temp->m_pSon[temp->m_Dato < d], d);
    }
    bool Find(T d) {
        return FindT(m_pRoot, d);
    }
    /*pRB busq(T d) {
        if (Find(d)) {
            pRB p = m_pRoot;
            pRB q = p;
            while (p) {
                q = p;
                if (p->m_Dato == d)
                    return q;
                p = p->m_pSon[p->m_Dato < d];
            }
        }
        else { return 0; }
    }
    pRB min(pRB& r) {
        if (!m_pRoot)return 0;
        pRB d = busq(r->m_Dato);
        while (d->m_pSon[0]) d = d->m_pSon[0];
        return d;
    }
    void replace(pRB r, pRB a) {
        if (r->p == 0) m_pRoot = a;
        else if (r == r->p->m_pSon[0]) r->p->m_pSon[0] = a;
        else {
            r->p->m_pSon[1] = a;
        }
        a->p = r->p;
    }
    bool deleteVal(T d) {
        pRB del = busq(d);
        bool oColor = del->color;
        pRB y = del;
        pRB x;
        if (del->m_pSon[0] == 0) {
            x = del->m_pSon[1];
            replace(del, del->m_pSon[1]);
        }
        else if(del->m_pSon[1] == 0) {
            x = del->m_pSon[0];
            replace(del, del->m_pSon[0]);
        }
        else {
            y = min(del->m_pSon[1]);
            oColor = y->color;
            x = y->m_pSon[1];
            if (y->p->m_Dato == del->m_Dato)x->p = y;
            else {
                replace(y, y->m_pSon[1]);
                y->m_pSon[1] = del->m_pSon[1];
                y->m_pSon[1]->p = y;
            }
            y->m_pSon[0] = del->m_pSon[0];
            y->m_pSon[0]->p = y;
            y->color = del->color;
        }
        if (oColor == 0) {
            pRB t;
            while (x != m_pRoot && x->color == 0) {
                if (x->p->m_pSon[0]) {
                    t = x->p->m_pSon[1];
                    if (t->color == 1) {
                        t->color = 0;
                        x->p->color = 1;
                        rotate(x->p, 0);
                        t = x->p->m_pSon[1];
                    }
                    if (t->m_pSon[0]->color == 0 && t->m_pSon[1]->color == 0) {
                        t->color = 1;
                        x = x->p;
                    }
                    else if (t->m_pSon[1]->color == 0) {
                        t->m_pSon[0]->color = 0;
                        t->color = 1;
                        rotate(t,1);
                        t = x->p->m_pSon[1];
                    }
                    t->color = x->p->color;
                    x->p->color = 0;
                    t->m_pSon[1]->color = 0;
                    rotate(x->p, 0);
                    x = m_pRoot;
                }
                else {
                    t = x->p->m_pSon[0];
                    if (t->color == 1) {
                        t->color = 0;
                        x->p->color = 1;
                        rotate(x->p, 1);
                        t = x->p->m_pSon[0];
                    }
                    if (t->m_pSon[1]->color == 0 && t->m_pSon[0]->color == 0) {
                        t->color = 1;
                        x = x->p;
                    }
                    else if (t->m_pSon[0]->color == 0) {
                        t->m_pSon[1]->color = 0;
                        t->color = 1;
                        rotate(t, 0);
                        t = x->p->m_pSon[0];
                    }
                    t->color = x->p->color;
                    x->p->color = 0;
                    t->m_pSon[0]->color = 0;
                    rotate(x->p, 0);
                    x = m_pRoot;
                }
            }
            x->color = 0;
        }
        return false;
    }*/
    bool son0(T d) {
        pRB pTmp = m_pRoot;
        if (!pTmp) {
            return false;
        }
        while (pTmp) {
            if (pTmp->m_Dato == d) {
                if (pTmp->m_pSon[0])
                    return true;
            }
            pTmp = pTmp->m_pSon[pTmp->m_Dato < d];
        }
        return false;
    }
    bool son1(T d) {
        pRB pTmp = m_pRoot;
        if (!pTmp) {
            return false;
        }
        while (pTmp) {
            if (pTmp->m_Dato == d) {
                if (pTmp->m_pSon[1])
                    return true;
            }
            pTmp = pTmp->m_pSon[pTmp->m_Dato < d];
        }
        return false;
    }
    void Iprints_2(pRB p, ostream& os, int num) {
        if (!p) return;
        if (num == NULL) {
            if (p->color == 1) os << p->m_Dato << "[fillcolor=red, label =\"" << p->m_Dato << "\",style=filled];\n";
            else os << p->m_Dato << "[fillcolor=hotpink1  style=filled colorscheme=SVG fontcolor=white, label =\"" << p->m_Dato << "\"];\n";
            Iprints_2(p->m_pSon[0], os, num);
            Iprints_2(p->m_pSon[1], os, num);
        }
        else {
            if (p->m_Dato == num) {
                if (p->color == 1) os << p->m_Dato << "[fillcolor=red, label =\"" << p->m_Dato << "\",style=filled][color=blue];\n";
                else os << p->m_Dato << "[fillcolor=hotpink1  style=filled colorscheme=SVG fontcolor=white, label =\"" << p->m_Dato << "\"][color=blue];\n";
            }
            else {
                if (p->color == 1) os << p->m_Dato << "[fillcolor=red, label =\"" << p->m_Dato << "\",style=filled];\n";
                else os << p->m_Dato << "[fillcolor=hotpink1  style=filled colorscheme=SVG fontcolor=white, label =\"" << p->m_Dato << "\"];\n";
            }
            Iprints_2(p->m_pSon[0], os, num);
            Iprints_2(p->m_pSon[1], os, num);
        }
    }
    void Tprints_2(ostream& os, pRB r) {
        if (!r) return;
        if (son0(r->m_Dato))
            os << r->m_Dato << "->" << r->m_pSon[0]->m_Dato << endl;
        //else { os << r->ID << "->" << "NULL" << endl; }
        if (son1(r->m_Dato))
            os << r->m_Dato << "->" << r->m_pSon[1]->m_Dato << endl;
        //else { os << r->ID << "->" << "NULL" << endl; }
        Tprints_2(os, r->m_pSon[0]);
        Tprints_2(os, r->m_pSon[1]);
    }
    void Iprints(ostream& os, int num) {
        pRB p = m_pRoot;
        Iprints_2(p, os, num);
    }
    void Tprints(ostream& os) {
        pRB p = m_pRoot;
        Tprints_2(os, p);
    }
};
template<class T>
void RBgrafo(RBThree<T>A) {
    ofstream File("redblack.dot");
    File << "digraph A{\n";
    A.Iprints(File, NULL);
    A.Tprints(File);
    File << "\n}";
    File.close();
    system("dot -Tpng redblack.dot -o redblack.png -Nshape=rect");
    //system("redblack.png");
}

template<class T>
void RBgrafofind(RBThree<T>A, T num) {
    ofstream File("redblack.dot");
    File << "digraph A{\n";
    A.Iprints(File, num);
    A.Tprints(File);
    File << "\n}";
    File.close();
    system("dot -Tpng redblack.dot -o redblack.png -Nshape=rect");
    //system("redblack.png");
}