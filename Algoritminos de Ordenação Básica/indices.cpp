#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <vector>

using namespace std;

int *bubbleSort(int arr[], int sizeArr) {
    int *indexArray = new int[sizeArr];
    bool verifica = false;
    
    
    for(int i = 0; i < sizeArr; i++) indexArray[i] = i;
    
    while(!verifica) {
        verifica = true;
        for(int i = 0; i < sizeArr - 1; i++) {
            if(arr[i] > arr[i+1]) {
                verifica = false;
                swap(arr[i], arr[i+1]);
                swap(indexArray[i], indexArray[i+1]);
            }
        }
    }
    return indexArray;
}

int main() {
    int size;
    cin >> size;
    int vetor[size];
    
    for(int i = 0; i < size; i++){
        cin >> vetor[i];
    }
    
    int *resultado = bubbleSort(vetor, size);
    for(int i = 0; i < size; i++){
        if(resultado[i] == resultado[size -1]){
            cout << resultado[i] << "\n";
        }else{
            cout << resultado[i] << " ";
        }
    }
    
    return 0;
}