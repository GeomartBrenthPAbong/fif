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
    OutputType outputType,
    std::string curOutput
)
{
    this->outputType = outputType;
    this->curOutput = curOutput;
}

inline
OutputType
OutputParams::getOutputType()
{
    return this->outputType;
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