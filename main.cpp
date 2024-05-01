#include <iostream>
#include <string>
#include <filesystem>
using namespace std;
namespace fs = std :: filesystem;

template <class TipoD>
void mostrarABS (TipoD numero);
void pedirDatos();
void multi (float x, float y);
float numew1, numew2;
void crearCarpeta ();

int numeromax (int x, int y);

int main() {
    std::cout << "Hello, World!" << std::endl;

    int n1, n2, mayor;
    cout<< "Ingresa dos numeros" << endl;
    cin >> n1>> n2;

    mayor = numeromax(n1, n2);
    cout << "El numero mayor de los 2 es: "<< mayor << endl;

    int nume1=4;
    float num2= 56.67;
    double nume3= 123.5678;

    mostrarABS(nume1);
    mostrarABS(num2);
    mostrarABS(nume3);

    pedirDatos();
    multi(numew1, numew2);
    crearCarpeta();
    return 0;
}

int numeromax(int x, int y ){
    int max;

    if (x>y){
        max = x;
    }else{
        max=y;
    }
    return max;
}

template <class TipoD>
void mostrarABS(TipoD numero){
    if (numero<0){
        numero = numero * -1;
    }
    cout << "El valor absoluto del numero es:" << numero << endl;
}

void pedirDatos(){
    cout << "Digite 2 numeros: " << endl;
    cin >> numew1 >> numew2;
}

void multi (float x, float y){
    float multiplicacion = x * y;

    cout << "La multiplicacion es: " << multiplicacion << endl;

}

void crearCarpeta(){
    string directorio;
    cout << "Ingrese la ruta del directorio donde desea crear la carpeta: "<< endl;
    cin>>directorio;
    if (!fs::exists(directorio)) {
        cerr << "El directorio especificado no existe." <<endl;
    }
    string nombreCarpeta;
    cout << "Ingrese el nombre de la carpeta que desea crear: "<<endl;
    cin>>nombreCarpeta;

    string rutaCompleta = directorio + "/" + nombreCarpeta;
    if (fs::create_directory(rutaCompleta)) {
        cout<<"Se creo la carpeta "<<nombreCarpeta<<" "<<"en el directorio especificado"<< endl;
    }else{
        cerr << "No se pudo crear la carpeta."<<endl;
    }
}

