#include <iostream>
#include <string>

using namespace std;

// Definição de uma estrutura para armazenar os dados da carta
struct Carta {
    string estado;
    string codigo;
    string nomeCidade;
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

// Função para comparar as cartas e determinar o vencedor
void compararCartas(Carta carta1, Carta carta2, int atributo) {
    // Atributo 1: População, Atributo 2: Área, Atributo 3: PIB, Atributo 4: Pontos turísticos
    switch (atributo) {
        case 1: // Comparar população
            if (carta1.populacao > carta2.populacao)
                cout << "A carta 1 venceu (população)" << endl;
            else if (carta1.populacao < carta2.populacao)
                cout << "A carta 2 venceu (população)" << endl;
            else
                cout << "Empate na população!" << endl;
            break;
        case 2: // Comparar área
            if (carta1.area > carta2.area)
                cout << "A carta 1 venceu (área)" << endl;
            else if (carta1.area < carta2.area)
                cout << "A carta 2 venceu (área)" << endl;
            else
                cout << "Empate na área!" << endl;
            break;
        case 3: // Comparar PIB
            if (carta1.pib > carta2.pib)
                cout << "A carta 1 venceu (PIB)" << endl;
            else if (carta1.pib < carta2.pib)
                cout << "A carta 2 venceu (PIB)" << endl;
            else
                cout << "Empate no PIB!" << endl;
            break;
        case 4: // Comparar pontos turísticos
            if (carta1.pontosTuristicos > carta2.pontosTuristicos)
                cout << "A carta 1 venceu (pontos turísticos)" << endl;
            else if (carta1.pontosTuristicos < carta2.pontosTuristicos)
                cout << "A carta 2 venceu (pontos turísticos)" << endl;
            else
                cout << "Empate nos pontos turísticos!" << endl;
            break;
        default:
            cout << "Atributo inválido!" << endl;
    }
}

// Nível Novato - Cadastro e Comparação Simples de Cartas
void nivelNovato() {
    // Cadastrar as cartas de duas cidades
    Carta carta1, carta2;
    
    cout << "Digite os dados da carta 1 (Cidade A):\n";
    cout << "Estado: "; cin >> carta1.estado;
    cout << "Código: "; cin >> carta1.codigo;
    cout << "Nome da Cidade: "; cin >> carta1.nomeCidade;
    cout << "População: "; cin >> carta1.populacao;
    cout << "Área (km²): "; cin >> carta1.area;
    cout << "PIB: "; cin >> carta1.pib;
    cout << "Pontos Turísticos: "; cin >> carta1.pontosTuristicos;
    
    cout << "Digite os dados da carta 2 (Cidade B):\n";
    cout << "Estado: "; cin >> carta2.estado;
    cout << "Código: "; cin >> carta2.codigo;
    cout << "Nome da Cidade: "; cin >> carta2.nomeCidade;
    cout << "População: "; cin >> carta2.populacao;
    cout << "Área (km²): "; cin >> carta2.area;
    cout << "PIB: "; cin >> carta2.pib;
    cout << "Pontos Turísticos: "; cin >> carta2.pontosTuristicos;

    // Comparar as cartas de acordo com o atributo (exemplo: população)
    int atributo;
    cout << "Escolha o atributo para comparar (1: População, 2: Área, 3: PIB, 4: Pontos Turísticos): ";
    cin >> atributo;

    // Comparação simples
    compararCartas(carta1, carta2, atributo);
}

// Nível Aventureiro - Menu Interativo e Comparação Aninhada
void nivelAventureiro() {
    Carta carta1, carta2;
    
    cout << "Digite os dados da carta 1 (Cidade A):\n";
    cout << "Estado: "; cin >> carta1.estado;
    cout << "Código: "; cin >> carta1.codigo;
    cout << "Nome da Cidade: "; cin >> carta1.nomeCidade;
    cout << "População: "; cin >> carta1.populacao;
    cout << "Área (km²): "; cin >> carta1.area;
    cout << "PIB: "; cin >> carta1.pib;
    cout << "Pontos Turísticos: "; cin >> carta1.pontosTuristicos;
    
    cout << "Digite os dados da carta 2 (Cidade B):\n";
    cout << "Estado: "; cin >> carta2.estado;
    cout << "Código: "; cin >> carta2.codigo;
    cout << "Nome da Cidade: "; cin >> carta2.nomeCidade;
    cout << "População: "; cin >> carta2.populacao;
    cout << "Área (km²): "; cin >> carta2.area;
    cout << "PIB: "; cin >> carta2.pib;
    cout << "Pontos Turísticos: "; cin >> carta2.pontosTuristicos;

    int atributo;
    do {
        cout << "\nEscolha o atributo para comparar:\n";
        cout << "1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n0. Sair\n";
        cout << "Sua escolha: ";
        cin >> atributo;

        if (atributo != 0) {
            compararCartas(carta1, carta2, atributo);
        }

    } while (atributo != 0);
}

// Nível Mestre - Comparação com Dois Atributos e Operadores Ternários
void nivelMestre() {
    Carta carta1, carta2;
    
    cout << "Digite os dados da carta 1 (Cidade A):\n";
    cout << "Estado: "; cin >> carta1.estado;
    cout << "Código: "; cin >> carta1.codigo;
    cout << "Nome da Cidade: "; cin >> carta1.nomeCidade;
    cout << "População: "; cin >> carta1.populacao;
    cout << "Área (km²): "; cin >> carta1.area;
    cout << "PIB: "; cin >> carta1.pib;
    cout << "Pontos Turísticos: "; cin >> carta1.pontosTuristicos;
    
    cout << "Digite os dados da carta 2 (Cidade B):\n";
    cout << "Estado: "; cin >> carta2.estado;
    cout << "Código: "; cin >> carta2.codigo;
    cout << "Nome da Cidade: "; cin >> carta2.nomeCidade;
    cout << "População: "; cin >> carta2.populacao;
    cout << "Área (km²): "; cin >> carta2.area;
    cout << "PIB: "; cin >> carta2.pib;
    cout << "Pontos Turísticos: "; cin >> carta2.pontosTuristicos;

    int atributo1, atributo2;
    cout << "\nEscolha dois atributos para comparar:\n";
    cout << "1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n";
    cout << "Escolha o primeiro atributo: ";
    cin >> atributo1;
    cout << "Escolha o segundo atributo: ";
    cin >> atributo2;

    // Comparação com dois atributos usando ternários
    cout << "Resultado da comparação:\n";
    cout << (atributo1 == 1 ? (carta1.populacao > carta2.populacao ? "Carta 1 venceu na População" : "Carta 2 venceu na População") :
           atributo1 == 2 ? (carta1.area > carta2.area ? "Carta 1 venceu na Área" : "Carta 2 venceu na Área") :
           atributo1 == 3 ? (carta1.pib > carta2.pib ? "Carta 1 venceu no PIB" : "Carta 2 venceu no PIB") :
           "Erro na escolha do atributo 1") << endl;

    cout << (atributo2 == 1 ? (carta1.populacao > carta2.populacao ? "Carta 1 venceu na População" : "Carta 2 venceu na População") :
           atributo2 == 2 ? (carta1.area > carta2.area ? "Carta 1 venceu na Área" : "Carta 2 venceu na Área") :
           atributo2 == 3 ? (carta1.pib > carta2.pib ? "Carta 1 venceu no PIB" : "Carta 2 venceu no PIB") :
           "Erro na escolha do atributo 2") << endl;
}

// Função principal para o controle do menu
int main() {
    int nivel;
    cout << "Escolha o nível (1 - Novato, 2 - Aventureiro, 3 - Mestre): ";
    cin >> nivel;

    switch (nivel) {
        case 1:
            nivelNovato();
            break;
        case 2:
            nivelAventureiro();
            break;
        case 3:
            nivelMestre();
            break;
        default:
            cout << "Opção inválida!" << endl;
    }
    return 0;
}
