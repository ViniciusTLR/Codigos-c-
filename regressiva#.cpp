#include <iostream>
 using namespace std;
 
 //Programa conta do maior para o menor
 
 int main()
 {
   int num, contador, res;
   cout <<"Qual o valor para inicio da contagem regressiva? ";
   cin >> res;
   for (contador=res;contador>=0;contador--)
   {
        cout <<contador<<"\n";
    }
}

