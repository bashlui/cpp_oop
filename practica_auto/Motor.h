# include <string>

class Motor{
    private:

    int num_cilindros;
    double capacidad;

    public:
    // Constructores
    Motor();
    Motor(int, double);

    // Setters
    void setNumCilindros(int);
    void setCapacidad(double);

    // to_string method
    std::string to_string();
    int getNumCilindros();
    double getCapacidad();
};
