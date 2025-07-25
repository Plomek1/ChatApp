-- premake5.lua
workspace "ChatApp"
   architecture "x64"
   configurations { "Debug", "Release", "Dist" }
   startproject "App"

   -- Workspace-wide build options for MSVC
   filter "system:windows"
      buildoptions { "/EHsc", "/Zc:preprocessor", "/Zc:__cplusplus", "/utf-8"}

OutputDir = "%{cfg.system}-%{cfg.architecture}/%{cfg.buildcfg}"

include "App/Build-App.lua"