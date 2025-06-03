#include<iostream>
using namespace std;
int factorial(int val1);
int main(){
    int n;
    float s;
    cout<<"Ingrese un numero para realizar la serie: ";
    cin>>n;
    s=0;
    for(int i=1; i<=n; i=i+1){
        s=s+factorial(i)/(2.0*i);
    }
    cout<<"El resultado de la serie es "<<s;
    return 0;
}
int factorial(int val1){
    int fact;
    fact=1;
    for(int i=1; i<=val1; i=i+1){
        fact=fact*i;
    }
    return(fact);
}