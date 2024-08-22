#include <iostream>
using namespace std;

int main() {
  char tabuleiro[3][3];

  cout << "Digite o tabuleiro de jogo da velha (use 'X', 'O' e '-'(espaços sem nada): \n";
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> tabuleiro[i][j];
    }
  }

  for (int i = 0; i < 3; i++) {
    if (tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][2] == '-' &&
        tabuleiro[i][0] != '-') {
      cout << "Jogue na posição [" << i + 1 << "][3]" << endl;
      return 0;
    }
    if (tabuleiro[i][1] == tabuleiro[i][2] && tabuleiro[i][0] == '-' &&
        tabuleiro[i][1] != '-') {
      cout << "Jogue na posição [" << i + 1 << "][1]" << endl;
      return 0;
    }
    if (tabuleiro[i][0] == tabuleiro[i][2] && tabuleiro[i][1] == '-' &&
        tabuleiro[i][0] != '-') {
      cout << "Jogue na posição [" << i + 1 << "][2]" << endl;
      return 0;
    }

    if (tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[2][i] == '-' &&
        tabuleiro[0][i] != '-') {
      cout << "Jogue na posição [3][" << i + 1 << "]" << endl;
      return 0;
    }
    if (tabuleiro[1][i] == tabuleiro[2][i] && tabuleiro[0][i] == '-' &&
        tabuleiro[1][i] != '-') {
      cout << "Jogue na posição [1][" << i + 1 << "]" << endl;
      return 0;
    }
    if (tabuleiro[0][i] == tabuleiro[2][i] && tabuleiro[1][i] == '-' &&
        tabuleiro[0][i] != '-') {
      cout << "Jogue na posição [2][" << i + 1 << "]" << endl;
      return 0;
    }
  }

  if (tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[2][2] == '-' &&
      tabuleiro[0][0] != '-') {
    cout << "Jogue na posição [3][3]" << endl;
    return 0;
  }
  if (tabuleiro[1][1] == tabuleiro[2][2] && tabuleiro[0][0] == '-' &&
      tabuleiro[1][1] != '-') {
    cout << "Jogue na posição [1][1]" << endl;
    return 0;
  }
  if (tabuleiro[0][0] == tabuleiro[2][2] && tabuleiro[1][1] == '-' &&
      tabuleiro[0][0] != '-') {
    cout << "Jogue na posição [2][2]" << endl;
    return 0;
  }

  if (tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[2][0] == '-' &&
      tabuleiro[0][2] != '-') {
    cout << "Jogue na posição [3][1]" << endl;
    return 0;
  }
  if (tabuleiro[1][1] == tabuleiro[2][0] && tabuleiro[0][2] == '-' &&
      tabuleiro[1][1] != '-') {
    cout << "Jogue na posição [1][3]" << endl;
    return 0;
  }
  if (tabuleiro[0][2] == tabuleiro[2][0] && tabuleiro[1][1] == '-' &&
      tabuleiro[0][2] != '-') {
    cout << "Jogue na posição [2][2]" << endl;
    return 0;
  }

  cout << "Nenhuma jogada vencedora ou bloqueadora encontrada." << endl;

  return 0;
}
