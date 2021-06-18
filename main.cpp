#include <iostream>
#include <fstream>
#include <cassert>
#include <vector>

#include "config.h"
#include "BSpline.h"
#include "Vectors.h"

int main()
{
    IGACpp::BSpline myBSpline;
    myBSpline.setKnotVectors({ 0,0,0,1,2,3,4,4,5,5,5 });

    int degree = 2;

    // writing basis function to file
    std::ofstream writeOut("out.csv");
    assert(writeOut.is_open());

    std::vector<double> xi = IGACpp::linspace<double>(0., 5., 500);
    for (size_t j{}; j < xi.size(); ++j)
    {
        writeOut << xi.at(j) << " " << myBSpline.basisFunction(xi.at(j), 5, degree) << std::endl;
    }

    return 0;
}