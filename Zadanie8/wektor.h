//struktura klasy, wszytko co będziemy używać w wektor.cpp
class Wektor{
    double * tab;
    unsigned int n;
    public:
    //konstruktor
    Wektor();
    Wektor(unsigned int size);
    //destruktor
    ~Wektor();
    
    void print();
    void set(unsigned int pos, double val);
    
    //konstruktor kopiujący
    Wektor(const Wektor&w);

    //przeciążanie operqatorów
    Wektor&operator=(const Wektor&w);

};