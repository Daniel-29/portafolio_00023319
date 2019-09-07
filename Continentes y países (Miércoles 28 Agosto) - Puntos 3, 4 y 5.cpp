    #include <iostream>
    #include <sstream>
    #include <string>
    #include <algorithm>
    #include <math.h>
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
        cout << "6. Mostrar la poblacion de un continente."<< endl;
        cout << "7. Mostrar la capital con mayor  poblacion."<< endl;
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
            
            case 6:{
                continente=0;
                cout << "Selecione un continente para ver su poblacion total."<< endl;
                cout << "1. America"<< endl;
                cout << "2. Europa"<< endl;
                cout << "3. Africa"<< endl;
                cout << "4. Asia"<< endl;
                cout << "5. Oceania"<< endl;
                cin >> continente;
                switch(continente){
                    case 1:{
                        int thabitantes=0;
                        for (int i = 0; i < 5; i++) {
                          thabitantes = thabitantes +  america.nhabitantes[i];
                        }
                        cout << "El total de habitantes de America es " << thabitantes << endl;
                        cout <<endl;
                        cout <<endl;
                        cout  <<endl;
        
                    }
                    break;
                    
                    case 2:{
                        int thabitantes=0;
                        for (int i = 0; i < 5; i++) {
                          thabitantes = thabitantes +  europa.nhabitantes[i];
                        }
                        cout << "El total de habitantes de Europa es " << thabitantes << endl;
                        cout <<endl;
                        cout <<endl;
                        cout  <<endl;
                    }
                    break;
                    
                    case 3:{
                        int thabitantes=0;
                        for (int i = 0; i < 5; i++) {
                          thabitantes = thabitantes +  africa.nhabitantes[i];
                        }
                        cout << "El total de habitantes de Africa es " << thabitantes << endl;
                        cout <<endl;
                        cout <<endl;
                        cout  <<endl;
                    }
                    break;
                    
                    case 4:{
                        int thabitantes=0;
                        for (int i = 0; i < 5; i++) {
                          thabitantes = thabitantes +  asia.nhabitantes[i];
                        }
                        cout << "El total de habitantes de Asia es " << thabitantes << endl;
                        cout <<endl;
                        cout <<endl;
                        cout  <<endl;
                    }
                    break;
                    
                    case 5:{
                        int thabitantes=0;
                        for (int i = 0; i < 5; i++) {
                          thabitantes = thabitantes +  oceania.nhabitantes[i];
                        }
                        cout << "El total de habitantes de Oceania es " << thabitantes << endl;
                        cout <<endl;
                        cout <<endl;
                        cout  <<endl;
                    }
                    break;
                    
                }
                
            }
            break;
            
            case 7:{
                int nthabitantes[25];
                int mayor = 0;
                int indice = 0;
                for (int i = 0; i < 5; i++) {
                    nthabitantes[i] = america.nhabitantes[i];
                    nthabitantes[4+i] = europa.nhabitantes[i];
                    nthabitantes[9+i] = africa.nhabitantes[i];
                    nthabitantes[14+i] = asia.nhabitantes[i];
                    nthabitantes[19+i] = oceania.nhabitantes[i];
                }
                 for (int i = 0; i < 25; i++) {
                    if(nthabitantes[i] > mayor ){
                        mayor = nthabitantes[i];
                        indice = i;
                    }
                }
                 cout << "El indice " << indice<< endl;
                if(indice < 4 ){
                    cout << "La capital" << america.capital[indice] <<" del  pais: "<<america.paises[indice] << " continente de america tiene mas habitantes: "<<  america.nhabitantes[indice] << endl;
                }else if( indice < 9){
                    indice = indice -4;
                    cout << "La capital" << europa.capital[indice] <<" del  pais: "<<europa.paises[indice] << " continente de europa tiene mas habitantes: "<<  europa.nhabitantes[indice] << endl;

                }else if( indice < 14){
                     indice = indice -9;
                    cout << "La capital" << africa.capital[indice] <<" del  pais: "<<africa.paises[indice] << " continente de africa tiene mas habitantes: "<<  africa.nhabitantes[indice] << endl;

                }else if( indice < 19){
                     indice = indice -14;
                    cout << "La capital" << asia.capital[indice] <<" del  pais: "<<asia.paises[indice] << " continente de asia tiene mas habitantes: "<<  asia.nhabitantes[indice] << endl;

                }else{
                     indice = indice -19;
                   cout << "La capital" << oceania.capital[indice] <<" del  pais: "<<oceania.paises[indice] << " continente de oceania tiene mas habitantes: "<<  oceania.nhabitantes[indice] << endl;

                }
            }
            break;
        
            
        }
    }while(lleno);
    
    return 0;
}