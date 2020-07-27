#include<iostream>
#include<stdlib.h>
#include<string>
#include<sstream>
#include<iomanip>
#include<ctime>
using namespace std;
int main()
{
    srand(time(NULL));

    int linha,coluna,menu,maior=0,horizontal=0,aux;
    cout<<"digite o numero de linhas: ";
    cin>>linha;
    system("cls");
    cout<<"digite o numero de colunas: ";
    cin>>coluna;
    int matriz[linha][coluna];
    int posicao=coluna-1,posicao2=0;
    system("cls");
    for(int i=0; i<linha; i++)
    {
        for(int j=0; j<coluna; j++)
        {
            matriz[i][j] = rand();
            aux=matriz[i][j];
        }
        stringstream tamanho;
        tamanho << aux;
        string quanth = tamanho.str();
        horizontal=horizontal+quanth.length();
        if(maior<quanth.length())
        {
            maior=quanth.length();
        }

    }
    cout<<"MENU"<<endl;
    cout<<"Como deseja imprimir a matriz?"<<endl;
    cout<<"1) Inteira"<<endl;
    cout<<"2) Diagonal Principal"<<endl;
    cout<<"3) Diagonal Principal (triângulo inferior preenchido)"<<endl;
    cout<<"4) Diagonal Principal (triângulo superior preenchido exceto a diagonal)"<<endl;
    cout<<"5) Diagonal Secundária"<<endl;
    cout<<"6) Diagonal Secundária (triângulo inferior preenchido)"<<endl;
    cout<<"7) Diagonal Secundária (triângulo superior preenchido)"<<endl;
    cout<<"8) As duas Diagonais "<<endl;
    cout<<"9) Bordas"<<endl;
    cout<<"0) Sair"<<endl<<endl;
    cout<<"Matriz "<<linha<<" x "<<coluna<<endl<<endl;
    while(menu!=0)
    {
        cout<<"escolha a opcao: ";
        cin>>menu;
        switch(menu)
        {
        case 1:
            cout<<endl<<"Inteira"<<endl<<endl;
            for(int k=0; k<=((maior*coluna)+coluna); k++)
            {
                cout<<"-";

            }
            cout<<endl;
            for(int i=0; i<linha; i++)
            {
                for(int j=0; j<coluna; j++)
                {
                    cout<<"|"<< setw(maior)<<matriz[i][j];
                }
                cout<<"| "<<endl;
                for(int k=0; k<=((maior*coluna)+coluna); k++)
                {
                    cout<<"-";

                }
                cout<<endl;

            }
            break;
        case 2:
            cout<<endl<<" Diagonal Principal"<<endl<<endl;
            for(int k=0; k<=((maior*coluna)+coluna); k++)
            {
                cout<<"-";

            }
            cout<<endl;
            for(int i=0; i<linha; i++)
            {
                for(int j=0; j<coluna; j++)
                {
                    if(i==j)
                    {
                        cout<<"|"<< setw(maior)<<matriz[i][j];
                    }
                    else if(i!=j)
                    {
                        cout<<"|"<<setw(maior+1);
                    }
                }
                cout<<"|"<<endl;
                for(int k=0; k<=((maior*coluna)+coluna); k++)
                {
                    cout<<"-";

                }
                cout<<endl;

            }
            break;

        case 3:
            cout<<endl<<" Diagonal Principal (triângulo inferior preenchido)"<<endl<<endl;
            for(int k=0; k<=((maior*coluna)+coluna); k++)
            {
                cout<<"-";

            }
            cout<<endl;
            for(int i=0; i<linha; i++)
            {
                for(int j=0; j<coluna; j++)
                {
                    if(i==j||i>j)
                    {
                        cout<<"|"<< setw(maior)<<matriz[i][j];
                    }
                    else if(i!=j)
                    {
                        cout<<"|"<<setw(maior+1);
                    }
                }
                cout<<"|"<<endl;
                for(int k=0; k<=((maior*coluna)+coluna); k++)
                {
                    cout<<"-";

                }
                cout<<endl;

            }
            break;
        case 4:
            cout<<endl<<" Diagonal Principal (triângulo superior preenchido exceto a diagonal)"<<endl<<endl;
            for(int k=0; k<=((maior*coluna)+coluna); k++)
            {
                cout<<"-";

            }
            cout<<endl;
            for(int i=0; i<linha; i++)
            {
                for(int j=0; j<coluna; j++)
                {
                    if(j>i)
                    {
                        cout<<"|"<< setw(maior)<<matriz[i][j];
                    }
                    else if(i==j||i>j)
                    {
                        cout<<"|"<<setw(maior+1);
                    }
                }
                cout<<"|"<<endl;
                for(int k=0; k<=((maior*coluna)+coluna); k++)
                {
                    cout<<"-";

                }
                cout<<endl;

            }
            break;
        case 5:
            posicao=coluna-1;
            cout<<endl<<" Diagonal secundaria"<<endl<<endl;
            for(int k=0; k<=((maior*coluna)+coluna); k++)
            {
                cout<<"-";

            }
            cout<<endl;
            for(int i=0; i<linha; i++)
            {
                for(int j=0; j<coluna; j++)
                {
                    if(j==posicao)
                    {
                        cout<<"|"<< setw(maior)<<matriz[i][j];
                    }
                    else
                    {
                        cout<<"|"<<setw(maior+1);
                    }
                }
                cout<<"|"<<endl;
                for(int k=0; k<=((maior*coluna)+coluna); k++)
                {
                    cout<<"-";

                }
                cout<<endl;
                posicao--;
            }
            break;
        case 6:
            cout<<endl<<" Diagonal secundaria (triângulo inferior preenchido)"<<endl<<endl;
            for(int k=0; k<=((maior*coluna)+coluna); k++)
            {
                cout<<"-";

            }
            cout<<endl;
            for(int i=0; i<linha; i++)
            {
                for(int j=0; j<coluna; j++)
                {
                    if((1+i)+(1+j)>linha+1||(1+i)+(1+j)==linha+1)
                    {
                        cout<<"|"<< setw(maior)<<matriz[i][j];
                    }
                    else
                    {
                        cout<<"|"<<setw(maior+1);
                    }
                }
                cout<<"|"<<endl;
                for(int k=0; k<=((maior*coluna)+coluna); k++)
                {
                    cout<<"-";

                }
                cout<<endl;
                posicao--;
            }
            break;
        case 7:
            cout<<endl<<" Diagonal secundaria (triângulo superior preenchido)"<<endl<<endl;
            for(int k=0; k<=((maior*coluna)+coluna); k++)
            {
                cout<<"-";

            }
            cout<<endl;
            for(int i=0; i<linha; i++)
            {
                for(int j=0; j<coluna; j++)
                {
                    if((1+i)+(1+j)<linha+1||(1+i)+(1+j)==linha+1)
                    {
                        cout<<"|"<< setw(maior)<<matriz[i][j];
                    }
                    else
                    {
                        cout<<"|"<<setw(maior+1);
                    }
                }
                cout<<"|"<<endl;
                for(int k=0; k<=((maior*coluna)+coluna); k++)
                {
                    cout<<"-";

                }
                cout<<endl;
            }
            break;
             case 8:posicao=coluna-1;
            cout<<endl<<" As duas Diagonais"<<endl<<endl;
            for(int k=0; k<=((maior*coluna)+coluna); k++)
            {
                cout<<"-";

            }
            cout<<endl;
            for(int i=0; i<linha; i++)
            {
                for(int j=0; j<coluna; j++)
                {
                    if(j==i || (i+j==posicao))
                    {
                        cout<<"|"<< setw(maior)<<matriz[i][j];
                    }
                    else
                    {
                        cout<<"|"<<setw(maior+1);
                    }
                }
                cout<<"|"<<endl;
                for(int k=0; k<=((maior*coluna)+coluna); k++)
                {
                    cout<<"-";

                }
                cout<<endl;
            }
            break;
                 case 9:posicao=0;
            cout<<endl<<" Bordas "<<endl<<endl;
            for(int k=0; k<=((maior*coluna)+coluna); k++)
            {
                cout<<"-";

            }
            cout<<endl;
            for(int i=0; i<linha; i++)
            {
                for(int j=0; j<coluna; j++)
                {
                    if(j==0||j==coluna-1||i==0||i==linha-1)
                    {
                        cout<<"|"<< setw(maior)<<matriz[i][j];
                    }
                    else
                    {
                        cout<<"|"<<setw(maior+1);
                    }posicao++;
                }
                cout<<"|"<<endl;
                for(int k=0; k<=((maior*coluna)+coluna); k++)
                {
                    cout<<"-";

                }
                cout<<endl;
            }
            break;

        }
    }

}
