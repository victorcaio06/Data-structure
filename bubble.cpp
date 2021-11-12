#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <vector>

using namespace std;

void bubbleSort(int arr[], int sizeArr){
    int count {0};
    bool verifica = true;

    while(verifica){
        verifica = false;
        count++;
        for(int i = 0; i < sizeArr - 1; i++){
            if(arr[i] > arr[i + 1]){
                swap(arr[i], arr[i + 1]);
                verifica = true;
            }
        }
    }
    cout << count << "\n";
}

int main(){ 
    int size;
    cin >> size;
    int vetor[size];
    //Entrada dos valores do vetor
    for (int i = 0; i < size; i++){
        cin >> vetor[i];
    }
    //Printando o vetor
    // for(int i = 0; i < size; i++){
    //     cout << vetor[i] << "\n";
    // }

    bubbleSort(vetor, size);
    return 0;
}
