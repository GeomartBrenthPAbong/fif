#include "output_params.h"

NAMESPACE_OPEN(fif)

inline OutputParams::OutputParams
(
    std::string outputFolder
)
{
    // TODO Verify this folder
    this->outputFolder = outputFolder;
}

inline
void
OutputParams::setOutput
(
    DataType dataType,
    std::string curOutput
)
{
    this->dataType = dataType;
    this->curOutput = curOutput;
}

inline
DataType
OutputParams::getDataType()
{
    return this->dataType;
}

inline
std::string
OutputParams::getOutput()
{
    return this->curOutput;
}

inline
std::string
OutputParams::getOutputFolder()
{
    return this->outputFolder;
}

NAMESPACE_CLOSE