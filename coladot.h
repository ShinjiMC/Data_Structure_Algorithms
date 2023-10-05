#pragma once
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

template<class T>
class CNodo {
public:
	T m_dato;
	CNodo<T>* m_psig;
public:
	CNodo(T d) {
		m_dato = d;
		m_psig = nullptr;
	}
};

template<class T>
class ColaL {
private:
	CNodo<T>* m_pfirst;
	CNodo<T>* m_plast;
	int size;
public:
	ColaL() {
		m_pfirst = nullptr;
		m_plast = nullptr;
		size = 0;
	}
	bool IsEmpty() {
		return m_pfirst == nullptr;
	}
	void Push(T d) {
		if (!m_pfirst) {
			m_pfirst = m_plast = new CNodo<T>(d);
			size++;
			return;
		}
		CNodo<T>* tmp = new CNodo<T>(d);
		tmp->m_psig = m_plast;
		m_plast = tmp;
		size++;
	}
	CNodo<T>* Pop() {
		if (!m_pfirst) {
			cout << "Error, la lista esta vacía\n";
			return nullptr;
		}
		CNodo<T>* tmp = m_plast;
		while (tmp->m_psig->m_psig) {
			tmp = tmp->m_psig;
		}
		m_pfirst = tmp;
		tmp = m_pfirst->m_psig;
		m_pfirst->m_psig = nullptr;
		size--;
		return tmp;
	}
	void Print() {
		CNodo<T>* tmp = m_plast;
		while (tmp) {
			if (tmp->m_psig) {
				cout << tmp->m_dato << "->";
			}
			else {
				cout << tmp->m_dato << "->NULL";
			}
			tmp = tmp->m_psig;
		}
	}
	void Graphviz() {
		CNodo<T>* tmp = m_plast;
		int stmp = size - 1;
		int it = 0;

		ofstream dotx("cola.dot");
		dotx << "digraph A{\n";
		while (tmp) {
			if (tmp->m_psig) {
				dotx << it << "[label =\"" << tmp->m_dato << "\"];\n";
				dotx << it + 1 << "[label =\"" << tmp->m_psig->m_dato << "\"];\n";
				dotx << it << "->" << it + 1 << ";\n";
				dotx << it << "[xlabel=" << stmp << "];\n";
				stmp--;
			}
			else {
				dotx << it << "[label =\"" << tmp->m_dato << "\"];\n";
				dotx << it << "->NULL;\n";
				dotx << it << "[xlabel=" << stmp << "];\n";
			}
			tmp = tmp->m_psig;
			it++;
		}
		dotx << "}";
		dotx.close();
		system("dot -Tpng cola.dot -o cola.png -Nshape=rect");
		//system("prueba.png");
	}
	T* First() {
		CNodo<T>* tmp = m_plast;
		while (tmp) {
			tmp = tmp->m_psig;
		}
	}
	void Graphviz(T d) {
		CNodo<T>* tmp = m_plast;
		int stmp = size - 1;
		int it = 0;
		if (tmp != nullptr) {
			ofstream dotx("cola.dot");
			dotx << "digraph A{\n";
			while (tmp) {
				if (tmp->m_psig) {
					dotx << it << "[label =\"" << tmp->m_dato << "\"];\n";
					dotx << it + 1 << "[label =\"" << tmp->m_psig->m_dato << "\"];\n";
					dotx << it << "->" << it + 1 << ";\n";
					dotx << it << "[xlabel=" << stmp << "];\n";
					stmp--;
				}
				else {
					dotx << it << "[label =\"" << tmp->m_dato << "\"];\n";
					dotx << it << "->NULL;\n";
					dotx << it << "[xlabel=" << stmp << "];\n";
				}
				if (tmp->m_dato == d) {
					dotx << it << "[label =\"" << tmp->m_dato << "\"][color=blue];\n";
				}
				tmp = tmp->m_psig;
				it++;
			}
			dotx << "}";
			dotx.close();
			system("dot -Tpng cola.dot -o cola.png -Nshape=rect");
			//system("cola.png");
		}
	}
};


/*int main() {
	ColaL<int> A;
	A.Push(1);
	A.Push(2);
	A.Push(4);
	A.Push(4);
	A.Graphviz(4);

	return 0;
}*/

