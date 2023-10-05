#pragma once
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

template<class T>
class Nodo {
public:
	T m_dato;
	Nodo<T>* m_pant;
public:
	Nodo(T d) {
		m_dato = d;
		m_pant = 0;
	}
};

template<class T>
class PilaL {
private:
	Nodo<T>* m_ptope;
	int size;
public:
	PilaL() {
		m_ptope = nullptr;
		size = 0;
	}
	bool IsEmpty() {
		return m_ptope == nullptr;
	}
	void Push(T d) {
		Nodo<T>* pnuevo = new Nodo<T>(d);
		if (!m_ptope) {
			m_ptope = pnuevo;
			size++;
		}
		else {
			pnuevo->m_pant = m_ptope;
			m_ptope = pnuevo;
			size++;
		}
	}
	Nodo<T>* Pop() {
		if (!m_ptope) {
			cout << "Error, la lista esta vacía\n";
			return nullptr;
		}
		Nodo<T>* tmp = m_ptope;
		m_ptope = m_ptope->m_pant;
		size--;
		return tmp;
	}
	Nodo<T>* Find_d(T d) {
		if (!m_ptope) {
			cout << "Error, la lista esta vacía\n";
			return nullptr;
		}

		Nodo<T>* tmp = m_ptope;
		while (tmp) {
			if (tmp->m_dato == d) {
				return tmp;
			}
			tmp = tmp->m_pant;
		}
		cout << "Error, no se encontro el dato\n";
		return nullptr;
	}
	Nodo<T>* Find_p(int pos) {
		if (pos >= size || !m_ptope) {
			cout << "Error, la lista esta vacía o la posición no existe\n";
			return nullptr;
		}

		int stmp = size - 1;
		Nodo<T>* tmp = m_ptope;
		while (tmp) {
			if (stmp == pos) {
				return tmp;
			}
			tmp = tmp->m_pant;
			stmp--;
		}
		return nullptr;
	}
	void Print() {
		Nodo<T>* tmp = m_ptope;
		while (tmp) {
			if (tmp->m_pant) {
				cout << tmp->m_dato << "->";
			}
			else {
				cout << tmp->m_dato << "->NULL";
			}
			tmp = tmp->m_pant;
		}
	}
	void Graphviz() {
		Nodo<T>* tmp = m_ptope;
		int it = 0;

		ofstream dotx("pila.dot");
		dotx << "digraph A{\n";
		while (tmp) {
			if (tmp->m_pant) {
				dotx << it << "[label =\"" << tmp->m_dato << "\"];\n";
				dotx << it + 1 << "[label =\"" << tmp->m_pant->m_dato << "\"];\n";
				dotx << it << "->" << it + 1 << ";\n";
				dotx << it << "[xlabel=" << it << "];\n";
			}
			else {
				dotx << it << "[label =\"" << tmp->m_dato << "\"];\n";
				dotx << it << "->NULL;\n";
				dotx << it << "[xlabel=" << it << "];\n";
			}
			tmp = tmp->m_pant;
			it++;
		}
		dotx << "}";
		dotx.close();
		system("dot -Tpng pila.dot -o pila.png -Nshape=rect");
		//system("prueba.pdf");
	}

	void Graphviz(T d) {
		Nodo<T>* tmp = m_ptope;
		int it = 0;
		if (tmp != nullptr) {
			ofstream dotx("pila.dot");
			dotx << "digraph A{\n";
			while (tmp) {
				if (tmp->m_pant) {
					dotx << it << "[label =\"" << tmp->m_dato << "\"];\n";
					dotx << it + 1 << "[label =\"" << tmp->m_pant->m_dato << "\"];\n";
					dotx << it << "->" << it + 1 << ";\n";
					dotx << it << "[xlabel=" << it << "];\n";
				}
				else {
					dotx << it << "[label =\"" << tmp->m_dato << "\"];\n";
					dotx << it << "->NULL;\n";
					dotx << it << "[xlabel=" << it << "];\n";
				}
				if (tmp->m_dato == d) {
					dotx << it << "[label =\"" << tmp->m_dato << "\"][color=blue];\n";
				}
				tmp = tmp->m_pant;
				it++;
			}
			dotx << "}";
			dotx.close();
			system("dot -Tpng pila.dot -o pila.png -Nshape=rect");
			//return true;
		}
		//return false;
	}

	T* Top() {
		if (!IsEmpty()) {
			return &(m_ptope->m_dato);
		}
		return 0;
	}
};

/*int main() {
	PilaL<string> A;
	A.Push("Hernan");
	A.Push("Cristian");
	A.Push("Carlos");
	A.Push("Carlos");
	A.Graphviz();
	A.Print();
	cout << endl;

	Nodo<string>* X = A.Find_d("Lilia");
	if (X) {
		cout << X->m_dato << endl;
	}

	Nodo<string>* Y = A.Find_p(10);
	if (Y) {
		cout << Y->m_dato << endl;
	}

	return 0;
}*/

