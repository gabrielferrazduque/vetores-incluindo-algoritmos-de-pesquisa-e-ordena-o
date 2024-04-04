#include <stdio.h>   
#include<math.h>
#include <stdio.h> 
#include<stdlib.h>
#include <stdio.h>
#include<string.h> 
#include<stdbool.h> 

int main() {
    int vetor[5] = {10, 5, 7, 3, 2};
    // Agora vetor contém: {10, 5, 7, 3, 2} 
    return 0;   

int main() {
    int vetor[5] = {10, 5, 7, 3, 2};
    // Agora vetor contém: {10, 5, 7, 3, 2} 

    int pesquisa_linear(int *vetor, int tamanho, int valor) {
  for (int i = 0; i < tamanho; i++) {
    if (vetor[i] == valor) {
      return i; // Retorna a posição do valor
    }
  }
  return -1; // Valor não encontrado
}
    return 0;

tipo_de_dado nome_do_vetor[tamanho];

int numeros[10]; // Vetor de 10 inteiros
umeros[0] = 5; // Armazena 5 na primeira posição
int valor = numeros[2]; // Lê o valor da terceira posição 

nt pesquisa_binaria(int *vetor, int tamanho, int valor) {
  int inicio = 0, fim = tamanho - 1;
  while (inicio <= fim) {
    int meio = (inicio + fim) / 2;
    if (vetor[meio] == valor) {
      return meio; // Retorna a posição do valor
    } else if (valor < vetor[meio]) {
      fim = meio - 1;
    } else {
      inicio = meio + 1;
    } else
int main() {
  int numeros[5] = {3, 1, 4, 5, 2};

  // Pesquisa linear
  int posicao = pesquisa_linear(numeros, 5, 4);
  if (posicao != -1) {
    printf("Valor encontrado na posição %d\n", posicao);
  } else {
    printf("Valor não encontrado\n");
  }

  // Ordenação por seleção
  selection_sort(numeros, 5);

  // Imprimir vetor ordenado
  for (int i = 0; i < 5; i++) {



  }
  return -1; // Valor não encontrado
}
void bubble_sort(int *vetor, int tamanho) {
  for (int i = 0; i < tamanho - 1; i++) {
    for (int j = 0; j < tamanho - i - 1; j++) {
      if (vetor[j] > vetor[j + 1]) {
        int temp = vetor[j];
        vetor[j] = vetor[j + 1];
        vetor[j + 1] = temp;
      }
    } else  

    oid selection_sort(int *vetor, int tamanho) {
  for (int i = 0; i < tamanho - 1; i++) {
    int menor = i;
    for (int j = i + 1; j < tamanho; j++) {
      if (vetor[j] < vetor[menor]) {
        menor = j;
      }
    }
    int temp = vetor[i];
    vetor[i] = vetor[menor];
    vetor[menor] = temp;
  }
}
  }
}



// Função de pesquisa linear
int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;  // Elemento encontrado, retorna o índice
        }
    }
    return -1;  // Elemento não encontrado
}

int main() {
    int arr[] = {2, 5, 8, 12, 16};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 12;
    int result = linearSearch(arr, n, x);
    if (result == -1) {
        printf("Elemento não encontrado\n");
    } else {
        printf("Elemento encontrado no índice %d\n", result);
    }
    return 0; 

    #include <stdio.h>

void bubbleSort(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                // Troca os elementos se estiverem fora de ordem
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

int main() {
    int vetor[5] = {10, 5, 7, 3, 2};
    int tamanho = 5;
    
    printf("Vetor original: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    bubbleSort(vetor, tamanho);

    printf("Vetor ordenado: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
}

