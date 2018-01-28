#include "quad.h"



//    friend ostream &operator<<(ostream &, const quadraticEq &){
//        cout<< "A is: "<<coeffXSquare;
//    }
//
//    friend istream &operator>>(istream &, quadraticEq &);

//
//    const quadraticEq &operator=(const quadraticEq &right);

    void quadraticEq::rootsType(){
        double discriminat = (coeffXSquare*coeffXSquare)-(4*coeffX*constTerm);
         if (discriminat == 0){
             cout<< "Single repeated root"<<endl;
         }
        if (discriminat > 0){
            cout <<" Two real roots"<<endl;
        }
        if (discriminat < 0){
            cout<<"Two complex roots"<<endl;
        }
    }

//    void quadraticEq::eqRoots();

    void quadraticEq::setEq(double a, double b, double c){
        coeffXSquare = a;
        coeffX = b;
        constTerm = c;
    }

    bool quadraticEq::operator==(const quadraticEq &right) const{
        if(this->coeffXSquare == right.coeffXSquare && this->coeffX==right.coeffX &&this->constTerm==right.constTerm){
            return true;
        }
        else {
            return false;
        }
    }

    bool quadraticEq::operator!=(const quadraticEq &right) const{
        if(this->coeffXSquare == right.coeffXSquare && this->coeffX==right.coeffX &&this->constTerm==right.constTerm){
            return false;
        }
        else {
            return true;
        }
    }

    quadraticEq quadraticEq::operator+(const quadraticEq &num){
        quadraticEq temp;
        double a = this->coeffXSquare + num.coeffXSquare;
        double b = this->coeffX + num.coeffX;
        double c = this->constTerm + constTerm;
        temp.setEq(a,b,c);
        return temp;
    }

    quadraticEq quadraticEq::operator-(const quadraticEq &num){
        quadraticEq temp;
        double a = this->coeffXSquare - num.coeffXSquare;
        double b = this->coeffX - num.coeffX;
        double c = this->constTerm - constTerm;
        temp.setEq(a,b,c);
        return temp;
    }

quadraticEq::quadraticEq(double a = 0, double b = 0, double c = 0){
    coeffXSquare = a;
    coeffX = b;
    constTerm = c;
}


