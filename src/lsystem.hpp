#ifndef LSYSTEM_HEADER
#define LSYSTEM_HEADER

namespace linalg
{
    std::vector<double> CramerLinearSolver(const xt::xarray<double> arr, const xt::xarray<double> solution);    
}

#endif
