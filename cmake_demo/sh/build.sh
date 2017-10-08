#!/bin/sh
export CUR_PATH=${PWD}
if [ ! -d ../build ];
then    
    mkdir -p ../build;
fi
cd ../build

rm -rf ./CMakeFiles ./cmake_install.cmake ./*CMakeCache.txt ./Makefile ./install_manifest.txt
cmake -DPOSIX=ON  ../
make
#make install