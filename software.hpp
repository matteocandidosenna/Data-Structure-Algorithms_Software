#ifndef SOFTWARE_H
#define SOFTWARE_H

#include<bits/stdc++.h>
using namespace std;

class Paciente{
    public:
    int id;
    int num_quarto;
    int idade;
    string nome;
    string diagnostico;

    // construtor
    Paciente();
};

class Clinica{
    private:
    int num_pacientes;
    vector<int, Paciente> quartos; // mapeia o número do quarto com o ID do paciente

    public:
    Clinica(int num_quartos);
    vector<int, Paciente>* getQuartos();
    int getNumPacientes();
    void addPaciente(int num_quarto, Paciente pct);
    void popPaciente(int num_quarto);
};

void showMenu(Clinica &clin); 
Paciente lerDadosPaciente(Paciente pac);
#endif
