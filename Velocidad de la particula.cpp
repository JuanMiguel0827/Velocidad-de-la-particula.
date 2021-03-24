#include <iostream> 

using namespace std;

int main()
{
    float Tiempo;
    float Distancia; 
    float Velocidad; 
    
    cout<<"Valor de la Distancia:";
    cin>> Distancia;
    cout<<"Valor del Tiempo:";
    cin>> Tiempo;
    
    Velocidad= (Distancia/Tiempo); 
    cout<<"La Velocidad de la particula es:";
    cout<<Velocidad;

    return 0;
}