#include <iostream>
using namespace std;
bool primo(int val1);
int main(){
    int num;
    bool valor;
    do{
        cout<<"Ingrese el numero: ";
        cin>>num;
        if(num<0){
            cout<<"ERROR:Ingrese un numero a partir de 0 en adelante"<<endl;
        }
    } while(num<0);
    valor=primo(num);
    if(valor){
        cout<<num<<" es primo."<<endl;
    } else{
        cout<<num<<" no es primo."<<endl;
    }
    return 0;
}
bool primo(int val1){
    if(val1<=1){
        return (false);
    }
    for(int i=2; i*i<=(val1); i=i+1){
        if(val1%i==0){
            return (false);
        }
    }
    return (true);
}