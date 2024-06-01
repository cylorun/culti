#ifndef CULTI_CONFIG_H
#define CULTI_CONFIG_H

#include "../lib/cJSON-1.7.18/cJSON.h"

void setDefaultConfig();

void initConfigManager();

int saveJSONFile(const char *filename, cJSON *json);

cJSON *loadJSONFile(const char *filename);

cJSON *getConfig();


#endif