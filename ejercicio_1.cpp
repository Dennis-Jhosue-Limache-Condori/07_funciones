#include<iostream>
using namespace std;
void resta(int val1, int val2);
int producto(int val1, int val2);
void division(int val1, int val2);
int suma(int val1, int val2);
int main(){
    int num1, num2, resultado, total, product;
    cout<<"Ingrese el primer numero: ";
    cin>>num1;
    cout<<"Ingrese el segundo numero: ";
    cin>>num2;
    resta(num1, num2);
    resta(num2, num1);
    product=producto(num1, num2);
    total=suma(num1, num2);
    cout<<"La suma de "<<num1<<" y "<<num2<<" es "<<total<<endl;
    cout<<"La multiplicacion de "<<num1<<" por "<<num2<<" es "<<product<<endl;
    division(num1, num2);
    return 0;
}
void resta(int val1, int val2){
    int sustrac;
    sustrac=val1-val2;
    cout<<"La resta de "<<val1<<" - "<<val2<<" es: "<<sustrac<<endl;
}
int producto(int val1, int val2){
    int prod;
    prod=val1*val2;
    return(prod);
}
int suma(int val1, int val2){
    int sum;
    sum=val1+val2;
    return(sum);
}
void division(int val1, int val2){
    double resultado;
    if(val2!=0){
        resultado=val1/val2;
        cout<<"La division de "<<val1<<" y "<<val2<<" es "<<resultado;
    } else{
        cout<<"ERROR: No se puede dividir entre 0";
    }
}