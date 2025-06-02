#include<iostream>
using namespace std;
int divisor(int val1, int val2);
int main(){
    int num1, num2, s1, s2, sum1, sum2;
    do{
        cout<<"Ingrese un numero: ";
        cin>>num1;
        if(num1<=1){
            cout<<"ERROR:Ingrese un numero mayor a 1"<<endl;
        }
    } while(num1<=1);
    do{
        cout<<"Ingrese otro numero: ";
        cin>>num2;
        if(num2<=1){
            cout<<"ERROR:Ingrese un numero mayor a 1"<<endl;
        }
    } while(num2<=1);
    sum1=0;
    sum2=0;
    for(int i=1; i<num1; i=i+1){
        s1=divisor(num1, i);
        sum1=sum1+s1;
    }
    for(int c=1; c<num2; c=c+1){
        s2=divisor(num2, c);
        sum2=sum2+s2;
    }
    if(sum1==num2 && sum2==num1){
        cout<<"Los numeros ingresados son amigos";
    } else{
        cout<<"Los numeros ingresados no son amigos";
    }
    return 0;
}
int divisor(int val1, int val2){
    if(val1%val2==0){
        return(val2);
    } else{
        return(0);
    }
}