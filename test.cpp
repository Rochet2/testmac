int main()
{
  return 0;
}

#if defined(__APPLE__)
#warning "C Preprocessor got here!"
#  include <AvailabilityMacros.h>
#  if defined(MAC_OS_X_VERSION_10_10)
#    include "ace/config-macosx-yosemite.h"
#  elif defined(MAC_OS_X_VERSION_10_9)
#    include "ace/config-macosx-mavericks.h"
#  elif defined(MAC_OS_X_VERSION_10_8)
#    include "ace/config-macosx-mountainlion.h"
#  elif defined(MAC_OS_X_VERSION_10_7)
#    include "ace/config-macosx-lion.h"
#  elif defined(MAC_OS_X_VERSION_10_6)
#    include "ace/config-macosx-snowleopard.h"
#  elif defined(MAC_OS_X_VERSION_10_5)
#    include "ace/config-macosx-leopard.h"
#  elif defined(MAC_OS_X_VERSION_10_4)
#    include "ace/config-macosx-tiger.h"
#  elif defined(MAC_OS_X_VERSION_10_3)
#    include "ace/config-macosx-panther.h"
#  else
#    include "ace/config-macosx.h"
#endif

#warning "C Preprocessor got here!2"
