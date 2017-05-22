#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;


//constantes de tamanho e preço (e pi)
const double pequeno = 8;
const double precoP  = 1;
const double medio   = 16;
const double precoM  = 2;
const double precoG  = 4;
const double pi      = 3.14;


// Abstract class
class Bolacha
{
    protected:
       double area;
       double preco;
       string nome;
    public:
       double getArea(){
           return area;
       }
       double getPreco(){
           return preco;
       }
       string getNome(){
           return nome;
       }

      // virtual Function
       virtual double calculaArea() = 0;

       void calculaPreco(){
          if(this->area <= pequeno)
            this->preco  = precoP;
          else if (this->area <= medio)
            this->preco  = precoM;
          else
            this->preco  = precoG;
       }
};

class Quadrado : public Bolacha
{
  private:
    double lado;
  public:
    double calculaArea(){
      return area = lado*lado;
    }
    Quadrado(double lado){
      this->nome = "quadrado";
      this->lado = lado;
      calculaArea();
      calculaPreco();
    }
};
class Circulo : public Bolacha
{
  private:
    double raio;
  public:
    double calculaArea(){
      return area = pi*raio*raio;
    }
    Circulo(double raio){
      this->nome = "circulo";
      this->raio = raio;
      calculaArea();
      calculaPreco();
    }
};
class Triangulo : public Bolacha
{
  private:
    double base;
    double altura;
  public:
     double calculaArea(){
       return area = (base*altura) / 2;
     }
     Triangulo(double base, double altura){
       this->nome = "triangulo";
       this->base = base;
       this->altura = altura;
       calculaArea();
       calculaPreco();
     }
};

void fabricaBolacha(vector<Bolacha*>& bolachas){
    int t = rand() % 3;
    if (t == 0){
      Quadrado* q = new Quadrado(rand() % 5 + 1);
      bolachas.push_back(q);
    }
    if (t == 1){
      Circulo*  c = new Circulo(rand() % 5 + 1);
      bolachas.push_back(c);
    }
    if (t == 2){
      Triangulo* t = new Triangulo(rand() % 10 + 1, rand() % 10 + 1);
      bolachas.push_back(t);
    }
}

bool cmpArea(Bolacha* b1, Bolacha* b2) {
   return b1->getArea() > b2->getArea();
}

void imprimeBolachas(vector<Bolacha*>& bolachas){
  vector<Bolacha*>::iterator it;
	for (it = bolachas.begin(); it != bolachas.end(); it++){
    cout << (*it)->getArea() <<"(" << (*it)->getNome() << ")" << endl;
  }
}

void contaBolachas(vector<Bolacha*>& bolachas, int N){
    int contP = 0;
    int contM = 0;
    int contG = 0;
    vector<Bolacha*>::iterator it;
    for (it = bolachas.begin(); it != bolachas.end(); it++){
      if((*it)->getArea() <= pequeno)
        contP++;
      else if((*it)->getArea() <= medio)
        contM++;
      else
        contG++;
    }
    cout << "Bolachas pequenas: " << contP << " - Ganhos: R$" << contP * precoP << endl;
    cout << "Bolachas médias: " << contM << " - Ganhos: R$" << contM * precoM << endl;
    cout << "Bolachas grandes: " << contG << " - Ganhos: R$" << contG * precoG << endl;
    cout << "Total de Bolachas: " << contG+contM+contP << " - Ganhos Totais: R$" << (contG * precoG) + (contM * precoM) + (contP * precoP) << endl;
}


int main()
{
  	srand((unsigned)time(0));
	  vector<Bolacha*> bolachas;
    int N;
    cout << "Quantos biscoitos deseja?" << endl;
    cin >> N;
    for(auto i = 0; i < N; i++)
      fabricaBolacha(bolachas);
    sort(bolachas.begin(), bolachas.end(), cmpArea);
    imprimeBolachas(bolachas);
    contaBolachas(bolachas, N);
    return 0;
}
