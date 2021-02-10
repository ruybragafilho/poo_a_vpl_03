#include <sstream>
#include <iomanip>
#include "Ponto3D.hpp"

std::string Ponto3D::to_string() const {

    std::ostringstream aux;

    aux << std::setprecision(6) << std::fixed;
    aux << "(" << this->_x << "," << this->_y << "," << this->_z << ")";

    return( aux.str() );
}
    
/**
 * A distância entre pontos de duas dimensões é calculada da seguinte forma
 * que é: sqrt((x1 - x2)^2 + (y1 - y2)^2 + (z1 - z2)^2).
 * Onde x1 é a coordenada x do primeiro ponto, e x2 é a coordenada x do segundo ponto,
 * y1 é a coordenada y do primeiro ponto, e y2 é a coordenada y do segundo ,
 * z1 é a coordenada z do primeiro ponto, e z2 é a coordenada z do segundo ponto.
 */
double Ponto3D::distancia(Ponto* p) const {

    Ponto3D* p3d = (Ponto3D*)p;

    return sqrt( (this->_x - p3d->_x ) * (this->_x - p3d->_x) + 
                 (this->_y - p3d->_y ) * (this->_y - p3d->_y) + 
                 (this->_z - p3d->_z ) * (this->_z - p3d->_z) ); 
}