#include "config-utils/shared/config-utils.hpp"
DECLARE_CONFIG(ModConfig,
 CONFIG_VALUE(Active, bool, "NSFW", False);

 CONFIG_INIT_FUNCTION(
 CONFIG_INIT_VALUE(Active);
 )
)
