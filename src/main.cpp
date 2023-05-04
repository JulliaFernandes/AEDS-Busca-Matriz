#include "lista.hpp"
#include "itemLista.hpp"
#include "itemMatriz.hpp"
#include "lista.hpp"
#include "funcoesArquivo.hpp"
#include "matrizRandomica.hpp"
#include "matrizLargura.hpp"

int main(){
    ofstream arquivoRandomica;
    int N, linha=0, coluna=0;
    Lista * lista;
    init(lista);

    arquivoRandomica.open("dataset/outputRandomica.data", ios::out);

    //Salvando informações presentes na primeria linha
    N = lerPrimeiraLinha();

    //Alocação da matriz
    itemMatriz** matriz=new itemMatriz*[N];
    for(int i = 0; i < N; i++){
        matriz[i]=new itemMatriz[N];
    }

    LerArquivo(matriz, N);
    cout << "TAM MATRIZ: " << N << endl;

    ImprimirMatriz(matriz, N);

    //PercorrerMatrizRandomica(matriz, linha, coluna, N, arquivoRandomica);
    PercorrerMatrizLargura(matriz, N, linha, coluna, lista);

    return 0;
}