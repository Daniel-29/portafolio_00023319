#include <iostream>
using namespace std;

int multiplicar(int a,int b){
	if(b==1){
		cout << "b=" << b << " caso base" << endl;
		return a;
	}else{
		int x = b-1 ;
		int y = multiplicar(a,x);
		return a+ y;
	cout << "resultado" << a+b << " caso base" << endl;
	}
}

int main()
{
	int a,b;
	cout << "La multiplicacion de dos numeros a,b"<<endl;
	cout << "Ingrese el valor de a"<<endl;
	cin >> a;
   cout << "Ingrese el valor de b"<<endl;
   cin >> b;
	int r = multiplicar(a,b);
	cout << "Resultado: " << r << endl;

}