#include <iostream>
#include <cstdlib>

/**
 * Uma plac met�lica de forma retangular dever� ser cortada em v�rios quadrados pequenos, conforme a figura abaixo.
 * Conhecendo-se as medidas dos lados da placa e a medida dos lados dos quadrados, como determinar a quantidade de quadrados
 * que podemos obter recortando a placa?
 */


using namespace std;

int main()
{
    int lr1, lr2, lq;
    float l, h, t;

    cout<< "Entre com o valor de um lado do retangulo: ";
    cin>>lr1;
    cout<< "Entre com o valor do outro lado do retangulo: ";
    cin>>lr2;
    cout<< "Entre com o valor do lado do quadrado: ";
    cin>>lq;

    l = lr1/lq;
    h = lr2/lq;
    t = l * (h - 1);

    cout<< "O numero de quadrados obtidos sao: "<<t<<endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
