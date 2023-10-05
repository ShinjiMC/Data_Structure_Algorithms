#include "pch.h"
#include<iostream>
#include<fstream>

using namespace std;
/*
template<class T>
class Nodo {
public:
    T m_Dato;
    Nodo<T>* m_pSig;
    Nodo<T>* m_pAnt;
    Nodo(T d) {
        m_Dato = d;
        m_pSig = m_pAnt = 0;
    }
};

template<class T>

class Lista {
private:
    Nodo<T>* m_pHead;
    Nodo<T>* m_pLast;
    Nodo<T>* m_pCurrent;
public:
    Lista() { m_pHead = m_pLast = m_pCurrent = 0; }
    void push_front(T d) {
        if (!m_pHead) {
            m_pHead = m_pLast = new Nodo<T>(d);
        }
        else {
            Nodo<T>* nuevo = new Nodo<T>(d);
            m_pHead->m_pAnt = nuevo;
            nuevo->m_pSig = m_pHead;
            m_pHead = nuevo;
        }
    }
    void push_back(T d) {
        if (!m_pHead) {
            m_pHead = m_pLast = new Nodo<T>(d);
        }
        else {
            Nodo<T>* nuevo = new Nodo<T>(d);
            m_pLast->m_pSig = nuevo;
            nuevo->m_pAnt = m_pLast;
            m_pLast = nuevo;
        }
    }
    void push(int p, T d);
    void pop_front(T d) {
        if (!m_pHead) return;
        if (!m_pHead->m_pSig) {
            delete m_pHead;
            m_pHead = m_pLast = 0;
            return;
        }
        m_pHead = m_pHead->m_pSig;
        delete m_pHead->m_pAnt;
        m_pHead->m_pAnt = 0;
    }
    void pop_back(T d) {
        if (!m_pLast) {
            return;
        }
        if (!m_pLast->m_pAnt) {
            delete m_pLast;
            m_pHead = m_pLast = 0;
            return;
        }
        m_pLast = m_pLast->m_pAnt;
        delete m_pLast->m_pSig;
        m_pLast->m_pSig = 0;
    }
    void pop(int p, T d);
    bool find(T d) {
        Nodo<T>* p = m_pHead;
        for (p = m_pHead; p; p = p->m_pSig)
            if (p->m_Dato == d) return true;
        return false;
    }
    bool find_r(T d, Nodo<T>*& p) {
        for (p = m_pLast; p; p = p->m_pAnt)
            if (p->m_Dato == d) return true;
        return false;
    }
    void print(ostream& os) {
        int uwu = 0;
        for (Nodo<T>* p = m_pHead; p; p = p->m_pSig) {
            if (p == m_pLast)
                os << "node" << uwu;
            else { os << "node" << uwu << "->"; }
            uwu++;
        }
        os << endl;
    }
    void print3(ostream& os, int num) {
        int uwu = 0;
        if (num == NULL) {
            for (Nodo<T>* p = m_pHead; p; p = p->m_pSig) {
                os << "node" << uwu << "[label =\"" << p->m_Dato << "\"];\n";
                uwu++;
            }
        }
        else {
            for (Nodo<T>* p = m_pHead; p; p = p->m_pSig) {
                if (p->m_Dato == num) {
                    os << "node" << uwu << "[label =\"" << p->m_Dato << "\"][color=blue];\n";
                }
                os << "node" << uwu << "[label =\"" << p->m_Dato << "\"];\n";
                uwu++;
            }
        }

    }
    void print2(ostream& os) {
        int uwu = 0;
        for (Nodo<T>* p = m_pHead; p; p = p->m_pSig) {
            if (p == m_pLast)break;
            else { uwu++; }
        }
        for (Nodo<T>* p = m_pLast; p; p = p->m_pAnt) {
            if (p == m_pHead)
                os << "node" << uwu;
            else { os << "node" << uwu << "->"; }
            uwu--;
        }
        os << endl;
    }
    void begin() { m_pCurrent = m_pHead; }
    void end() { m_pCurrent = m_pLast; }
    bool Terminate() {
        return m_pCurrent != 0;
    }
    void operator++() {
        if (m_pCurrent->m_pSig)
            m_pCurrent = m_pCurrent->m_pSig;
        else {
            m_pCurrent = 0;
        }
    }
    void operator--() {
        if (m_pCurrent->m_pAnt)
            m_pCurrent = m_pCurrent->m_pAnt;
        else {
            m_pCurrent = 0;
        }
    }
    T GetData() {
        return m_pCurrent->m_Dato;
    }
};
template<class T>
void grafo(Lista<T>A) {
    ofstream File("listadoble.dot");
    File << "digraph A{\n";
    A.print3(File, NULL);
    A.print(File);
    File << "\n";
    A.print2(File);
    File << "\n}";
    File.close();
    system("dot -Tpdf listadoble.dot -o listadoble.pdf -Nshape=rect");
    system("listadoble.pdf");
}
template<class T>
void grafofind(Lista<T>A, T num) {
    ofstream File("listadoble.dot");
    File << "digraph A{\n";
    A.print3(File, num);
    A.print(File);
    File << "\n";
    A.print2(File);
    File << "\n}";
    File.close();
    system("dot -Tpdf listadoble.dot -o listadoble.pdf -Nshape=rect");
    system("listadoble.pdf");
}*/
