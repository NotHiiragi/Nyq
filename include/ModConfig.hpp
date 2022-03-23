#include "config-utils/shared/config-utils.hpp"
DECLARE_CONFIG(ModConfig,
 CONFIG_VALUE(NSFW, bool, "Only NSFW?", False);

 CONFIG_INIT_FUNCTION(
 CONFIG_INIT_VALUE(NSFW);
 )
)
