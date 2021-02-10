#include <sstream>
#include <iomanip>
#include "Ponto4D.hpp"


std::string Ponto4D::to_string() const  {

    std::ostringstream aux;

    aux << std::setprecision(6) << std::fixed;
    aux << "(" << this->_x << "," << this->_y << "," << this->_z << "," << this->_w << ")";

    return( aux.str() );
}


/**
 * A distância entre pontos de duas dimensões é calculada da seguinte forma
 * que é: sqrt((x1 - x2)^2 + (y1 - y2)^2 + (z1 - z2)^2).
 * Onde x1 é a coordenada x do primeiro ponto, e x2 é a coordenada x do segundo ponto,
 * y1 é a coordenada y do primeiro ponto, e y2 é a coordenada y do segundo ,
 * z1 é a coordenada z do primeiro ponto, e z2 é a coordenada z do segundo ponto.
 * w1 é a coordenada w do primeiro ponto, e w2 é a coordenada w do segundo ponto.
 */
double Ponto4D::distancia(Ponto* p) const  {

    Ponto4D* p4d = (Ponto4D*)p;

    return sqrt( (this->_x - p4d->_x ) * (this->_x - p4d->_x) + 
                 (this->_y - p4d->_y ) * (this->_y - p4d->_y) + 
                 (this->_z - p4d->_z ) * (this->_z - p4d->_z) + 
                 (this->_w - p4d->_w ) * (this->_w - p4d->_w) ); 
}
