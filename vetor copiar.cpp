/******************************************************************************
Os valores de um vetor são copiados para um outro vetor, ambos de mesmo tamanho.
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int vetorA[3] = {1,2,3};
    int vetorB[3] = {0,0,0};
    
     vetorB[0] =  vetorA[0];
     vetorB[1] = vetorA[1];
     vetorB[2] = vetorA[2];
    cout << "os valores do vetor B são, respectivamente: " << endl;
    cout << vetorB[0] << endl << vetorB[1] << endl << vetorB[2];
    

    return 0;
}