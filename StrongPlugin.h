#ifndef STRONGPLUGIN_H
#define STRONGPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>
#include <vector>

class StrongPlugin : public Plugin
{
public: 
 std::string toString() {return "Strong";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
