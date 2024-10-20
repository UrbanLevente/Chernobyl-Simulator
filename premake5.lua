include "Dependencies.lua"

workspace "Sim"
    architecture "x64"
    startproject "App"

    configurations
    {
        "Debug",
        "Release",
        "Dist"
    }

	flags
	{
		"MultiProcessorCompile"
	}

    outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

    group "Core"
    include "Sim"
    group ""
    
    group "Dependencies"
    include "Sim/vendor/GLFW"
	include "Sim/vendor/Glad"
	include "Sim/vendor/imgui"
    group ""

    group "Misc"
	include "App"
    group ""


