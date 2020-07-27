#include <iostream>
#include <stdlib.h>
#include <sstream>/*esta biblioteca foi utilizada para a convers�o de inteiro para texto*/
#include <string>/*esta biblioteca foi inserida para poder usar as fun��es strings */
#include <iomanip>/*esta biblioteca foi inserida para preencher o espa�o em branco da coluna vertical
                  com o caracter que preferir */
# include <ctime>/*permite receber informa��es sobre o tempo do computador*/
using namespace std;

int main ()

{
    int aux=0;/*variavel auxiliar*/
    int temp;/*variavel tempor�ria*/
    int tamanhomax=0;/*variavel para armazenar o tamanho m�ximo de caracter*/
    int v[10];
    srand(time(NULL));

    for(int i=0; i<=9; i++)
    {
        temp = rand();
        /*variavel tempor�ria esta recebendo um numero aleat�rio*/

        if(temp < 0) temp = temp * -1;
        /*aqui fez com que todos os n�meros se tornassem positivos*/

        stringstream ss;
        ss << temp ;
        string numtext = ss.str() ;
        /*agora foi armazenada a quantidade de caracter que a vari�vel possui
         para assim poder verificar qual ser� a quantidade de caracter maior
         contida em uma posi��o do vetor*/


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
        /*novamente foi feita a convers�o para texto, para assim poder verificar
         a quantidade de caracter de cada posi��o e soma-las*/
    }

    cout << "Horizontal" << endl;

    for(int i=0; i <= aux+10; i++)
    {
        cout << "-";
    }
    cout << endl;
    /*aux+10 pois ter� mais dez posi��es na caixa que ser�o as barras "|"*/
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
        /*na linha de cima foi preenchido a diferen�a de espa�o para que todos pudessem
        ficar contidos em uma caixa do tamanho da maior*/
    }
    for(int j=0; j<=tamanhomax+1; j++)
    {
        cout<<"-";
    }
    cout<<endl;
    cout << "tamanho maximo: " << tamanhomax << endl;
    /*aqui indica tamb�m o tamanho m�ximo de caracter da posi��o do vetor*/


}
