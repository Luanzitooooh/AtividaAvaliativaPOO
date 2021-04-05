#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

#include <iostream>

using namespace std;

class Quadrado{
private:
    float AreaTotal;

protected:
    float Base, Altura;

public:
    Quadrado();
    void Inicializa(float Base, float Altura);
    float getBase();
    float setBase(float Base);
    float getAltura();
    float setAltura(float Altura);
    float getArea();
    float Area(float x, float y);
};

class Cubo: public Quadrado{
private:
    float AreaTotalCubo;

protected:
    float Comprimento;

public:
    Cubo();
    void Inicializa(float Area);
    float getComprimento();
    void setComprimento(float Comprimento);
    float getArea();
    float Area(float Comprimento, float x, float y);
};

class TrianguloEquilatero{
private:
    float TamanhoLados, AreaTotal, Altura;

public:
    TrianguloEquilatero();
    void Inicializa(float TamanhoLados, float Altura);
    float getTamanhoLados();
    float setTamanhoLados(float TamanhoLados);
    float getAltura();
    void setAltura(float Altura);
    float Area(float x, float y);
};

class Circulo{
private:
    float Pi, AreaTotal;

protected:
    float Raio;

public:
    Circulo();
    void Inicializa(float Raio, float Pi);
    float getRaio();
    void setRaio(float Raio);
    float Area(float Raio, float Pi);
};

class Cone: public Circulo{
private:
    float AreaTotalCone;

protected:
    float Raio, Altura;

public:
    Cone();
    void Inicializa(float Raio, float Altura);
    float getAltura();
    void setAltura(float Altura);
    float getRaio();
    void setRaio(float Raio);
    float Area(float Raio, float Altura, float Pi);
};

class Cilindro: public Circulo{
private:
    float AreaTotalCilindro;

protected:
    float Raio, Altura;

public:
    Cilindro();
    void Inicializa(float Raio, float Altura);
    float getRaio();
    void setRaio(float Raio);
    float getAltura();
    void setAltura(float Altura);
    float Area(float Raio, float Altura, float Pi);
};

class Losango{
private:
    float LadoMaior, LadoMenor, AreaTotal;

public:
    Losango();
    void Inicializa(float LadoMaior, float LadoMenor);
    float getLadoMaior();
    void setLadoMaior(float LadoMaior);
    float getLadoMenor();
    void setLadoMenor(float LadoMenor);
    float Area(float LadoMaior, float LadoMenor);
};


#endif // CLASSES_H_INCLUDED
