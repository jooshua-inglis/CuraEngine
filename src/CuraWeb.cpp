#include <stdio.h>
#include <emscripten/emscripten.h>
#include "Application.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

extern "C"
{
	int slice_js(char *input_stl, char *config_json, char *gcode_output_file)
	{
		char *args[9] = {"cura", "slice", "-v", "-j", config_json, "-o", gcode_output_file, "-l", input_stl};
		printf("MyFunction Called\n");
		cura::Application::getInstance().run(6, args);
		return 0;
	}
}
