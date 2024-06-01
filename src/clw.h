#ifndef CULTI_CLW_H
#define CULTI_CLW_H

#include "management/window_manager.h"
#include "management/command_manager.h"

int runCommand(const char *line);

char *read_line(void);

InstanceList *getInstanceList();

int main(int argc, char **argv);

#endif