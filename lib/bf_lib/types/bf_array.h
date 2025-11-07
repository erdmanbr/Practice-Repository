#ifndef BFLIB_TYPES_BFARRAY_H
#define BFLIB_TYPES_BFARRAY_H

#include <cstddef>
#include <initializer_list>
#include <string>

namespace bflib {

    namespace types {

        template <class T, std::size_t N>
        class BFArray {

            T data[N];

        public: 

            BFArray();
            BFArray(std::initializer_list<T>);

            void Print();

            std::string LogMessage { "BFArray Log Message" };

        };

        template<class T, std::size_t N>
        BFArray<T, N>::BFArray() {

            for (std::size_t i = 0; i < N; ++i) {
                data[i] = T();
            }

        }

        template<class T, std::size_t N>
        BFArray<T, N>::BFArray(std::initializer_list<T> initList) {

            for (std::size_t i = 0; i < N; i++) {

                data[i] = *(initList.begin() + i);

            }

        }

        template<class T, std::size_t N>
        void BFArray<T, N>::Print() {

            for (std::size_t i = 0; i < N; i++) {

                std::cout << data[i] << " ";

            }

            std::cout << std::endl;
        
        }

    }
}

#endif // BFLIB_TYPES_BFARRAY_H