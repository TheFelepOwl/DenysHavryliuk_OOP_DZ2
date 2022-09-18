#include <iostream>
#include<math.h>


using namespace std;

class puck
{
private:

    float a;



public:
    puck()
    {
        cout<<"Start of calculation"<<endl;
        this->a = 0;

    }

    puck(float a)
    {

        this->a = a;

    }


    ~puck()
    {
        this->a = 0;


        cout<<"ENd of calculation"<<endl;
    }


    double AreaPuck()
    {
        double S = ((3*sqrt(3))/2)*pow(a,2);
        return S;
    }


    void print_sqr ()
    {

        cout << "puck side =  " << a << "; puck area = " <<AreaPuck () << endl;

    }

    friend puck SumArea(puck &t1, puck &t2);

};

puck SumArea(puck &t1, puck &t2)
{
    double S =  t1. AreaPuck() + t2.AreaPuck();
    double a = sqrt(2.0 / 3.0 * S / sqrt(3.0));
    puck NewPuck(a);
    return NewPuck;
};



int main()
{

    int n,m;

    cout<<"Input first puck"<<endl;
    cin>> n;

    cout<<"Input first puck"<<endl;
    cin>> m;

    puck t1(n),t2(m);


    t1.print_sqr ();
    t2.print_sqr ();

    puck t3 = SumArea(t1, t2);
    t3.print_sqr ();


    return 0;
}
