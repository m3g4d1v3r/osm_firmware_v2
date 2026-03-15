cmake_minimum_required(VERSION 3.13)

include($ENV{OSM_DIR}/src/ports/rp2040/rp2040-pre.cmake)

project(osm_firmware C CXX ASM)

add_definitions(-Dfw_name=pp01b -DFW_NAME=PP01B)

include($ENV{OSM_DIR}/src/ports/rp2040/rp2040-post.cmake)
