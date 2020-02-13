#include <iostream>
using namespace std;
class Gato{
public:
Gato(int edadInicial, int Peso);
~Gato();
int ObtenerEdad() const;
int ObtenerPeso() const;
void AsignarEdad(int edad);
void AsignarPeso(int Peso);
void Maullar();
private:
int suEdad;
int suPeso;
};
//Constructor de Gato
Gato::Gato(int edadInicial, int Peso){
suEdad = edadInicial;
suPeso=Peso;
cout << "Se ha creado un objeto Gato de edad " << edadInicial;
cout <<" añios y de peso:"<< Peso<<"KG" <<endl;
}
Gato::~Gato(){
cout << "El objeto Gato se destruira en 3, 2, 1 .... ya fue...." << endl;
}
// ObtenerEdad, metodo de acceso publico
// regresa el valor de su miembro suEdad
int Gato::ObtenerEdad() const{
return suEdad;
}
int Gato::ObtenerPeso() const{
	return suPeso;
}
// Definicion de AsignarEdad, metodo de
// acceso publico
void Gato::AsignarEdad(int edad){
// asignar a la variable miembro su Edad el
// valor pasado por el parametro edad
suEdad = edad;
}
void Gato::AsignarPeso(int Peso){
	suPeso=Peso;
}
// definicion del metodo Maullar
// regresa: void
// parametros: ninguno
// accion: imprime "miauu"
void Gato::Maullar(){
cout << "Miau" << endl;
}
// crear un gato, asignar un valor asu edad, hacer que
// maulle, que nos diga su edad, y que vuelva a maullar.
int main(){
Gato Pelusa(5,4);
Pelusa.Maullar();
cout << "Pelusa es un gato que tiene ";
cout << Pelusa.ObtenerEdad() << " añios de edad" ;
cout <<" y un peso de ";
cout<<Pelusa.ObtenerPeso()<< " KG" <<endl;
Pelusa.Maullar();
Pelusa.AsignarEdad(7);
Pelusa.AsignarPeso(6);
cout << "Ahora pelusa tiene " ;
cout << Pelusa.ObtenerEdad() << " anios de edad" ;
cout<< " y un peso de ";
cout<< Pelusa.ObtenerPeso()<<" KG"<<endl;
return 0;
}
