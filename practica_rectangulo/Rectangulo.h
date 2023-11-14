# include <string>

class Rectangulo{
    private:
        double base;
        double altura;
    public:
    // Constructores
        Rectangulo();
        Rectangulo(double, double);

    // Setters
        void setBase(double);
        void setAltura(double);

    // to_string method
    std::string to_string();  
    double getPerimetro();
    double getArea();
};
