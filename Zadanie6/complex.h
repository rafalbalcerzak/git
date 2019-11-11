class Complex{
    double re, im;
    public:
    
    Complex(double r, double i);
    Complex(double r);
    Complex();
    
    //funkcja która nic nie zwraca
    void show();

    //funkcja zwracająza ,,double''
    double mod();

    //funkcje zaprzyjażnione moga korzystać ze zmiennych prywatnych
    //przeciążanie operatorów
    friend Complex operator+(Complex c1, Complex c2);
    friend Complex operator-(Complex c1, Complex c2);
    friend Complex operator*(Complex c1, Complex c2);
};
