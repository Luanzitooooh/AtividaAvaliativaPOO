#include <iostream>
#include "classes.h"

using namespace std;

// QUADRADO
Quadrado::Quadrado(){
    this->Base = 0;
    this->Altura = 0;
}

void Quadrado::Inicializa(float x, float y){
    this->Base = x;
    this->Altura = y;
}

float Quadrado::getAltura(){
    return this->Altura;
}

float Quadrado::setAltura(float Altura){
    this->Altura = Altura;
}

float Quadrado::getBase(){
    return this->Base;
}

float Quadrado::setBase(float x){
    this->Base = x;
}

float Quadrado::getArea(){
    return this->AreaTotal;
}

float Quadrado::Area(float x, float y){
    this->AreaTotal = (x * y);
}

// TRIANGULO
TrianguloEquilatero::TrianguloEquilatero(){
    this->TamanhoLados = 0;
    this->Altura = 0;
}

void TrianguloEquilatero::Inicializa(float x, float y){
    this->TamanhoLados = x;
    this->Altura = y;
}

float TrianguloEquilatero::getTamanhoLados(){
    return this->TamanhoLados;
}

float TrianguloEquilatero::setTamanhoLados(float x){
    this->TamanhoLados = x;
}

float TrianguloEquilatero::getAltura(){
    return this->Altura;
}

void TrianguloEquilatero::setAltura(float y){
    this->Altura = y;
}

float TrianguloEquilatero::Area(float x, float y){
    this->AreaTotal = (x * y) / 2;
}

// CIRCULO
Circulo::Circulo(){
    this->Pi = 3.14;
    this->Raio = 0;
}

void Circulo::Inicializa(float x, float y){
    this->Pi = x;
    this->Raio = y;
}

float Circulo::getRaio(){
    return this->Raio;
}

void Circulo::setRaio(float x){
    this->Raio = x;
}

float Circulo::Area(float Raio, float Pi){
    this->AreaTotal = (Raio * Raio) * Pi;
}

Losango::Losango(){
    this->LadoMaior = 0;
    this->LadoMenor = 0;
}

void Losango::Inicializa(float x, float y){
    this->LadoMaior = x;
    this->LadoMenor = y;
}

void Losango::setLadoMaior(float x){
    this->LadoMaior = x;
}

float Losango::getLadoMaior(){
    return this->LadoMaior;
}

void Losango::setLadoMenor(float y){
    this->LadoMenor = y;
}

float Losango::getLadoMenor(){
    return this->LadoMenor;
}

float Losango::Area(float x, float y){
    this->AreaTotal = (x * y) / 2;
}

// CUBO
Cubo::Cubo(){
    this->Comprimento = 0;
}

void Cubo::Inicializa(float x){
    this->Base = x;
}

float Cubo::getComprimento(){
    return this->Comprimento;
}

void Cubo::setComprimento(float Comprimento){
    this->Comprimento = Comprimento;
}

float Cubo::Area(float Comprimento, float x, float y){
    Quadrado MeuQuadrado;
    MeuQuadrado.Inicializa(0, 0);
    this->AreaTotalCubo = (MeuQuadrado.Area(x, y) * 6);
}

// Cone
Cone::Cone(){
    this->Raio = 0;
    this->Altura = 0;
}

void Cone::Inicializa(float x, float y){
    this->Raio = x;
    this->Altura = y;
}

float Cone::getRaio(){
    return this->Raio;
}

void Cone::setRaio(float Raio){
    this->Raio = Raio;
}

float Cone::getAltura(){
    return this->Altura;
}

void Cone::setAltura(float Altura){
    this->Raio = Altura;
}

float Cone::Area(float Altura, float Raio, float Pi){
    Circulo MeuCirculo;
    MeuCirculo.Inicializa(Raio, Pi);

    this->AreaTotalCone = ((MeuCirculo.Area(Raio, Pi) * Altura) / 3);
}

// CILINDRO
Cilindro::Cilindro(){
    this->Raio = 0;
    this->Altura = 0;
}

void Cilindro::Inicializa(float x, float y){
    this->Raio = x;
    this->Altura = y;
}

void Cilindro::setRaio(float Raio){
    this->Raio = Raio;
}

float Cilindro::getRaio(){
    return this->Raio;
}

void Cilindro::setAltura(float Altura){
    this->Altura = Altura;
}

float Cilindro::getAltura(){
    return this->Altura;
}

float Cilindro::Area(float Raio, float Altura, float Pi){
    float AreaBase, AreaLateral;
    Circulo MeuCirculo;
    MeuCirculo.Inicializa(0, 0);

    AreaBase = MeuCirculo.Area(Raio, Pi);
    AreaLateral = (2 * Pi * Raio * Altura);

    return this->AreaTotalCilindro = (AreaBase + AreaLateral);
}
