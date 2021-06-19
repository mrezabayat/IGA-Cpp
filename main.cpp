#include <iostream>
#include <fstream>
#include <cassert>
#include <vector>

#include "config.h"
#include "BSpline.h"
#include "Vectors.h"

int main()
{
    // //------------------------------------------------------------------------
    // // Figure 2.3. of Book
    // IGACpp::BSpline myBSpline;
    // myBSpline.setKnotVectors({ 0,1,2,3,4,5 });

    // int degree = 2;

    // // writing basis function to file
    // std::ofstream writeOut("out.csv");
    // assert(writeOut.is_open());

    // std::vector<double> xi = IGACpp::linspace<double>(0., 5., 500);
    // for (size_t j{}; j < xi.size(); ++j)
    // {
    //     writeOut << xi.at(j) << " " << myBSpline.basisFunction(xi.at(j), 0, degree) 
    //                          << " " << myBSpline.basisFunction(xi.at(j), 1, degree)
    //                          << " " << myBSpline.basisFunction(xi.at(j), 2, degree)
    //                          << std::endl;
    // }
    // //------------------------------------------------------------------------

    // //------------------------------------------------------------------------
    // // Figure 2.5. of Book
    // IGACpp::BSpline myBSpline;
    // myBSpline.setKnotVectors({ 0,0,0,1,2,3,4,4,5,5,5 });

    // int degree = 2;

    // // writing basis function to file
    // std::ofstream writeOut("out.csv");
    // assert(writeOut.is_open());

    // std::vector<double> xi = IGACpp::linspace<double>(0., 5., 500);
    // for (size_t j{}; j < xi.size(); ++j)
    // {
    //     writeOut << xi.at(j) << " " << myBSpline.basisFunction(xi.at(j), 0, degree) 
    //                          << " " << myBSpline.basisFunction(xi.at(j), 1, degree)
    //                          << " " << myBSpline.basisFunction(xi.at(j), 2, degree)
    //                          << " " << myBSpline.basisFunction(xi.at(j), 3, degree)
    //                          << " " << myBSpline.basisFunction(xi.at(j), 4, degree)
    //                          << " " << myBSpline.basisFunction(xi.at(j), 5, degree)
    //                          << " " << myBSpline.basisFunction(xi.at(j), 6, degree)
    //                          << " " << myBSpline.basisFunction(xi.at(j), 7, degree)
    //                          << std::endl;
    // }
    // //------------------------------------------------------------------------

    //------------------------------------------------------------------------
    // Figure 2.6. of Book
    IGACpp::BSpline myBSpline;
    myBSpline.setKnotVectors({ 0, 0, 0, 0, 0, 1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 5 });

    int degree = 4;

    // writing basis function to file
    std::ofstream writeOut("out.csv");
    assert(writeOut.is_open());

    std::vector<double> xi = IGACpp::linspace<double>(0., 5., 500);
    for (size_t j{}; j < xi.size(); ++j)
    {
        writeOut << xi.at(j) << " " << myBSpline.basisFunction(xi.at(j), 0, degree) 
                             << " " << myBSpline.basisFunction(xi.at(j), 1, degree)
                             << " " << myBSpline.basisFunction(xi.at(j), 2, degree)
                             << " " << myBSpline.basisFunction(xi.at(j), 3, degree)
                             << " " << myBSpline.basisFunction(xi.at(j), 4, degree)
                             << " " << myBSpline.basisFunction(xi.at(j), 5, degree)
                             << " " << myBSpline.basisFunction(xi.at(j), 6, degree)
                             << " " << myBSpline.basisFunction(xi.at(j), 7, degree)
                             << " " << myBSpline.basisFunction(xi.at(j), 8, degree)
                             << " " << myBSpline.basisFunction(xi.at(j), 9, degree)
                             << " " << myBSpline.basisFunction(xi.at(j), 10, degree)
                             << " " << myBSpline.basisFunction(xi.at(j), 11, degree)
                             << " " << myBSpline.basisFunction(xi.at(j), 12, degree)
                             << " " << myBSpline.basisFunction(xi.at(j), 13, degree)
                             << " " << myBSpline.basisFunction(xi.at(j), 14, degree)
                             << std::endl;
    }
    //------------------------------------------------------------------------

    return 0;
}