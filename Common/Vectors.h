#include <vector>
#include <stdexcept>

namespace IGACpp
{
    /*! \brief Generate linearly spaced vector.
    * \param x0 start point
    * \param x1 end point
    * \param num number of points
    */
    template<typename T>
    std::vector<T> linspace(T x0, T x1, int num)
    {
        if (num < 0)
        {
            throw std::runtime_error("hl_Array:linspace: number of elements of the vector cannot be negative");
        }
        std::vector<T> linspaced(num);
        if (num == 0)
        {
            return linspaced;
        }
        if (num == 1)
        {
            linspaced.at(num - 1) = (x0 + x1) / 2;
            return linspaced;
        }
        linspaced.at(num - 1) = x1;
        T step = (x1 - x0) / (static_cast<T>(num) - 1);
        for (int i = 0; i < (num - 1); ++i)
        {
            linspaced.at(i) = x0 + step * i;
        }
        return linspaced;
    }
} // namespace IGACpp
