#ifndef FIF_H
#define FIF_H

#include "output_params.h"
#include <string>

namespace fif
{
    class FIF
    {
        public:
            static
            void
            hide
            (
                std::string inputDataPath[],
                std::string inputDBPath,
                std::string outputDBPath,
                std::string password
            );

            static
            void
            hide
            (
                std::string inputDataPath[],
                std::string inputDBPath[],
                std::string outputDBPath,
                std::string password
            );

            static
            void
            hide
            (
                std::string inputData,
                std::string inputDBPath,
                std::string outputDBPath,
                std::string password
            );

            static
            void
            hide
            (
                std::string inputData[],
                std::string inputDBPath,
                std::string outputDBPath,
                std::string password
            );

            static
            void
            extract
            (
                std::string inputDBPath,
                std::string password,
                OutputParams &outputParams
            );

            static
            void
            extract
            (
                std::string inputDBPath[],
                std::string password,
                OutputParams &outputParams
            );
    };
}

#endif