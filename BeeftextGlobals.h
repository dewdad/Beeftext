/// \file
/// \author Xavier Michelon
///
/// \brief Implementation of project global variables
///
/// Copyright (c) Xavier Michelon. All rights reserved.  
/// Licensed under the MIT License. See LICENSE file in the project root for full license information.  


#ifndef BEEFTEXT__GLOBALS__H
#define BEEFTEXT__GLOBALS__H


#include <XMiLib/DebugLog/DebugLogWindow.h>


namespace globals {


xmilib::DebugLog& debugLog(); ///< Returns a reference to the debug log


} // namespace globals


#endif // #ifndef BEEFTEXT__GLOBALS__H