#include <vector>
#include "Base.hpp"

template<class T>
linalg::BaseVectorSpace<T>::BaseVectorSpace(std::vector<T> coordinates)
{
    this->coordinates = coordinates;
}

template<class T>
std::vector<T> linalg::BaseVectorSpace<T>::GenerateVectorMP(T scalar)
{
    std::vector<T>::iterator iter;
    std::vector<T> generatedVector;

    for(iter = this->coordinates.begin(); iter != this->coordinates.end(); ++iter)
    {
        generatedVector.push_back(
            (*iter) * scalar
        );
    }
    return generatedVector;
}
    
template<class T>
std::vector<T> linalg::BaseVectorSpace<T>::GenerateVectorMP(std::vector<T> vec)
{
    // ToDo: Verify linear transformation with vector for this operation
}
