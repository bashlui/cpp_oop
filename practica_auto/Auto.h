# include <string>

class Auto{
    private:
    float motor;
    std::string marca;
    std::string submarca;

    public:
    Auto();
    Auto(float, std::string, std::string);

    // Setters
    void setMotor(float);
    void setMarca(std::string);
    void setSubmarca(std::string);

    // to_string method
    std::string to_string();
    float getMotor();
    std::string getMarca();
    std::string getSubmarca();
};
