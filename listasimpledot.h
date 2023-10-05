#pragma once
#include<iostream>
#include<fstream>
using namespace std;
template<class T>
class NodoS {

public:
	T dato;
	NodoS<T>* sig;
	NodoS(T _dato) {
		dato = _dato;
		sig = NULL;

	}
};
template<class T>
class ListaS {
private:
	NodoS<T>* head=0;
	int count = 0;

public:
	ListaS() {
		//head = NULL;
	}
	~ListaS() {

	}
	void Add(T _dato) {
		NodoS<T>* New = new NodoS<T>(_dato);
		if (!head) {
			head = New;
		}
		else {
			New->sig = head;
			head = New;
		}
	}
	void print() {

		count = 0;
		NodoS<T>* ptr = head;
		while (ptr) {
			if (ptr->sig == NULL) {
				os << "node" << count;
				ptr = ptr->sig;
			}
			else {
				os << "node" << count << "->";
				ptr = ptr->sig;

			}
			count++;
		}

	}

	void buscar(T _dato) {
		int Bcount = 1;
		int Acount = 0;
		NodoS<T>* Bptr = head;
		while (Bptr) {
			if (Bptr->dato == _dato) {
				Acount++;
				Bptr = Bptr->sig;
			}
			else {
				Bptr = Bptr->sig;
			}
		}
		if (Acount != 0) {
			Bptr = head;
			//cout<<"EL valor "<<_dato<<" se encontro en la(s) posicion(es): ";
			while (Bptr) {
				if (Bptr->dato == _dato) {
					cout << Bcount << " ";
					Bptr = Bptr->sig;
				}
				else {
					Bptr = Bptr->sig;
				}
				Bcount++;
			}
			cout << endl;
		}
		else {
			//cout<<" No se encontro el valor ingresado en la lista"<<endl;
		}

	}
	void push_back(T _dato) {
		NodoS<T>* push_ptr = head;
		NodoS<T>* back_ptr = new NodoS<T>(_dato);
		while (true) {
			if (push_ptr->sig == NULL) {
				push_ptr->sig = back_ptr;
				break;
			}
			else {
				push_ptr = push_ptr->sig;
			}
		}
	}
	void delete_from() {
		NodoS<T>* borrar = head;
		if (!head) {
			cout << "No hay ningun elemento en la lista." << endl;
		}
		else {
			head = head->sig;
			delete borrar;
		}
	}
	void delete_last() {
		NodoS<T>* borrar = head;
		NodoS<T>* last = NULL;
		if (!head) {
			cout << "No hay ningun elemento en la lista." << endl;
		}
		else {
			while (borrar->sig != NULL) {
				last = borrar;
				borrar = borrar->sig;
			}

			last->sig = NULL;
			delete borrar;
		}
	}
	void insert(int _posicion, T _dato) {
		NodoS<T>* dato = new NodoS<T>(_dato);
		NodoS<T>* insert = head;
		NodoS<T>* Iptr = NULL;
		int i = 0;
		while (i != (_posicion - 1)) {
			Iptr = insert;
			insert = insert->sig;
			i++;
		}

		Iptr->sig = dato;
		dato->sig = insert;
	}
	void print2() {
		NodoS<T>* ptrUlt = head;
		NodoS<T>* ptrPen = NULL;
		while (ptrUlt->sig != NULL) {
			ptrPen = ptrUlt;
			ptrUlt = ptrUlt->sig;

		}

		while (true) {
			cout << ptrUlt->dato << "<-";
			ptrUlt = ptrPen;
			ptrPen = head;
			while (ptrPen->sig != ptrUlt) {
				ptrPen = ptrPen->sig;

			}

			if (ptrPen == head) {
				cout << ptrUlt->dato << "<-";
				cout << ptrPen->dato << endl;
				break;
			}
		}
	}

	void print3(ostream& os, int num) {
		int uwu = 0;
		if (num == NULL) {
			for (NodoS<T>* p = head; p; p = p->sig) {
				os << "node" << uwu << "[label =\"" << p->dato << "\"];\n";
				uwu++;
			}
		}
		else {
			for (NodoS<T>* p = head; p; p = p->sig) {
				if (p->dato == num) {
					os << "node" << uwu << "[label =\"" << p->dato << "\"][color=blue];\n";
				}
				else {
					os << "node" << uwu << "[label =\"" << p->dato << "\"];\n";
				}
				uwu++;
			}
		}
	}
};

template<class T>
void grafo(ListaS<T>A) {
	ofstream File("listasimple.dot");
	File << "digraph A{\n";
	A.print3(File, NULL);
	A.print(File);
	File << "\n}";
	File.close();
	system("dot -Tpdf listasimple.dot -o listasimple.pdf -Nshape=rect");
	//ystem("listasimple.png");
};

template<class T>
void grafofind(ListaS<T>A, T num) {
	ofstream File("listasimple.dot");
	File << "digraph A{\n";
	A.print3(File, num);
	A.print(File);
	File << "\n}";
	File.close();
	system("dot -Tpdf listasimple.dot -o listasimple.png -Nshape=rect");
	//system("listasimple.png");
};
