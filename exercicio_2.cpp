#include <iostream>
#include <cstdlib>

using namespace std;
class Sapo {

private:
  string nome;
  int identificador;
  int distanciaPercorrida;
  int quantidadePulosDados;
  int quantidadeProvasDisputadas;
  int vitorias;
  int empates;
  int quantidadeTotalPulosDados;
  int maxPulo;

public:
  static int distanciaTotalCorrida;

  Sapo(string n, int id, int m) : nome(n), identificador(id), maxPulo(m) {
    distanciaPercorrida = 0;
    quantidadePulosDados = 0;
    quantidadeProvasDisputadas = 0;
    vitorias = 0;
    empates = 0;
    quantidadeTotalPulosDados = 0;
  }

  void Pular() {
    int pulo = rand() % maxPulo + 1;
    distanciaPercorrida += pulo;
    distanciaTotalCorrida += pulo;
    quantidadePulosDados++;
    quantidadeTotalPulosDados++;
  }

  string getNome() { return nome; }
  int getIdentificador() { return identificador; }
  int getDistanciaPercorrida() { return distanciaPercorrida; }
  int getQuantidadePulosDados() { return quantidadePulosDados; }
  int getQuantidadeProvasDisputadas() { return quantidadeProvasDisputadas; }
  int getVitorias() { return vitorias; }
  int getEmpates() { return empates; }
  int getQuantidadeTotalPulosDados() { return quantidadeTotalPulosDados; }

  void setNome(const string &n) { nome = n; }
  void setIdentificador(int id) { identificador = id; }
  void setDistanciaPercorrida(int distancia) {
    distanciaPercorrida = distancia;
  }
  void setQuantidadePulosDados(int quantidade) {
    quantidadePulosDados = quantidade;
  }
  void setQuantidadeProvasDisputadas(int quantidade) {
    quantidadeProvasDisputadas = quantidade;
  }
  void setVitorias(int v) { vitorias = v; }
  void setEmpates(int e) { empates = e; }
  void setQuantidadeTotalPulosDados(int quantidade) {
    quantidadeTotalPulosDados = quantidade;
  }
  void setMaxPulo(int m) { maxPulo = m; }

  static int getDistanciaTotalCorrida() { return distanciaTotalCorrida; }
};

int Sapo::distanciaTotalCorrida = 0;

int main() {
  Sapo sapo1("Azul", 1, 10);
  Sapo sapo2("Laranja", 2, 10);
  Sapo sapo3("Preto", 3, 10);

  for(int i = 0; i < 10; i++){
    sapo1.Pular();
    sapo2.Pular();
    sapo3.Pular();
  }

  cout << "Sapo 1: Nome = " << sapo1.getNome()
       << ", Identificador = " << sapo1.getIdentificador()
       << ", Distância Percorrida = " << sapo1.getDistanciaPercorrida()
       << ", Quantidade de Pulos = " << sapo1.getQuantidadePulosDados() << endl;

  cout << "Sapo 2: Nome = " << sapo2.getNome()
       << ", Identificador = " << sapo2.getIdentificador()
       << ", Distância Percorrida = " << sapo2.getDistanciaPercorrida()
       << ", Quantidade de Pulos = " << sapo2.getQuantidadePulosDados() << endl;

  cout << "Sapo 3: Nome = " << sapo3.getNome()
       << ", Identificador = " << sapo3.getIdentificador()
       << ", Distância Percorrida = " << sapo3.getDistanciaPercorrida()
       << ", Quantidade de Pulos = " << sapo3.getQuantidadePulosDados() << endl;
}