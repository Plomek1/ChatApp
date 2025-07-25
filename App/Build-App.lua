project "App"
    kind "ConsoleApp"
    language "C++"
    cppdialect "C++20"
    targetdir "bin/%{cfg.buildcfg}"
    staticruntime "off"

    files 
    { 
        "src/**.h", 
        "src/**.cpp",
        "include/**.h",
        "include/**.cpp",
        "libs/**.h",
        "libs/**.cpp",
    }

    includedirs
    {
        "include",
        "libs"
    }

    links
    {
        "d3d12",
        "dxgi",
        "dxguid",
        "d3dcompiler"
    }

    targetdir ("../Build/" .. OutputDir .. "/%{prj.name}")
    objdir ("../Build/" .. OutputDir .. "/%{prj.name}")

    filter "system:windows"
        systemversion "latest"
        defines { "WINDOWS" }

    filter "configurations:Debug"
        defines { "DEBUG" }
        runtime "Debug"
        symbols "On"

    filter "configurations:Release"
        defines { "RELEASE" }
        runtime "Release"
        optimize "On"
        symbols "On"

    filter "configurations:Dist"
        defines { "DIST" }
        runtime "Release"
        optimize "On"
        symbols "Off"