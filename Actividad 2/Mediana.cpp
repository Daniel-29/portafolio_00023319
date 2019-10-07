#include <iostream>
#include <algorithm>
#include <math.h>


using namespace std;

float CalcularMediana(float array[], int t);

int main()
{
    int t, contador;
    float numero;
    cout << "Cuantos numeros se ingresaran?" << endl;
    cin >> t;
    contador = t;
    float numeros[t];
    cout << "Ingrese los numeros:" << endl;
    while(contador > 0){
        contador--;
        cin >> numero;
        numeros[contador] = numero;
    }
    
    int nn = sizeof(numeros)/sizeof(numeros[0]); 
  
    sort(numeros, numeros+nn);
    cout << "Arreglo ordenado de forma ascendente: " << endl;
    for (int i = 0; i < nn; ++i){
        cout << numeros[i] << " "; 
        
    }
    cout << endl;
    
    cout << "Mediana: " << CalcularMediana(numeros, t) << endl;
    
    return 0;
}

float CalcularMediana(float array[], int t)
{
    int p;
    float median;
    if(t%2 != 0)
    {
        p = ceil(t/2);
        median = array[p];
    }
    else
    {
        p = t/2;
        median = (array[p-1] + array[p]) / 2;   
    }
    
    return median;
}
