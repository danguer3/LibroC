#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
  int numero1=0, numero2=0, suma=0;
  std::cout<<"Escriba dos enteros a comparar: ";
  std::cin>>numero1>>numero2;

  if (numero1 == numero2)
    cout << numero1 << " == " << numero2 << endl;
  if (numero1 != numero2)
    cout << numero1 << " != " << numero2 << endl;
  if (numero1 < numero2)
    cout << numero1 << " < " << numero2 << endl;
  if (numero1 > numero2)
    cout << numero1 << " > " << numero2 << endl;
  if (numero1 <= numero2)
    cout << numero1 << " <= " << numero2 << endl;
  if (numero1 >= numero2)
    cout << numero1 << " >= " << numero2 << endl;

}
