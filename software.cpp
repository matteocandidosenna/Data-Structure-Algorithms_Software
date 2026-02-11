#include "software.hpp"

#include<bits/stdc++.h>
using namespace std;
// funcoes IO
void showMenu(Clinica &clin){
    cin.exceptions(istream::failbit);

    cout << "===Clinica-Hospicio do Dr. Caligari===" <<endl;
    cout << "Escolha uma opcao: " <<endl;
    cout << "1. Adicionar Paciente;" <<endl;
    cout << "2. Remover Paciente;" <<endl;
    cout << "3. Vizualizar pacientes;" <<endl;
    cout << "0. Sair" <<endl;

    int op;
    cin>>op;
    cout<<endl;

    switch(op){
        case 1:{
            int num_quarto;
            cout << "Informe o quarto em que deseja alocar o Paciente: ";
            cin>>num_quarto;
            cout<<endl;
            auto quartos = clin.getQuartos();
            
            
            Paciente pac;
            lerDadosPaciente(pac, clin, num_quarto);
            
        }
    }
}

Paciente lerDadosPaciente(Paciente pac, Clinica &clin, int num_quarto){
    pac.id = clin.getNumPacientes(); // tipo um auto increment
    
    cout << "Digite o diagnostico do paciente: " <<endl;
    string diag;
    cin >> diag; 
    pac.diagnostico = diag;
    cout << endl;
    
    cout << "Digite a idade do paciente: ";
    int age;
    cin>> age;
    pac.idade = age;

    cout << "Digite o nome do Paciente: ";
    string name;
    cin >> name;
    pac.nome = name;
    cout<<endl;
    
}

Clinica::Clinica(int num_quartos){
    this->num_pacientes = 0;
    Paciente pac(); // paciente nulo
    quartos.assign(num_quartos, num_pacientes) // incilizando cada quarto com um paciente nulo
}

Paciente::Paciente(){
    id = 0;
    num_quarto = 0;
    idade = 0;
    nome = "";
    diagnostico = "";
}

// metodos
int Clinica::getNumPacientes(){return num_pacientes;} 
vector<int, Paciente>* Clinica::getQuartos(){return &quartos;} // ponteiro para o map de quartos
void Clinica::addPaciente(int num_quarto, Paciente pct){
    quartos[num_quarto] = pct;
    num_pacientes++;
} 




