#include <iostream>
#include "classes.h"

using namespace std;

int main(){
    int Opcao;
    cout<<"Selecione uma opcao para calculo de formas geometricas!" << "\n 1 - Quadrado" << "\n 2 - Triangulo Equilatero"<< "\n 3 - Circulo" << "\n 4 - Losango"
        "\n 5 - Cubo" << "\n 6 - Cone" << "\n 7 - Cilindro" << "\n 8 - Sair\n"<<endl;
    cin>>Opcao;

    switch (Opcao){
        case 1:{
            float Base = 0, Altura = 0;
            Quadrado MeuQuadrado;
            MeuQuadrado.Inicializa(0, 0);

            cout<<"\nInsira o valor da base do seu quadrado: ";
            cin>>Base;
            MeuQuadrado.setBase(Base);
            cout<<"Insira o valor da altura do seu quadrado: ";
            cin>>Altura;
            MeuQuadrado.setAltura(Altura);

            cout<<"\nO valor da Altura do seu quadrado eh "<<MeuQuadrado.getAltura()<<endl;
            cout<<"O valor da Base do seu quadrado eh " <<MeuQuadrado.getBase()<<endl;
            cout<<"Sendo assim a Area total do seu quadrado eh " <<MeuQuadrado.Area(Base, Altura)<<endl;
            break;
        }

        case 2:{
            float TamanhoLados = 0, Altura = 0;

            TrianguloEquilatero MeuTriangulo;
            MeuTriangulo.Inicializa(0, 0);

            cout<<"\nInsira o tamanho dos lados do Triangulo Equilatero: ";
            cin>>TamanhoLados;
            MeuTriangulo.setTamanhoLados(TamanhoLados);
            cout<<"Insira o tamanho da Altura do Triangulo Equilatero: ";
            cin>>Altura;
            MeuTriangulo.setAltura(Altura);

            cout<<"\nA altura do seu triangulo eh "<<MeuTriangulo.getAltura()<<endl;
            cout<<"O tamanho dos lados do seu triangulo eh "<<MeuTriangulo.getTamanhoLados()<<endl;
            cout<<"Sendo assim a area total do seu Triangulo Equilatero eh "<<MeuTriangulo.Area(TamanhoLados, Altura)<<endl;
            break;
        }

        case 3:{
            float Raio = 0, Pi = 3.14159;
            Circulo MeuCirculo;
            MeuCirculo.Inicializa(Pi, 0);

            cout<<"\nInsira o tamanho do raio do circulo: ";
            cin>>Raio;
            MeuCirculo.setRaio(Raio);

            cout<<"\nO raio do seu Circulo eh "<<MeuCirculo.getRaio()<<endl;
            cout<<"Sendo assim a area total do seu Circulo eh "<<MeuCirculo.Area(Raio, Pi);
            break;
        }

        case 4:{
            float LadoMaior, LadoMenor, AreaTotal;
            Losango MeuLosango;
            MeuLosango.Inicializa(0, 0);

            cout<<"\nInsira o tamanho do lado Maior do Losango: ";
            cin>>LadoMaior;
            MeuLosango.setLadoMaior(LadoMaior);
            cout<<"Insira o tamanho do lado Menor do Losango: ";
            cin>>LadoMenor;
            MeuLosango.setLadoMenor(LadoMenor);

            cout<<"\nO tamanho dos lados Maiores sao "<<MeuLosango.getLadoMaior()<<endl;
            cout<<"O tamanho dos lados Menores sao "<<MeuLosango.getLadoMenor()<<endl;
            cout<<"Sendo assim a area total do seu losango eh "<<MeuLosango.Area(LadoMaior, LadoMenor)<<endl;
            break;
        }

        case 5:{
            float Comprimento, Largura, Altura;

            Cubo MeuCubo;
            MeuCubo.Inicializa(0);

            cout<<"\nInsira o tamanho do comprimento do seu Cubo: ";
            cin>>Comprimento;
            MeuCubo.setComprimento(Comprimento);

            cout<<"Insira a largura de um lado do seu Cubo: ";
            cin>>Largura;

            cout<<"Insira a altura de um lado do seu Cubo: ";
            cin>>Altura;

            cout<<"\nSendo assim a area total do cubo eh "<<MeuCubo.Area(MeuCubo.getComprimento(), Largura, Altura)<<endl;
            break;
        }

        case 6:{
            float Altura, Raio, Pi = 3.14159;

            Cone MeuCone;
            MeuCone.Inicializa(0, 0);

            cout<<"\nInforme a altura do seu Cone: ";
            cin>>Altura;
            MeuCone.setAltura(Altura);

            cout<<"Informe o raio da base do seu Cone: ";
            cin>>Raio;
            MeuCone.setRaio(Raio);

            cout<<"\nSendo assim a area total do seu Cone eh "<<MeuCone.Area(Altura, Raio, Pi)<<endl;
            break;
        }

        case 7:{
            float Raio, Altura, Pi = 3.14159;

            Cilindro MeuCilindro;
            MeuCilindro.Inicializa(0, 0);

            cout<<"\nInforme a Altura do seu Cilindro: ";
            cin>>Altura;

            cout<<"Informe o Raio da Base superior e inferior do seu Cilindro: ";
            cin>>Raio;

            cout<<"\nSendo assim a area total do seu cilindro eh "<<MeuCilindro.Area(Raio, Altura, Pi)<<endl;
        }

        case 8:
            break;
    }
    return 0;
}
