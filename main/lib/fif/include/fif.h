#ifndef FIF_H
#define FIF_H

#include<string>

namespace fif
{
    class FIF
    {
        public:
            static
            void
            hide (
                std::string inputDataPath[],
                std::string inputDBPath,
                std::string outputDBPath,
                std::string password
            );

            static
            void
            hide (
                std::string inputDataPath[],
                std::string inputDBPath[],
                std::string outputDBPath,
                std::string password
            );

            static
            void
            extract (
                std::string inputDBPath,
                std::string outputDataFolderPath,
                std::string password
            );

            static
            void
            extract (
                std::string inputDBPath[],
                std::string outputDataFolderPath,
                std::string password
            );

            static void test();
    };
}

#endif