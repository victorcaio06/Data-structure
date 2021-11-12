#include <iostream>

using namespace std;

void bubbleSort(int arr[], int sizeArr){
    //int count {0};
    bool verifica = true;

    while(verifica){
        verifica = false;
        //count++;
        for(int i = 0; i < sizeArr - 1; i++){
            if(arr[i] > arr[i + 1]){
                swap(arr[i], arr[i + 1]);
                verifica = true;
            }
        }
    }
    //cout << count << "\n";
}

void maisFrequente(int arr[], int sizeArr){
    int count, aux;
    for(int i = 0; i < sizeArr; i++){
        for(int j = 0; j < sizeArr; j--){
            if(i != j){
                if(arr[i] == arr[j]){
                    count++;
                    aux = arr[i];
                    cout << aux << count << "\n";
                }
            }
        }
    }
}


int main(int argc, char const *argv[]){
    int size;
    int arr[size];
    cin >> size;

    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    
    bubbleSort(arr, size);
    maisFrequente(arr, size);
    return 0;
}
