#include <iostream>
using namespace std;
int cociente(int val1, int val2);
int residuo(int val1, int val2);
int main(){
    int num1, num2, aux, coci, resi;
    cout<<"Ingrese un numero: ";
    cin>>num1;
    cout<<"Ingrese otro numero: ";
    cin>>num2;
    if(num2>num1){
        aux=num2;
        num2=num1;
        num1=aux;
    }
    if(num2>0){
        coci=cociente(num1, num2);
        resi=residuo(num1, num2);
        cout<<"Residuo: "<<resi<<endl;
        cout<<"Cociente: "<<coci<<endl;
    }
    else {
        cout<<"ERROR: El numero menor no es positivo";
    }
    return 0;
}

int cociente(int val1, int val2){
    int c;
    c=0;
    while(val1>=val2){
        val1=val1-val2;
        c=c+1;
    }
    return (c);
}
int residuo(int val1, int val2){
    while(val1>=val2){
        val1=val1-val2;
    }
    return (val1);
}