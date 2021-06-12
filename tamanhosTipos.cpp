// Programa para mostar os tamanhos de cada tipo de variável em C++
// Útil para verificar em cada plataforma

#include <iostream>

using namespace std;

int main (int nargs, char *args []) {

// Tipos básicos
// Tipo caractere
  char c;

// Tipos inteiros
  int i;
  short int si;
  long int li;
  long long int lli;

// Tipos reais (ponto flutuante)
  float f;
  double d;
  long double ld;

// Um ponteiro (poderia ser para qualquer variável)
  int *ponteiro_i;

  cout << "Tamanho de char: " << sizeof (c) << endl;

  cout << "Tamanho de short int: " << sizeof (si) << endl;
  cout << "Tamanho de int: " << sizeof (i) << endl;
  cout << "Tamanho de long int: " << sizeof (li) << endl;
  cout << "Tamanho de long long int: " << sizeof (lli) << endl;

  cout << "Tamanho de float: " << sizeof (f) << endl;
  cout << "Tamanho de doble: " << sizeof (d) << endl;
  cout << "Tamanho de long double: " << sizeof (ld) << endl;

  cout << "Tamanho de ponteiro: " << sizeof (ponteiro_i) << endl;

} // main
