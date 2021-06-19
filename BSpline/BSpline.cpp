#include "BSpline.h"
#include <stdexcept>

namespace IGACpp
{
    void BSpline::setKnotVectors(std::vector<double> knotVector)
    {
        // check if the given knot vector is non-decreasing
        for (size_t i{}; i < (knotVector.size() - 1); ++i)
        {
            if (knotVector.at(i) > knotVector.at(i + 1))
            {
                throw std::runtime_error("BSpline::setKnotVectors: knot vector must be in increasing order.");
            }
        }

        // set knotvector
        _knotVector = knotVector;
    }

    double BSpline::basisFunction(double xi, int Kidx, int degree)
    {
        // Checks
        if (degree < 0)
        {
            throw std::runtime_error("BSpline::evalBasisFunctionPramSp: BSpline degree must be greater than or equal to zero.");
        }
        if (_knotVector.empty())
        {
            throw std::runtime_error("BSpline::evalBasisFunctionPramSp: Knotvector is not set.");
        }

        double value{}; // value of basis function at the given point in the parametric space
        if (degree == 0)
        {
            if (xi >= _knotVector.at(Kidx) and xi < _knotVector.at(Kidx + 1) and _knotVector.at(Kidx) != _knotVector.at(Kidx + 1))
            {
                value = 1;
            }
            else
            {
                value = 0;
            }
            return value;
        }
        else
        {
            double A{}, B{};
            if (_knotVector.at(Kidx + degree) != _knotVector.at(Kidx))
            {
                A = (xi - _knotVector.at(Kidx)) / (_knotVector.at(Kidx + degree) - _knotVector.at(Kidx));
            }
            if (_knotVector.at(Kidx + degree + 1) != _knotVector.at(Kidx + 1))
            {
                B = (_knotVector.at(Kidx + degree + 1) - xi) / (_knotVector.at(Kidx + degree + 1) - _knotVector.at(Kidx + 1));
            }
            value = A * basisFunction(xi, Kidx, degree - 1) +
                    B * basisFunction(xi, Kidx + 1, degree - 1);
            return value;
        }

    }
} // namespace IGACpp
