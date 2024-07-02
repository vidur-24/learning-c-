#pragma once //--> ppd
//instruction sent to compiler means this file will be preprocessed and will be included only once
//it is header guard which prevents including single header file multiple times in a single translation unit (which is converted to a exe file)
// ex: if we include header files multiple times in a translation unit we can get duplication errors
//earlier we used to use 'ifndef' and 'define' ppd as header guard 

void Log(const char* message); //funct declaration