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
};