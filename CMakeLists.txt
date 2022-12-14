cmake_minimum_required(VERSION 3.20)
project(MichouChessGuiwxW)

set(CMAKE_CXX_STANDARD 14)


set(CMAKE_CXX_STANDARD 17)
set( COMPILE_DEFINITIONS )
find_package(TBB REQUIRED PATHS ${ONEAPI_ROOT})
if(UNIX)

    if(APPLE)
        find_package(wxWidgets 3.1.4 REQUIRED)
        include(${wxWidgets_USE_FILE})
        set(SOURCES main.cpp MainGui.cpp MainGui.h MichouApp.cpp MichouApp.h Labguage.cpp Labguage.h Schachbrett.cpp Schachbrett.h)
                # Options
        set(CMAKE_CXX_STANDARD 17)
        set(CMAKE_CXX_STANDARD_REQUIRED ON)

        # Target
        add_executable(${PROJECT_NAME} WIN32 MACOSX_BUNDLE ${SOURCES})
        target_link_libraries(${PROJECT_NAME} ${wxWidgets_LIBRARIES})
        set_target_properties(${PROJECT_NAME} PROPERTIES FOLDER "HelloWorlds")
        target_link_options(${PROJECT_NAME}  BEFORE
                PUBLIC -L/opt/intel/oneapi/tbb/latest/lib/pkgconfig/../..//lib
                PUBLIC -ltbb)
    else()
        add_executable(MichouChessGuiwxW main.cpp MainGui.cpp MainGui.h MichouApp.cpp MichouApp.h Labguage.cpp Labguage.h Schachbrett.cpp Schachbrett.h)
        target_include_directories( MichouChessGuiwxW
                PRIVATE "/usr/local/include/wx-3.2" )
        target_compile_options(MichouChessGuiwxW
                BEFORE
                PUBLIC -I/usr/local/lib64/wx/include/gtk3-unicode-3.2
                PUBLIC -I/usr/local/include/wx-3.2
                PUBLIC -D_FILE_OFFSET_BITS=64
                PUBLIC -DWXUSINGDLL
                PUBLIC -D__WXGTK__
                PUBLIC -pthread)

        target_link_options(MichouChessGuiwxW
                BEFORE
                PUBLIC -L/usr/local/lib64 -pthread
                PUBLIC -lwx_gtk3u_xrc-3.2
                PUBLIC -lwx_gtk3u_html-3.2
                PUBLIC -lwx_gtk3u_qa-3.2
                PUBLIC -lwx_gtk3u_core-3.2
                PUBLIC -lwx_baseu_xml-3.2
                PUBLIC -lwx_baseu_net-3.2
                PUBLIC -lwx_baseu-3.2)
    endif(APPLE)
else()
    add_executable(MichouChessGuiwxW main.cpp MainGui.cpp MainGui.h MichouApp.cpp MichouApp.h Labguage.cpp Labguage.h Schachbrett.cpp Schachbrett.h )

    set(wxWidgets_DIR "C:/vcpkg/installed/x64-windows/share/wxwidgets")
    set(CMAKE_PREFIX_PATH $(CMAKE_PREFIX_PATH);C:/vcpkg/installed/x64-windows/share/unofficial-nanosvg)
    #add_compile_options(--with-osx_cocoa --with-macosx-version-min=10.7 --with-macosx-sdk=/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.7.sdk --prefix="$(pwd)")
    #   )
    find_package(wxWidgets CONFIG REQUIRED)
    target_link_libraries(${PROJECT_NAME} PRIVATE wx::core wx::base )
    #target_link_libraries(${PROJECT_NAME} ${wxWidgets_LIBRARIES})
    target_compile_options(MichouChessGuiwxW
            BEFORE
            PUBLIC -DCMAKE_TOOLCHAIN_FILE=C:/vcpkg/scripts/buildsystems/vcpkg.cmake
            PUBLIC "-"
            #PUBLIC -I/usr/local/lib64/wx/include/gtk3-unicode-3.2
            #PUBLIC -D__WXMSW__
            #PUBLIC -D_FILE_OFFSET_BITS=64
            #PUBLIC -DWXUSINGDLL
            #PUBLIC -D__WXGTK__)
            #PUBLIC -pthread)
            )
    target_include_directories( MichouChessGuiwxW
            PUBLIC "C:/vcpkg/installed/x64-windows/include"
            PUBLIC "C:/vcpkg/installed/x64-windows/debug/bin"
            PUBLIC "C:/vcpkg/packages/opengl_x64-windows"
            PUBLIC "C:/Program Files (x86)/Windows Kits/10/Lib/10.0.19041.0/um/x64")
    target_link_options(MichouChessGuiwxW
            BEFORE

            #PUBLIC -static)
            PUBLIC /SUBSYSTEM:WINDOWS)

endif(UNIX)
