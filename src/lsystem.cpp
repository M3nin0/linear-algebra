#include <stdexcept>
#include "xtensor/xarray.hpp"
#include "xtensor-blas/xlinalg.hpp"

#include "lsystem.hpp"

std::vector<double> linalg::CramerLinearSolver(const xt::xarray<double> arr, const xt::xarray<double> solution)
{
    if (!CheckDimension(arr, 3))
    {
        throw std::runtime_error("Invalid Matrix! Only 3x3 Matrix!");
    }
    
    std::vector<double> result;
    double principalDet = xt::linalg::det(arr);
    
    for(int i = 0; i < 3; ++i)
    {
        xt::xarray<double> dn = xt::xarray<double>(arr);
        
        for(int j = 0; j < 3; ++j)
        {
            dn.at(j, i) = solution.at(0, j);
        }
        
        // Generate result
        result.push_back(xt::linalg::det(dn) / principalDet);
    }
    return result;
}
