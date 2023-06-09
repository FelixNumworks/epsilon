#include <apps/apps_container_helper.h>

// Modification

Shared::GlobalContext* AppsContainerHelper::sharedAppsContainerGlobalContext() {
  // Define a single shared GlobalContext
  static Shared::GlobalContext s_globalContext;
  return &s_globalContext;
}
