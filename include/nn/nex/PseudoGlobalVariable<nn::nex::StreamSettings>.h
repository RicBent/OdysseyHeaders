#pragma once

namespace nn { namespace nex { namespace PseudoGlobalVariable<nn::nex::StreamSettings> {

PseudoGlobalVariable();
~PseudoGlobalVariable();
AllocateExtraContexts();
FreeExtraContexts();
ResetContext(unsigned int);
GetNext();
SetNext(nn::nex::PseudoGlobalVariableRoot*);
ResetContexts();

} } } 
