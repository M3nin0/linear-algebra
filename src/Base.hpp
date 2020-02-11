#ifndef BASE_HEADER
#define BASE_HEADER

namespace linalg
{
    template<class T>
    class BaseVectorSpace
    {
    private:
        std::vector<T> coordinates;

    public:
        BaseVectorSpace(std::vector<T> coordinates);

        std::vector<T> GenerateVectorMP(T scalar);
        std::vector<T> GenerateVectorMP(std::vector<T> vec);

        std::vector<T> GenerateVectorSM(T scalar);
        std::vector<T> GenerateVectorSM(std::vector<T> vec);
    };
}

#endif
