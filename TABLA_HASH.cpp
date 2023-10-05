#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

template<class T>
class Nodo{
public:
	Nodo(string cod = nullptr, T nomb = nullptr){
		this->md_cod = cod;
		this->md_nomb = nomb;
		this->m_sig = nullptr;
	}
	string md_cod;
	T md_nomb;
	Nodo<T>* m_sig;
};

template<class T>
class lista_Hash{
public:
	lista_Hash(){
		this->m_prim = nullptr;
		this->m_ult = nullptr;
		this->m_size = 0;
	}
	bool listaVac(){
		if(m_prim == nullptr){
			return true;
		}
		return false;
	}
	void insert(string cod, T nomb){
		Nodo<T>* eleint = new Nodo<T>(cod,nomb);
		if(listaVac()){
			m_prim = m_ult = eleint;
		}
		else{
			m_ult->m_sig = eleint;
			m_ult = eleint;
		}
		m_size++;
	}
	Nodo<T>* search(string cod){
		vector<Nodo<T>*> listx;
		if(!listaVac()){
			Nodo<T>* temp = m_prim;
			while(temp){
				if(temp->md_cod == cod){
					listx.push_back(temp);
				}
				temp = temp->m_sig;
			}
			if(listx.size() != 1 || listx.size() != 0){
				for(unsigned int i=0; i<listx.size(); i++){
					cout << "pos" << i << "->" << listx.at(i)->md_cod << "->" << listx.at(i)->md_nomb << "|";
				}
				int pos;
				cout << "\nIngrese la posición del nodo elegido: ";
				cin >> pos;
				return listx.at(pos);
			}
			else if(listx.size() == 1){
				return listx.at(0);
			}
			else{
				return nullptr;
			}
		}
		else{
			return nullptr;
		}
	}
	void delete_nod(string cod){
		vector<Nodo<T>*> listx;
		if(!listaVac()){
			Nodo<T>* temp = m_prim;
			while(temp){
				if(temp->md_cod == cod){
					listx.push_back(temp);
				}
				temp = temp->m_sig;
			}
			int pos;
			if(listx.size() != 1 || listx.size() != 0){
				for(unsigned int i=0; i<listx.size(); i++){
					cout << "pos" << i << "->" << listx.at(i)->md_cod << "->" << listx.at(i)->md_nomb << "|";
				}
				cout << "\nIngrese la posicion del nodo elegido: ";
				cin >> pos;
			}
			else if (listx.size() == 1){
				pos = 0;
			}
			else{
				return;
			}
			int tempos = -1;
			Nodo<T>* rtemp = m_prim;
			Nodo<T>* temp_ant = rtemp;
			while(rtemp){
				if(cod == rtemp->md_cod){
					tempos++;
				}
				if(tempos == pos){
					break;
				}
				temp_ant = rtemp;
				rtemp = rtemp->m_sig;
			}
			if(rtemp){
				if(rtemp == m_prim){
					m_prim = m_prim->m_sig;
				}
				else if(rtemp == m_ult){
					temp_ant->m_sig = nullptr;
					m_ult = temp_ant;
				}
				else{
					temp_ant->m_sig = rtemp->m_sig;
				}
				m_size--;
				delete rtemp;
			}
		}
	}
	void print(){
		if(!listaVac()){
			Nodo<T>* temp = m_prim;
			while(temp){
				cout << temp->md_cod << "->" << temp->md_nomb << "|";
				temp = temp->m_sig;
			}
		}
		else{
			cout << "nullptr";
		}
	}
	void Graphviz(int i, ofstream& dotx, string* cod = nullptr){
		if(!listaVac()){
			Nodo<T>* tmp = m_prim;
			int it = 0;
			dotx << "node" << it << i << "[label =\"{" << tmp->md_cod << "}|{" << tmp->md_nomb << "}\"];\n";
			dotx << "vec" << i << "->node" << it << i << ";\n";
			dotx << "node" <<it << i << "[xlabel=" << it << "];\n";
			while(tmp){
				if(tmp->m_sig != nullptr){
					dotx << "node" << it << i << "[label =\"{" << tmp->md_cod << "}|{" << tmp->md_nomb << "}\"];\n";
					dotx << "node" << it+1 << i << "[label =\"{" << tmp->m_sig->md_cod << "}|{" << tmp->m_sig->md_nomb << "}\"];\n";
					dotx << "node" << it << i << "->node" << it+1 << i << ";\n";
					dotx << "node" <<it << i << "[xlabel=" << it << "];\n";
				}
				else{
					dotx << "node" << it << i << "[label =\"{" << tmp->md_cod << "}|{" << tmp->md_nomb << "}\"];\n";
					dotx << "null" << i << "[label =\"NULL\"];\n";
					dotx << "node" << it << i << "->null" << i <<";\n";
					dotx << "node" << it << i << "[xlabel=" << it << "];\n";
				}
				if(cod){
					if(tmp->md_cod == *cod){
						dotx << "node" << it << i << "[label =\"{" << tmp->md_cod << "}|{" << tmp->md_nomb << "}\"][color=blue];\n";
					}
				}
				tmp = tmp->m_sig;
				it++;
			}
		}
		else{
			dotx << "null" << i << "[label =\"NULL\"];\n";
			dotx << "vec" << i << "->null" << i << ";\n";
			return;
		}
	}
	Nodo<T>* m_prim;
	Nodo<T>* m_ult;
	int m_size;
};

