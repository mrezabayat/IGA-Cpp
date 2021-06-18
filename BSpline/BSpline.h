#pragma once

#include <vector>

namespace IGACpp
{
    class BSpline
    {
    public:

        /*! \brief Sets the degree of BSpline
         * \param degree An integer indicating the degree of BSpline
         */
        void setDegree(int degree) { _degree = degree; }

        /*! \brief Sets the knot vectors
         * \param knotVector A vector of doubles in increasing order
         */
        void setKnotVectors(std::vector<double> knotVector);

        /*! \brief Sets the contorl points
         * \param ctrlPts A matrix with n = (number of contorl points) rows and 3 columns (x, y, z) coordinates
         */
        void setControlPoints(std::vector<std::vector<double>> ctrlPts) { _ctrlPts = ctrlPts; }

        /*! \brief This functions evaluates the value of basis function in parametric space
         * \param xi point in the parametric space
         * \param idx index of basis function
         * \param degree degree of basis function
         */
        double basisFunction(double xi, int idx, int degree);
    private:
        int _degree{-1}; // degree of BSpline
        std::vector<std::vector<double>> _ctrlPts; // control points
        std::vector<double> _knotVector; // knot vector
    };
} // namespace IGACpp
