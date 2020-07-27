#include<iostream>
#include<string>
#include<stdlib.h>
#include<sstream>
#include<iomanip>

using namespace std;

int escreveMenu()
{
    int menu = 0;
    cout<<" MENU "<<endl<<endl;
    cout<<" como deseja imprimir a matriz ? "<<endl;
    cout<<" 1) Inteira "<<endl;
    cout<<" 2) Diagonal Principal "<<endl;
    cout<<" 3) Diagonal Principal (triangulo inferior preenchido)"<<endl;
    cout<<" 4) Diagonal Principal (triangulo superior preenchido exceto a diagonal)"<<endl;
    cout<<" 5) Diagonal Secundaria "<<endl;
    cout<<" 6) Diagonal Secundaria (triangulo inferior preenchido)"<<endl;
    cout<<" 7) Diagonal Secundaria (triangulo superior preenchido)"<<endl;
    cout<<" 8) As duas Diagonais"<<endl;
    cout<<" 9) Bordas"<<endl;
    cout<<" 0) Sair"<<endl;

    return menu;
}

int main()
{
    int matriz[100][100];
    int linha,coluna,menu;
    int temp;
    int maior=0;
    int tamanho;

    cout<<"numero de linhas: ";
    cin>>linha;
    system("cls");

    cout<<"numero de colunas: ";
    cin>>coluna;
    system("cls");



    for(int i=0; i <= linha; i++)
    {
        for(int j=0; j <= coluna; j++)
        {
            temp = rand();

            if( temp < 0 )
            {
                temp = temp * -1;
            }
            matriz[i][j] = temp;

           /*achando a quantidade de caracter*/
            stringstream ss;
            ss << matriz[i][j];
            string tamanho = ss.str();

            if(tamanho.length()> maior)
            {
                maior=tamanho.length();
            }
        }
    }
    escreveMenu();
    cout<<endl;
    cout<<" Matriz "<<linha<<" x "<<coluna<<endl<<endl;

    while(menu!=0)
    {
        cout<<"escolha a opcao: ";
        cin>>menu;

        switch(menu)
        {
            case 1:
            {
                for(int k=0;k<=(maior*coluna)+coluna;k++)
                {
                    cout<<"-";
                }
                cout<<endl;
                for(int i=0;i<linha;i++)
                {
                    for(int j=0;j<coluna;j++)
                    {
                        cout<<"|"<<setfill(' ')<<setw(maior)<<matriz[i][j];
                    }
                    cout<<"|";
                    cout<<endl;
                for(int k=0;k<=(maior*coluna)+coluna;k++)
                {
                    cout<<"-";
                }
                cout<<endl;
                }
            }
            break;
            case 2:
            {
                for(int k=0;k<=(maior*coluna)+coluna;k++)
                {
                    cout<<"-";
                }
                cout<<endl;
                for(int i=0;i<linha;i++)
                {
                    for(int j=0;j<coluna;j++)
                    {
                        if(i==j)
                        {
                        cout<<"|"<<setfill(' ')<<setw(maior)<<matriz[i][j];
                        }
                        else if(i!=j)
                        {
                        cout<<"|"<<setfill(' ')<<setw(maior)<<" ";
                        }
                    }
                    cout<<"|";
                    cout<<endl;
                for(int k=0;k<=(maior*coluna)+coluna;k++)
                {
                    cout<<"-";
                }
                cout<<endl;
                }
            }
            break;
            case 3:
            {
                for(int k=0;k<=(maior*coluna)+coluna;k++)
                {
                    cout<<"-";
                }
                cout<<endl;
                for(int i=0;i<linha;i++)
                {
                    for(int j=0;j<coluna;j++)
                    {
                        if(i>=j)
                        {
                        cout<<"|"<<setfill(' ')<<setw(maior)<<matriz[i][j];
                        }
                        else if(i<j)
                        {
                        cout<<"|"<<setfill(' ')<<setw(maior)<<" ";
                        }
                    }
                    cout<<"|";
                    cout<<endl;
                for(int k=0;k<=(maior*coluna)+coluna;k++)
                {
                    cout<<"-";
                }
                cout<<endl;
                }
            }
            break;
            case 4:
            {
                    for(int k=0;k<=(maior*coluna)+coluna;k++)
                {
                    cout<<"-";
                }
                cout<<endl;
                for(int i=0;i<linha;i++)
                {
                    for(int j=0;j<coluna;j++)
                    {
                        if(i<j)
                        {
                        cout<<"|"<<setfill(' ')<<setw(maior)<<matriz[i][j];
                        }
                        else if(i>=j)
                        {
                        cout<<"|"<<setfill(' ')<<setw(maior)<<" ";
                        }
                    }
                    cout<<"|";
                    cout<<endl;
                for(int k=0;k<=(maior*coluna)+coluna;k++)
                {
                    cout<<"-";
                }
                cout<<endl;
                }
            }
            break;
            case 5:
            {
                for(int k=0;k<=(maior*coluna)+coluna;k++)
                {
                    cout<<"-";
                }
                cout<<endl;
                for(int i=0;i<linha;i++)
                {
                    for(int j=0;j<coluna;j++)
                    {
                        if(i+j==linha-1)
                        {
                        cout<<"|"<<setfill(' ')<<setw(maior)<<matriz[i][j];
                        }
                        else if(i+j!=linha-1)
                        {
                        cout<<"|"<<setfill(' ')<<setw(maior)<<" ";
                        }
                    }
                    cout<<"|";
                    cout<<endl;
                for(int k=0;k<=(maior*coluna)+coluna;k++)
                {
                    cout<<"-";
                }
                cout<<endl;
                }
            }
            break;
            case 6:
             {
                 for(int k=0;k<=(maior*coluna)+coluna;k++)
                {
                    cout<<"-";
                }
                cout<<endl;
                for(int i=0;i<linha;i++)
                {
                    for(int j=0;j<coluna;j++)
                    {
                        if(i+j>=linha-1)
                        {
                        cout<<"|"<<setfill(' ')<<setw(maior)<<matriz[i][j];
                        }
                        else if (i+j<linha-1)
                        {
                        cout<<"|"<<setfill(' ')<<setw(maior)<<" ";
                        }
                    }
                    cout<<"|";
                    cout<<endl;
                for(int k=0;k<=(maior*coluna)+coluna;k++)
                {
                    cout<<"-";
                }
                cout<<endl;
                }
            }
            break;
            case 7:
            {
                 for(int k=0;k<=(maior*coluna)+coluna;k++)
                {
                    cout<<"-";
                }
                cout<<endl;
                for(int i=0;i<linha;i++)
                {
                    for(int j=0;j<coluna;j++)
                    {
                        if(i+j<=linha-1)
                        {
                        cout<<"|"<<setfill(' ')<<setw(maior)<<matriz[i][j];
                        }
                        else if(i+j>linha-1)
                        {
                        cout<<"|"<<setfill(' ')<<setw(maior)<<" ";
                        }
                    }
                    cout<<"|";
                    cout<<endl;
                for(int k=0;k<=(maior*coluna)+coluna;k++)
                {
                    cout<<"-";
                }
                cout<<endl;
                }
            }
            break;
            case 8:
            {
                 for(int k=0;k<=(maior*coluna)+coluna;k++)
                {
                    cout<<"-";
                }
                cout<<endl;
                for(int i=0;i<linha;i++)
                {
                    for(int j=0;j<coluna;j++)
                    {
                        if(i+j==linha-1||i==j)
                        {
                        cout<<"|"<<setfill(' ')<<setw(maior)<<matriz[i][j];
                        }
                        else if (i+j!=linha-1 || i!=j)
                        {
                        cout<<"|"<<setfill(' ')<<setw(maior)<<" ";
                        }
                    }
                    cout<<"|";
                    cout<<endl;
                for(int k=0;k<=(maior*coluna)+coluna;k++)
                {
                    cout<<"-";
                }
                cout<<endl;
                }
            }
            break;
            case 9:
            {
                 {
                 for(int k=0;k<=(maior*coluna)+coluna;k++)
                {
                    cout<<"-";
                }
                cout<<endl;
                for(int i=0;i<linha;i++)
                {
                    for(int j=0;j<coluna;j++)
                    {
                        if(i==0 || j==0 || i==linha-1 || j==coluna-1)
                        {
                        cout<<"|"<<setfill(' ')<<setw(maior)<<matriz[i][j];
                        }
                        else if (i!=0 || j!=0 || i!=linha-1 || j!=coluna-1)
                        {
                        cout<<"|"<<setfill(' ')<<setw(maior)<<" ";
                        }
                    }
                    cout<<"|";
                    cout<<endl;
                for(int k=0;k<=(maior*coluna)+coluna;k++)
                {
                    cout<<"-";
                }
                cout<<endl;
                }
            }
            }
            break;
            /*
            case 100320:
            {
                     for(int k=0;k<=(maior*coluna)+coluna;k++)
                {
                    cout<<"-";
                }
                cout<<endl;
                for(int i=0;i<linha;i++)
                {
                    for(int j=0;j<coluna;j++)
                    {
                        if((i==0&&j==2)||(i==0&&j==3))
                        {cout<<"|"<<setfill(' ')<<setw(maior)<<matriz[i][j];}
                        else if((i==0&&j==4)||(i==0&&j==8))
                        {cout<<"|"<<setfill(' ')<<setw(maior)<<matriz[i][j];}
                        else if((i==0&&j==9)||(i==0&&j==10))
                        {cout<<"|"<<setfill(' ')<<setw(maior)<<matriz[i][j];}
                        else if((i==1&&j==1)||(i==1&&j==5))
                        {cout<<"|"<<setfill(' ')<<setw(maior)<<matriz[i][j];}
                        else if((i==1&&j==7)||(i==1&&j==11))
                        {cout<<"|"<<setfill(' ')<<setw(maior)<<matriz[i][j];}
                        else if((i==2&&j==0)||(i==2&&j==6))
                        {cout<<"|"<<setfill(' ')<<setw(maior)<<matriz[i][j];}
                        else  if((i==2&&j==12)||(i==3&&j==0))
                        {cout<<"|"<<setfill(' ')<<setw(maior)<<matriz[i][j];}
                        else if((i==3&&j==12)||(i==4&&j==0))
                        {cout<<"|"<<setfill(' ')<<setw(maior)<<matriz[i][j];}
                        else if((i==4&&j==12)||(i==5&&j==0))
                        {cout<<"|"<<setfill(' ')<<setw(maior)<<matriz[i][j];}
                        else  if((i==5&&j==12)||(i==6&&j=1))
                        {cout<<"|"<<setfill(' ')<<setw(maior)<<matriz[i][j];}
                        else if((i==6&&j==11)||(i==7&&j==2))
                        {cout<<"|"<<setfill(' ')<<setw(maior)<<matriz[i][j];}
                        else  if((i==7&&j==10)||(i==8&&j==3))
                        {cout<<"|"<<setfill(' ')<<setw(maior)<<matriz[i][j];}
                        else if((i==8&&j==9)||(i==9&&j==4))
                        {cout<<"|"<<setfill(' ')<<setw(maior)<<matriz[i][j];}
                        else  if((i==9&&j==8)||(i==10&&j==5))
                        {cout<<"|"<<setfill(' ')<<setw(maior)<<matriz[i][j];}
                        else if((i==10&&j==7)||(i==11&&j==6))
                        {cout<<"|"<<setfill(' ')<<setw(maior)<<matriz[i][j];}

                        else
                        {
                        cout<<"|"<<setfill(' ')<<setw(maior)<<" ";
                        }
                    }
                    cout<<"|";
                    cout<<endl;
                for(int k=0;k<=(maior*coluna)+coluna;k++)
                {
                    cout<<"-";
                }
                cout<<endl;
                }
            }*/

        }

    }
}
