// Restituire la media di un vettore di interi
// Complessità Theta(n)
double media(const vector<int>& v) {
    if(v.empty()) return 0;
    int somma = 0;
    for (int i = 0; i < v.size(); i++) {
        somma += v[i];
    }
    return somma / (double) v.size();
}

// Restituire l'element più piccolo in un vettore di interi
// Complessità Theta(n)
int minElement(const vector<int>& v) {
    int res = INT_MAX;
    for (int i = 0; i < v.size(); i++) {
        res = min(res, v[i]);
    }
    return res;
}

// Restituire l'indice del primo numero negativo del vettore, -1 se non esiste
// Complessità O(n) e Omega(1)
int firstNegativeNumberIndex(const vector<int>& v) {
    for (int i = 0; i < v.size(); i++) {
        if (v[i] < 0) return i;
    }
    return -1;
}

// Restituire il più piccolo intero in un vettore ordinato in modo non decrescente e contenente almeno un elemento
// Complessità Theta(1)
int minElementSorted(const vector<int>& v) {
    return v[0];
}

// Stampare a video il nome dei tre colori RGB
// Complessità Theta(1)
void printRGBColors(){
    vector<string> colors = {"red", "green", "blue"};
    for(const string& color : colors){
        cout << color << endl;
    }
}
