# include <string>

class Auto{
    private:
    std::string marca;
    std::string submarca;

    public:
    Auto();
    Auto(std::string, std::string);

    // Setters
    void setMarca(std::string);
    void setSubmarca(std::string);

    // to_string method
    std::string to_string();
    std::string getMarca();
    std::string getSubmarca();
};
