// Restituire la media di un vettore di interi
// Complessità O(n)
double media(const vector<int>& v) {
    if(v.empty()) return 0;
    int somma = 0;
    for (int i = 0; i < v.size(); i++) {
        somma += v[i];
    }
    return somma / (double) v.size();
}

// Restituire l'indice del primo numero negativo del vettore, -1 se non esiste
// Complessità O(n)
int firstNegativeNumberIndex(const vector<int>& v) {
    for (int i = 0; i < v.size(); i++) {
        if (v[i] < 0) return i;
    }
    return -1;
}

// Restituire l'elemento più piccolo in un vettore di interi contentente almeno un elemento
// Complessità O(n)
int minElement(const vector<int>& v) {
    int res = INT_MAX;
    for (int i = 0; i < v.size(); i++) {
        res = min(res, v[i]);
    }
    return res;
}

// Restituire il più piccolo intero in un vettore ordinato in modo non decrescente e contenente almeno un elemento
// Complessità O(1)
int minElementInSortedVector(const vector<int>& v) {
    return v[0];
}

// Stampare a video il nome dei tre colori RGB
// Complessità O(1)
void printRGBColors(){
    vector<string> colors = {"red", "green", "blue"};
    for(const string& color : colors){
        cout << color << endl;
    }
}
