#include<iostream>
using namespace std;
int divisor(int val1, int val2);
int main(){
    int num, s, sum;
    sum=0;
    do{
        cout<<"Ingrese un numero: ";
        cin>>num;
        if(num>1){
            for(int i=1; i<num; i=i+1){
            s=divisor(num, i);
            sum=sum+s;
            }
            if(sum==num){
            cout<<"El numero ingresado es perfecto(la suma de sus divisores menores es igual al numero)";
            } else{
            cout<<"El numero ingresado no es perfecto(la suma de sus divisores menores es diferente al numero)";
            }
        } else{
            cout<<"ERROR: Ingrese un numero mayor a 1"<<endl;
        }
    } while(num<=1);
    
    return 0;
}
int divisor(int val1, int val2){
    if(val1%val2==0){
        return(val2);
    } else{
        return(0);
    }
}