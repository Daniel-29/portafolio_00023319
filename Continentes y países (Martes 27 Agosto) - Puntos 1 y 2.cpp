    #include <iostream>
    #include <sstream>
    #include <string>
    
    using namespace std;

struct datos{
    string nombre;
    string paises[5];
    string capital[5];
    int nhabitantes[5];
    
};
int main(){
    bool lleno =true;
   struct datos america,europa,africa,oceania,asia;
    
    do{
        int continente=0;
        cout << "Selecione un continente"<< endl;
        cout << "1. America"<< endl;
        cout << "2. Europa"<< endl;
        cout << "3. Africa"<< endl;
        cout << "4. Asia"<< endl;
        cout << "5. Oceania"<< endl;
        cin >> continente;
        switch(continente){
            case 1:{
                int npaises=0;
                string type;
                int type2;
                do{
                    cout << "Ingrese el nombre del pais: " << npaises+1 << endl;
                    cin >> type;
                    america.paises[npaises] = type;
                    cout << "Ingrese el nombre de la capital del pais: " << npaises+1 << endl;
                     cin >> type;
                    america.capital[npaises] = type;
                    cout << "Ingrese el numero de habitantes del pais: " << npaises+1 << endl;
                     cin >> type2;
                    america.nhabitantes[npaises] = type2;
                    npaises++;
                }while(npaises < 5);

            }
            break;
            
            case 2:{
                 int npaises=0;
                string type;
                int type2;
                do{
                    cout << "Ingrese el nombre del pais: " << npaises+1 << endl;
                    cin >> type;
                    europa.paises[npaises] = type;
                    cout << "Ingrese el nombre de la capital del pais: " << npaises+1 << endl;
                     cin >> type;
                    europa.capital[npaises] = type;
                    cout << "Ingrese el numero de habitantes del pais: " << npaises+1 << endl;
                     cin >> type2;
                    europa.nhabitantes[npaises] = type2;
                    npaises++;
                }while(npaises < 5);
            }
            break;
            
            case 3:{
                 int npaises=0;
                string type;
                int type2;
                do{
                    cout << "Ingrese el nombre del pais: " << npaises+1 << endl;
                    cin >> type;
                    africa.paises[npaises] = type;
                    cout << "Ingrese el nombre de la capital del pais: " << npaises+1 << endl;
                     cin >> type;
                    africa.capital[npaises] = type;
                    cout << "Ingrese el numero de habitantes del pais: " << npaises+1 << endl;
                     cin >> type2;
                    africa.nhabitantes[npaises] = type2;
                    npaises++;
                }while(npaises < 5);
            }
            break;
            
            case 4:{
                  int npaises=0;
                string type;
                int type2;
                do{
                    cout << "Ingrese el nombre del pais: " << npaises+1 << endl;
                    cin >> type;
                    oceania.paises[npaises] = type;
                    cout << "Ingrese el nombre de la capital del pais: " << npaises+1 << endl;
                     cin >> type;
                    oceania.capital[npaises] = type;
                    cout << "Ingrese el numero de habitantes del pais: " << npaises+1 << endl;
                     cin >> type2;
                    oceania.nhabitantes[npaises] = type2;
                    npaises++;
                }while(npaises < 5);
            }
            break;
            
            case 5:{
                  int npaises=0;
                string type;
                int type2;
                do{
                    cout << "Ingrese el nombre del pais: " << npaises+1 << endl;
                    cin >> type;
                    asia.paises[npaises] = type;
                    cout << "Ingrese el nombre de la capital del pais: " << npaises+1 << endl;
                     cin >> type;
                    asia.capital[npaises] = type;
                    cout << "Ingrese el numero de habitantes del pais: " << npaises+1 << endl;
                     cin >> type2;
                    asia.nhabitantes[npaises] = type2;
                    npaises++;
                }while(npaises < 5);
            }
            break;
            
        
        }
        
    }while(lleno);
    
    return 0;
}