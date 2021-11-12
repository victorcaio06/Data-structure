#include <iostream>

using namespace std;

int soma(int n, int vet[]);
int mult(int n, int vet[]);

int main(){
    int n = 5;
    int auxSoma, auxMult;
    int vet[n] = {2, 4, 6, 8, 10};
    // for(int i = 0; i < n; i++){
    //     cin >> vet[i]; 
    // }
    auxSoma = soma(n, vet);
    cout << auxSoma << "\n";
    auxMult = mult(n,vet);
    cout << auxMult << "\n";
}

int soma(int n, int vet[]){
    if (n == 0){
        return 0;
    }else{
        return vet[n-1] + soma(n-1, vet);
    }
}

int mult(int n, int vet[]){
    if(n == 0){
        return 0;
    }else{
        return vet[n-1] * mult(n-1, vet);
    }
}