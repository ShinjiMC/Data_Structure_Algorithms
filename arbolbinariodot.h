#pragma once
#include "arbolbinario.h"
template<class T>
void ABgrafo(Tree<T>A) {
    ofstream File("arbolbinario.dot");
    File << "digraph A{\n";
    A.Iprints(File, NULL);
    A.Tprints(File);
    File << "\n}";
    File.close();
    system("dot -Tpng arbolbinario.dot -o arbolbinario.png -Nshape=rect");
    //system("arbolbinario.png");
}

template<class T>
void ABgrafofind(Tree<T>A, T num) {
    ofstream File("arbolbinario.dot");
    File << "digraph A{\n";
    A.Iprints(File, num);
    A.Tprints(File);
    File << "\n}";
    File.close();
    system("dot -Tpng arbolbinario.dot -o arbolbinario.png -Nshape=rect");
    //system("arbolbinario.png");
}

/*void funcionesAB() {
	Tree<int> *A=new Tree<int>();
    int ids = 0;
    int val;
    while (true) {
        std::cout << "1. Add 2. Find 3 DeleteHoja 4 DelteOneSon 5 Salir" << std::endl;
        std::cout << "Ingrese numero:";
        std::cin >> val;
        int num;
        if (val == 1) {
            /*std::cout << std::endl;
            std::cout << "Ingrese numero:";
            std::cin >> num;
            A.add(num, ids);
            ids++;
            srand(time(NULL));
            for (int i = 0; i <= 100; i++)
                A->add(rand() % 1000, i); ids++;
            ABgrafo<int>(*A);
        }
        else if (val == 2) {
            std::cout << std::endl;
            std::cout << "Ingrese numero:";
            std::cin >> num;
            if (A->Find(num)) {
                ABgrafofind<int>(*A, num);
            }
            else { ABgrafo<int>(*A); }
        }
        else if (val == 3) {
            std::cout << std::endl;
            std::cout << "Ingrese numero:";
            std::cin >> num;
            A->Delete_Hoja(num);
            ABgrafo<int>(*A);
        }
        else if (val == 4) {
            std::cout << std::endl;
            std::cout << "Ingrese numero:";
            std::cin >> num;
            A->Delete_one_Son(num);
            ABgrafo<int>(*A);
        }
        else if (val == 5) {
            std::cout << std::endl;
            std::cout << "Saliemdo...." << std::endl;
            break;
        }
        else {
            std::cout << std::endl;
            std::cout << "Valor Incorrecto" << std::endl;
        }
    }
}*/