template<class T>
class tabla_Hash{
public:
	tabla_Hash(int size){
		this->mp_size = size;
		for(int i=0; i<mp_size; i++){
			lista_Hash<T>* temp = new lista_Hash<T>();
			TablaHash.push_back(temp);
		}
		char comp;
		
		while(true){
			print();
			string cod;
			cout << "\nIngrese un codigo puede contener letras y numeros: ";
			cin >> cod;
			T nomb;
			cout << "Digite el nombre: ";
			cin >> nomb;
			
			int clav = this->funci_hash(cod);
			TablaHash.at(clav)->insert(cod,nomb);
			
			cout << "¿Desea continuar? (s/n): ";
			cin >> comp;
			if(comp == 'n' || comp == 'N'){
				break;
			}
		}
	}
	int funci_hash(string cod){
		char* p = (char*)cod.c_str();
		int s = 0;
		while (*p)
		{
			s += *p;
			p++;
		}
		return s % mp_size;
	}
	void print(){
		system("CLS");
		cout << "TABLA HASH\n";
		for(int i=0 ; i<mp_size; i++){
			cout << "ListaHash[" << i << "] = "; 
			TablaHash.at(i)->print();
			cout << "\n";
		}
	}
	Nodo<T>* search(string cod){
		int clav = this->funci_hash(cod);
		Nodo<T>* temp = TablaHash.at(clav)->search(cod);
		return temp;
	}
	void delete_nod(string cod){
		int clav = this->funci_hash(cod);
		TablaHash.at(clav)->delete_nod(cod);
	}
	void Graphviz(string* cod = nullptr){
		ofstream dotx("prueba.dot");
		dotx << "digraph A{\n";
		dotx << "concentrate=True;\n";
		dotx << "rankdir=TB;\n";
		dotx << "subgraph cluster_0{\n";
		for(int i=0 ; i<mp_size; i++){
			dotx << "vec" << i << "[label =\"vec[" << i << "]\"];\n";
		}
		dotx << "}\n";
		for(int i=0 ; i<mp_size; i++){
			TablaHash.at(i)->Graphviz(i,dotx, cod);
			cout << "\n";
		}
		dotx << "}";
		dotx.close();
		system("dot -Tpng prueba.dot -o prueba.png -Nshape=record");
		system("prueba.png");
	}
	vector<lista_Hash<T>*> TablaHash;
	int mp_size;
};

int main(int argc, char *argv[]) {
	int size;
	cout << "Ingrese el numero de listas en la tabla hash: ";
	cin >> size;
	system("CLS");
	tabla_Hash<string> A(size);
	
	A.print();
	string s = "sus"; 
	A.Graphviz(&s);
	
	return 0;
}

