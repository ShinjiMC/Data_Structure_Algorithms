#pragma once
#include<iostream>
#include<fstream>
using namespace std;
template<class T>
class LDNodo {
public:
    T m_Dato;
    LDNodo<T>* m_pSig;
    LDNodo<T>* m_pAnt;
    LDNodo(T d) {
        m_Dato = d;
        m_pSig = m_pAnt = 0;
    }
};
template<class T>
class Lista {
private:
    LDNodo<T>* m_pHead;
    LDNodo<T>* m_pLast;
    LDNodo<T>* m_pCurrent;
public:
    Lista() { m_pHead = m_pLast = m_pCurrent = 0; }
    void push_front(T d) {
        if (!m_pHead) {
            m_pHead = m_pLast = new LDNodo<T>(d);
        }
        else {
            LDNodo<T>* nuevo = new LDNodo<T>(d);
            m_pHead->m_pAnt = nuevo;
            nuevo->m_pSig = m_pHead;
            m_pHead = nuevo;
        }
    }
    void push_back(T d) {
        if (!m_pHead) {
            m_pHead = m_pLast = new LDNodo<T>(d);
        }
        else {
            LDNodo<T>* nuevo = new LDNodo<T>(d);
            m_pLast->m_pSig = nuevo;
            nuevo->m_pAnt = m_pLast;
            m_pLast = nuevo;
        }
    }
    void push(int p, T d);
    void pop_front() {
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
    void pop_back() {
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

    bool find(T d) {
        LDNodo<T>* p = m_pHead;
        for (p = m_pHead; p; p = p->m_pSig)
            if (p->m_Dato == d) return true;
        return false;
    }
    bool find_r(T d, LDNodo<T>*& p) {
        for (p = m_pLast; p; p = p->m_pAnt)
            if (p->m_Dato == d) return true;
        return false;
    }
    void print(ostream& os) {
        int uwu = 0;
        for (LDNodo<T>* p = m_pHead; p; p = p->m_pSig) {
            if (p == m_pLast)
                os << "node" << uwu;
            else { os << "node" << uwu << "->"; }
            uwu++;
        }
        os << endl;
    }
    void print2(ostream& os) {
        int uwu = 0;
        for (LDNodo<T>* p = m_pHead; p; p = p->m_pSig) {
            if (p == m_pLast)break;
            else { uwu++; }
        }
        for (LDNodo<T>* p = m_pLast; p; p = p->m_pAnt) {
            if (uwu == 0) {
                os << "node" << uwu;
                break;
            }
            else {
                os << "node" << uwu << "->";
                uwu--;
            }
        }
        os << endl;
    }
    void pop(T d) {
        if (d == m_pLast->m_Dato) pop_back();
        else if (d == m_pHead->m_Dato) pop_front();
        else {
            for (LDNodo<T>* p = m_pHead; p; p = p->m_pSig) {
                if (p->m_Dato == d) {
                    LDNodo<T>* aux = p->m_pSig;
                    p = p->m_pAnt;
                    p->m_pSig = aux;
                }
            }
        }
    }

    void print3(ostream& os, int num) {
        int uwu = 0;
        if (num == NULL) {
            for (LDNodo<T>* p = m_pHead; p; p = p->m_pSig) {
                os << "node" << uwu << "[label =\"" << p->m_Dato << "\"];\n";
                uwu++;
            }
        }
        else {
            for (LDNodo<T>* p = m_pHead; p; p = p->m_pSig) {
                if (p->m_Dato == num) {
                    os << "node" << uwu << "[label =\"" << p->m_Dato << "\"][color=blue];\n";
                }
                else {
                    os << "node" << uwu << "[label =\"" << p->m_Dato << "\"];\n";
                }
                uwu++;
            }
        }
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