#include <iostream>

using namespace std;

int main()
{
    int numero,contador=0;
    cout<<"ingrese un numero"<<endl;
    cin>>numero;
    while (numero>0) {
        numero=numero/10;
        contador++;
    }
    cout<<"el numero ingresado tiene "<<contador<<" digitos"<<endl;
    /*int num[]={1,2,3,4,5};
    int *dir_num;
    dir_num=num;
    for(int i=0;i<5;i++){
        cout<<*(dir_num+i)<<endl;
    }*/
    return 0;
}
