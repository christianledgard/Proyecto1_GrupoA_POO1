//
// Created by Christian Ledgard on 11/10/18.
//

#ifndef PY01_CJERSEY_H
#define PY01_CJERSEY_H



class CJersey{
private:
    unsigned int cantidad;
    float kgPrenda;
public:
    CJersey(unsigned int, float);
    ~CJersey();

    void setCantidad(unsigned int);
    void setKgPrenda(float);

    unsigned int getCantidad();
    float getKgPrenda();



};

#endif //PY01_CJERSEY_H
