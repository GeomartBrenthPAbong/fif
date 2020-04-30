#ifndef OUTPUT_PARAMS_H
#define OUTPUT_PARAMS_H

#include "config.h"
#include "output_type.h"
#include <string>

NAMESPACE_OPEN(fif)

class OutputParams
{
    public:
        OutputParams
        (
            std::string outputFolder
        );

        void
        setOutput
        (
            OutputType outputType,
            std::string curOutput
        );

        OutputType
        getOutputType();

        std::string
        getOutput();

        std::string
        getOutputFolder();
    
    private:
        std::string outputFolder;
        std::string curOutput;
        OutputType outputType;
};

NAMESPACE_CLOSE

#endif