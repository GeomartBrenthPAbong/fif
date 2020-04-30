#ifndef OUTPUT_PARAMS_H
#define OUTPUT_PARAMS_H

#include "config.h"
#include "data_type.h"
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
            DataType dataType,
            std::string curOutput
        );

        DataType
        getDataType();

        std::string
        getOutput();

        std::string
        getOutputFolder();
    
    private:
        std::string outputFolder;
        std::string curOutput;
        DataType dataType;
};

NAMESPACE_CLOSE

#endif