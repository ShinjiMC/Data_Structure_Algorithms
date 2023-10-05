#include<iostream>
#include<fstream>
using namespace std;

template<class T>
class NodoE{
public:
	int	m_row;
	int m_col;
	NodoE<T>* m_pNext_row;
	NodoE<T>* m_pNext_col;
	T m_Data;
	NodoE(T d, int row, int col){
		m_Data = d;
		m_row = row;
		m_col = col;
		m_pNext_row = m_pNext_col = nullptr;
	}
};

template<class T, int row_size=5, int col_size=5>
class Matrix{
private:
	NodoE<T>* m_Row[row_size];
	NodoE<T>* m_Col[col_size];
public:
	Matrix(){
		for(int i=0; i<row_size; i++){
			m_Row[i]=0;
		}
		for(int i=0; i<col_size; i++){
			m_Col[i]=0;
		}
	};
	void Insert(T d, int row, int col){
		NodoE<T>** p,** q;
		bool r =  find_row(row, col, p);
		bool c =  find_col(row, col, q);
		if(!r || !c){
			NodoE<T>* pNew = new NodoE<T>(d, row, col);
			pNew->m_pNext_row = *p;
			(*p) = pNew;
			pNew->m_pNext_col = *q;
			(*q) = pNew;
		}
		(*p)->m_Data = d;
	}
	// find the row
	bool find_row(int row, int col, NodoE<T>** &p){
		p = &m_Col[col];
		while(*p){
			if((*p)->m_row == row) return true;
			if((*p)->m_row > row) return false;
			p = &((*p)->m_pNext_row);
		}
		return false;
	}
	// find te col
	bool find_col(int row, int col, NodoE<T>** &p){
		p = &m_Row[row];
		while(*p){
			if((*p)->m_col == col) return true;
			if((*p)->m_col > col) return false;
			p = &((*p)->m_pNext_col);
		}
			return false;
	}
	void delete_nod(int row, int col){
		NodoE<T>** p,** q;
		bool r =  find_row(row, col, p);
		bool c =  find_col(row, col, q);
		if(r && c){
			pNew->m_pNext_row = *p;
			(*p) = pNew;
			pNew->m_pNext_col = *q;
			(*q) = pNew;
		}
		(*p)->m_Data = d;
	}
	void Print(){
		for(int i=0; i<row_size; i++){
			for(int j=0; j<col_size; j++){
				NodoE<T> **p;
				if(find_col(i,j,p)){
					cout << " " << (*p)->m_Data << " ";
				}
				else{
					cout << "0";
				}
			}
			cout << endl;
		}
	}
	void Graphviz(){
		ofstream dotx("prueba.dot");
		dotx << "digraph A{\n";
		dotx << "imagescale=true;\n";
		for(int i=0 ; i<row_size; i++){
			dotx << "vecr" << i << "[label =\"row[" << i << "]\"];\n";
		}
		for(int j=0 ; j<col_size; j++){
			dotx << "vecc" << j << "[label =\"col[" << j << "]\"];\n";
		}
		for(int i=0; i<row_size; i++){
			for(int j=0; j<col_size; j++){
				NodoE<T> **p = &m_Row[i];
				bool b = find_col(i,j,p);
				if((*p) == nullptr){
					dotx << "node" << i << j << "[label =\"0\"];\n";
					dotx << "node" << i << j+1 << "[label =\"null\"];\n";
					dotx << "node" << i << j << "->node" << i << j+1 << ";\n";
				}
				else if((*p) != nullptr && (*p)->m_pNext_col != nullptr && b){
					dotx << "node" << i << j << "[label =\"" << (*p)->m_Data << "\"];\n";
					dotx << "node" << i << j+1 << "[label =\"" << (*p)->m_pNext_col->m_Data << "\"];\n";
					dotx << "node" << i << j << "->node" << i << j+1 << ";\n";
				}
				else if((*p) != nullptr && (*p)->m_pNext_col == nullptr && b){
					dotx << "node" << i << j << "[label =\"" << (*p)->m_Data << "\"];\n";
					dotx << "node" << i << j+1 << "[label =\"null\"];\n";
					dotx << "node" << i << j << "->node" << i << j+1 << ";\n";
				}
				else if((*p) != nullptr && (*p)->m_pNext_col == nullptr && !b){
					dotx << "node" << i << j << "[label =\"0\"];\n";
					dotx << "node" << i << j+1 << "[label =\"null\"];\n";
					dotx << "node" << i << j << "->node" << i << j+1 << ";\n";
				}
				if(j==0){
					dotx << "vecc" << i << "->node" << i << j << ";\n";
				}
			}
		}
		for(int j=0; j<col_size; j++){
			dotx << "rank=same{\n";
			for(int i=0; i<row_size; i++){
				NodoE<T> **p = &m_Col[j];
				bool b = find_row(i,j,p);
				if((*p) == nullptr){
					dotx << "node" << i << j << "[label =\"0\"];\n";
					dotx << "node" << i+1 << j << "[label =\"null\"];\n";
					dotx << "node" << i << j << "->node" << i+1 << j << ";\n";
				}
				else if((*p) != nullptr && (*p)->m_pNext_row != nullptr && b){
					dotx << "node" << i << j << "[label =\"" << (*p)->m_Data << "\"];\n";
					dotx << "node" << i+1 << j << "[label =\"" << (*p)->m_pNext_row->m_Data << "\"];\n";
					dotx << "node" << i << j << "->node" << i+1 << j << ";\n";
				}
				else if((*p) != nullptr && (*p)->m_pNext_row == nullptr && b){
					dotx << "node" << i << j << "[label =\"" << (*p)->m_Data << "\"];\n";
					dotx << "node" << i+1 << j << "[label =\"null\"];\n";
					dotx << "node" << i << j << "->node" << i+1 << j << ";\n";
				}
				else if((*p) != nullptr && (*p)->m_pNext_row == nullptr && !b){
					dotx << "node" << i << j << "[label =\"0\"];\n";
					dotx << "node" << i+1 << j << "[label =\"null\"];\n";
					dotx << "node" << i << j << "->node" << i+1 << j << ";\n";
				}
				if(i==0){
					dotx << "vecr" << j << "->node" << i << j << ";\n";
				}
			}
			dotx << "}\n";
		}
		dotx << "}";
		dotx.close();
		system("dot -Tpng prueba.dot -o prueba.png -Nshape=rect");
		system("prueba.png");
	}
};

int main(int argc, char *argv[]){
	const int size = 10; 
	Matrix<int, size, size> A;
	for(int i=0; i<size; i++){
		A.Insert(6, i, i);
	}
	A.Print();
	A.Graphviz();
	
	return 0;
}
