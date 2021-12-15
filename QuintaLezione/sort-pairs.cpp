/*
  Data una lista di cognomi di studenti e la loro relativa media, 
  ordinali con ordine non crescente in base alla loro media,
  in caso di parità ordinali in ordine alfabetico in base al cognome.

  Input:
  n (numero di studenti)
  [cognome] [media]
  ...

  Output:
  [cognome] [media]
  ...

  Esempio di input:
  4
  Verdi 19
  Bianchi 27
  Rossi 28
  Gialli 27

  Esempio di output:
  Rossi 28
  Gialli 27
  Bianchi 27
  Verdi 19
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct Person{
  string surname;
  int grade;
  bool operator<(const Person& other) const{
    if(grade == other.grade) return surname < other.surname;
    return grade > other.grade; 
  }
};

int main(){
  vector<Person> v;
  int n;
  cin >> n;
  string name;
  int avg;
  while(n--){
    cin >> name >> avg;
    v.push_back({name, avg});
  }
  sort(v.begin(), v.end());
  for(const Person& el : v){
    cout << el.surname << ' ' << el.grade << "\n";
  }
}