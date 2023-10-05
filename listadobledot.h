#pragma once
#include "listadoble.h"
using namespace std;
template<class T>
void LDgrafo(Lista<T>A) {
    ofstream File("listadoble.dot");
    File << "digraph A{\nrankdir=LR;\n";
    A.print3(File, NULL);
    A.print(File);
    File << "\n";
    A.print2(File);
    File << "\n}";
    File.close();
    system("dot -Tpng listadoble.dot -o listadoble.png -Nshape=rect");
    //system("listadoble.png");
}
template<class T>
void LDgrafofind(Lista<T>A, T num) {
    ofstream File("listadoble.dot");
    File << "digraph A{\nrankdir=LR;\n";
    A.print3(File, num);
    A.print(File);
    File << "\n";
    A.print2(File);
    File << "\n}";
    File.close();
    system("dot -Tpng listadoble.dot -o listadoble.png -Nshape=rect");
    //system("listadoble.png");
}
void funcionesLD() {
    Lista<int>*A=new Lista<int>();
    int val;
    while (true) {
        std::cout << "1. Pfront 2. PBack 3 PopF 4 PopB 5 Find 6 Salir" << std::endl;
        std::cout << "Ingrese numero:";
        std::cin >> val;
        int num;
        if (val == 1) {
            /*std::cout << std::endl;
            std::cout << "Ingrese numero:";
            std::cin >> num;
            A->push_front(num);*/
            srand(time(NULL));
            for (int i = 0; i <= 10; i++)
                A->push_front(rand() % 1000);
            LDgrafo<int>(*A);
        }
        else if (val == 2) {
            std::cout << std::endl;
            std::cout << "Ingrese numero:";
            std::cin >> num;
            A->push_back(num);
            LDgrafo<int>(*A);
        }
        else if (val == 3) {
            std::cout << std::endl;
            A->pop_front();
            LDgrafo<int>(*A);
        }
        else if (val == 4) {
            std::cout << std::endl;
            A->pop_back();
            LDgrafo<int>(*A);
        }
        else if (val == 5) {
            std::cout << std::endl;
            std::cout << "Ingrese numero:";
            std::cin >> num;
            if (A->find(num)) {
                LDgrafofind<int>(*A, num);
            }
            else { LDgrafo<int>(*A); }
        }
        else if (val == 6) {
            std::cout << std::endl;
            std::cout << "Saliemdo...." << std::endl;
            break;
        }
        else {
            std::cout << std::endl;
            std::cout << "Valor Incorrecto" << std::endl;
        }
    }
}