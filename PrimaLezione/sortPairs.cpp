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

bool sortByAscendingIntAndDescendingString(const pair<string,int>& a, const pair<string,int>& b){
    if(a.second == b.second) return a.first > b.first;
    return a.second > b.second;
}

int main(){
    vector<pair<string,int>> v;
    int n;
    cin >> n;
    string name;
    int avg;
    while(n--){
        cin >> name >> avg;
        v.push_back({name, avg});
    }
    sort(v.begin(), v.end(), sortByAscendingIntAndDescendingString);
    for(const pair<string,int>& el : v){
        cout << el.first << ' ' << el.second << "\n";
    }
}