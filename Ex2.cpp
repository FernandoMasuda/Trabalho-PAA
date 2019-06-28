#include <iostream>
#include <stdio.h>

using namespace std;

struct MinimoMaximo{
    int min.max;
};

struct MinMax MinMax(int array[],int inicio,int fim){
    struct MinimoMaximo resultado,metadeEsq,metadeDir;
    int mid;

    if(inicio==fim){
        resultado.min = array[fim];
        resultado.max = array[fim];
        return resultado;
    }

    if(fim==inicio+1){
        if(array[inicio]>array[fim]){
            resultado.min = array[fim];
            resultado.max = array[inicio];
        }
        else{
            resultado.min = array[inicio];
            resultado.max = array[fim];
        }
        return resultado;
    }

    mid = (inicio+fim)/2;
    metadeEsq = minMax(array,inicio,mid);
    metadeDir = minMax(array,mid+1,fim);

    if(metadeEsq.min < metadeDir.min) resultado.min = metadeEsq.min;
    else resultado.min = metadeDir.min;

    if(metadeEsq.max > metadeDir.max) resultado.max = metadeEsq.max;
    else resultado.max = metadeDir.max;

    return resultado;

};

int main(){
    int tam;
    struct MinMax resultado;

    cout << "Informe o tamanho do vetor: ";
    cin >> tam;

    for(int i=0; i<tam; i++){
        cout << "Informe um numero: ";
        cin >> vetor[i];
    }

    resultado = MinMax(vetor,0,tam-1);

    puts("Maior - Menor");
    puts("-------------------");
    cout << resultado.max,resultado.min;

}
