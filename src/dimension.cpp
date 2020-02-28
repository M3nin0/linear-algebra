#include "xtensor/xarray.hpp"

#include "dimension.hpp"

bool linalg::CheckDimension(const xt::xarray<double> arr, const int dimension)
{
    return arr.shape(0) == dimension && arr.shape(1) == dimension;
}
