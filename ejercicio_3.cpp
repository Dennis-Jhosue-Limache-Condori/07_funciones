#include<iostream>
using namespace std;
void fibonacci(int cantidad);
int main(){
    int cantidad;
    cout<<"Ingrese la cantidad de numeros de la serie de fibonacci que desea: ";
    cin>>cantidad;
    fibonacci(cantidad);
    return 0;
}
void fibonacci(int cantidad){
    int a, b, f;
    a=0;
    b=1;
    for (int i=0; i<cantidad;i=i+1) {
        cout<<a<<" ";
        f=a+b;
        a=b;
        b=f;
    }
    cout<<endl;
}