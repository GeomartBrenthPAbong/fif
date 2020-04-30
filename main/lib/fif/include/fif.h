#ifndef FIF_H
#define FIF_H

#include "config.h"
#include "output_params.h"
#include <string>

NAMESPACE_OPEN(fif)

class FIF
{
    public:
        static
        void
        hide
        (
            std::string inputFilePath[],
            std::string inputDBFilePath,
            std::string outputDBFilePath,
            std::string password
        );

        static
        void
        hide
        (
            std::string inputFilePath[],
            std::string inputDBFilePath[],
            std::string outputDBFilePath,
            std::string password
        );

        static
        void
        hide
        (
            std::string inputData,
            std::string inputDBFilePath,
            std::string outputDBFilePath,
            std::string password
        );

        static
        void
        extract
        (
            std::string inputDBFilePath,
            std::string password,
            OutputParams &outputParams
        );

        static
        void
        extract
        (
            std::string inputDBFilePath[],
            std::string password,
            OutputParams &outputParams
        );
};

NAMESPACE_CLOSE

#endif