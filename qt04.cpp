#include <iostream>
#include <vector>
#include <iterator>

using namespace std;
using std::vector;

int main(int argc, char const *argv[]){
    vector<int> int_array = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    //int vet [3] = {2, 3, 4};
    int maior {0};
    int menor = int_array[9];
    int aux = int_array.size();

    cout << aux << "\n";

    for (int i = 0; i < 10; ++i) {
    if (int_array[i] > maior) maior = int_array[i];
    if (int_array[i] < menor) menor = int_array[i];
    }

    cout << "menor: " << menor << "\n";
    cout << "maior: " << maior << "\n";
    cout << "array size: " << int_array.size() << "\n";
    
    return 0;
}
// void recursividade()