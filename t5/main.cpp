#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <fstream>
#include <iterator>
#include <algorithm>
#include <tuple>

class Person {
  std::string name;
  std::vector<std::tuple<int, std::string>> atividade;

public:
   Person(std::string name, std::string atividade, int points) {
      std::tuple<int,std::string> atividades (points,atividade);
      this->name = name;
      this->atividade.push_back(atividades);
   }
   std::string getName() {
      return name;
   }
   int getPoints() {
     int i = 0;
     int total = 0;
     for(i = 0; i < this->atividade.size(); i++){
       total = total + std::get<0>(this->atividade[i]);
     }
     return total;
   }

   void insere(std::string atividade, int points){
      std::tuple<int,std::string> atividades (points,atividade);
      this->atividade.push_back(atividades);
   }
   static bool cmpTupla(std::tuple<int, std::string> t1, std::tuple<int, std::string> t2){
      return std::get<0>(t1) > std::get<0>(t2);
   }
   void compara(){

   }
};

// comparador de Persons pelo nome
bool cmpPersonName(Person& p1, Person& p2) {
   return p1.getName() < p2.getName();
}
bool cmpPersonPoints(Person& p1, Person& p2) {
   return p1.getPoints() < p2.getPoints();
}
int main() {

   std::ifstream data("data.csv");

   std::string line;
   std::string cell[3];
   std::vector<Person> v;
   std::vector<Person>::iterator it;
   bool achou = 0;
   while (std::getline(data, line)) {
      std::stringstream linestream(line);
      std::getline(linestream, cell[0], ',');
      std::getline(linestream, cell[1], ',');
      std::getline(linestream, cell[2], ',');

      for (it = v.begin(); it != v.end(); it++){            //Percorro o vetor v
        if(it->getName() == cell[0]){                       //Se v[it] == nome
          it->insere(cell[1], std::stoi(cell[2]));          //Insiro os vetores em v[it]
          achou = 1;
        }
      }
      if(achou == 0){
        v.push_back(Person(cell[0], cell[1],  std::stoi(cell[2])));
      }
      achou = 0;
   }

   std::cout << "Liste as pontuações em atividades ordenadas da maior para a menor pontuação, mostrando todos os atributos (nome, atividade, pontos)." << std::endl;
   //Não consegui ordenar tupla! :/
   std::cout << std::endl;


   std::cout << "Liste as pontuações totais por ordem alfabética do nome do jogador, mostrando todos os atributos (nome, pontos):" << std::endl;
   std::sort(v.begin(), v.end(), cmpPersonName);
   for (it = v.begin(); it != v.end(); it++){
     std::cout<< it->getName() << " ";
     std::cout<< it->getPoints() << " ";
     std::cout << std::endl;
   }
   std::cout << std::endl;

   std::cout << "Liste as pontuações totais por ordem de pontuação, da menor para a maior, mostrando todos os atributos (nome, pontos)." << std::endl;
   std::sort(v.begin(), v.end(), cmpPersonPoints);
   for (it = v.begin(); it != v.end(); it++){
     std::cout<< it->getName() << " ";
     std::cout<< it->getPoints() << " ";
     std::cout << std::endl;
   }
   std::cout << std::endl;
}
