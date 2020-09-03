#ifndef __MYCOMPLEX__
#define __MYCOMPLEX__

#include <cstring>
#include <iostream>
using namespace std;

class complex;
complex&
    __doapl (complex *ths,const complex & r);
complex&
    __doami (complex *ths,const complex & r);
complex&
    __doaml (complex *ths,const complex & r);
    



class complex{
    public:
        complex (double r=0,double i=0):re(r),im(i){
        }

        complex& operator += (const complex&);
        complex& operator -= (const complex&);
        complex& operator *= (const complex&);
        complex& operator /= (const complex&);

        double real() const{
            return re;
        }

        double imag() const{
            return re;
        }


    private:
        double re,im;

        friend complex& __doapl (complex *,const complex &);
        friend complex& __doami (complex *,const complex &);
        friend complex& __doaml (complex *,const complex &);

};

inline complex&
__doapl(complex *ths,const complex & r){
    ths->re +=r.re;
    ths->im +=r.im;
    return *ths;
}

inline complex&
complex::operator +=(const complex& r){
    return __doapl(this,r);
}

inline complex&
__doami (complex* ths,const complex& r){
    ths->re -=r.re;
    ths->im -=r.im;
    return *ths;
}

inline complex&
complex::operator -=(const complex& r){
    return __doami(this,r);
}

inline complex&
__doaml (complex *ths,const complex& r){
    double f= ths->re*r.re- ths->im*r.im;
    ths->im=ths->rer.im+ ths->im*r.re;
    ths->re=f;
    return *ths;
}

inline complex&
complex::operator *=(const complex& r){
    return __doaml(this,r);
}




#endif