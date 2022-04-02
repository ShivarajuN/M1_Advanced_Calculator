#include "complex.h"

complex_t  complex_sum(complex_t c1, complex_t c2)
{
    complex_t res;
    res.real = c1.real+c2.real;
    res.img  = c1.img +c2.img;

    return res;

}

complex_t  complex_difference(complex_t c1,complex_t c2)
{
   complex_t res;
    res.real = c1.real-c2.real;
    res.img  = c1.img -c2.img;

    return res; 
}

complex_t  complex_multiply(complex_t c1,complex_t c2)
{
    complex_t res;
    if(c2.real==0 && c2.img==0 || c1.real==0 && c2.img==0)
    {
        res.real = 0;
        res.img  = 0;
        return res;
    }
    else 
    {
        res.real = (c1.real*c2.real)-(c1.img*c2.img);
        res.img  = (c1.real*c2.img)+(c1.img*c2.real);
        return res;

    }

        

}

complex_t  complex_divide(complex_t c1,complex_t c2)
{
    complex_t res;
    float z;
    if(c2.real==0 && c2.img==0)
    {
        res.real = 0;
        res.img  = 0;
        return res;
    }
    else 
    {
        z=(c2.real*c2.real)+(c2.img*c2.img);
        res.real = (c1.real*c2.real)+(c1.img*c2.img);
        res.real/=z;
        res.img  = (c2.real*c1.img)-(c2.img*c1.real);
        res.img /=z;
        return res;

    }
}

