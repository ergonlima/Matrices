#include <iostream>
#include <stdlib.h>
#include <sstream>/*esta biblioteca foi utilizada para a conversão de inteiro para texto*/
#include <string>/*esta biblioteca foi inserida para poder usar as funções strings */
#include <iomanip>/*esta biblioteca foi inserida para preencher o espaço em branco da coluna vertical
                  com o caracter que preferir */
# include <ctime>/*permite receber informações sobre o tempo do computador*/
using namespace std;

int main ()

{
    int aux=0;/*variavel auxiliar*/
    int temp;/*variavel temporária*/
    int tamanhomax=0;/*variavel para armazenar o tamanho máximo de caracter*/
    int v[10];
    srand(time(NULL));

    for(int i=0; i<=9; i++)
    {
        temp = rand();
        /*variavel temporária esta recebendo um numero aleatório*/

        if(temp < 0) temp = temp * -1;
        /*aqui fez com que todos os números se tornassem positivos*/

        stringstream ss;
        ss << temp ;
        string numtext = ss.str() ;
        /*agora foi armazenada a quantidade de caracter que a variável possui
         para assim poder verificar qual será a quantidade de caracter maior
         contida em uma posição do vetor*/


        if(numtext.length() > tamanhomax)
        {
            tamanhomax = numtext.length();
        }
        /*verificou-se qual seria o maior a maior quantidade de caracter*/
        v[i] = temp;
    }

    for(int i=0; i<=9; i++)
    {
        stringstream ss;
        ss << v[i] ;
        string numtext = ss.str();

        aux =aux+numtext.length();
        /*novamente foi feita a conversão para texto, para assim poder verificar
         a quantidade de caracter de cada posição e soma-las*/
    }

    cout << "Horizontal" << endl;

    for(int i=0; i <= aux+10; i++)
    {
        cout << "-";
    }
    cout << endl;
    /*aux+10 pois terá mais dez posições na caixa que serão as barras "|"*/
    for(int i=0; i<=9; i++)
    {
        cout << "|"<<v[i];
    }
    cout << "|" << endl;

    for(int i=0; i<=aux+10; i++)
    {
        cout << "-";
    }
    cout << endl<< endl;

    cout << "Vertical" << endl;

    for(int i=0; i<=9; i++)
    {

        for(int j=0; j<=tamanhomax+1; j++)
        {
            cout << "-";
        }
        cout << endl;

        cout << "|" << setfill(' ') << setw(tamanhomax) << v[i] << "|" << endl;
        /*na linha de cima foi preenchido a diferença de espaço para que todos pudessem
        ficar contidos em uma caixa do tamanho da maior*/
    }
    for(int j=0; j<=tamanhomax+1; j++)
    {
        cout<<"-";
    }
    cout<<endl;
    cout << "tamanho maximo: " << tamanhomax << endl;
    /*aqui indica também o tamanho máximo de caracter da posição do vetor*/


}
