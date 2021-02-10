#include <sstream>
#include <iomanip>
#include "Ponto2D.hpp"


std::string Ponto2D::to_string() const   { 

    std::ostringstream aux;
    
    aux << std::setprecision(6) << std::fixed;
    aux << "(" << this->_x << "," << this->_y << ")";

    return( aux.str() );
}


double Ponto2D::distancia(Ponto* p) const   { 
    
    Ponto2D* p2d = (Ponto2D*)p;

    return sqrt( (this->_x - p2d->_x ) * (this->_x - p2d->_x) + 
                 (this->_y - p2d->_y ) * (this->_y - p2d->_y) ); 
}


void Ponto2D::converteParaPolar()  {

    double r;
    double teta ;

    Ponto2D origem( 0.0, 0.0 );

    r = distancia( &origem );
    teta = atan( this->_y / this->_x );    

    this->_x = r;
    this->_y = teta;
}