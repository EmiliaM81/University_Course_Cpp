#!/bin/bash

cd build

rm -r *
cp ../CMakeLists1.txt ../CMakeLists.txt
cmake ../
make
cp compil1 ../bin

rm -r *
cp ../CMakeLists2.txt ../CMakeLists.txt
cmake ../
make
cp compil2 ../bin

rm -r *
cp ../CMakeLists3.txt ../CMakeLists.txt
cmake ../
make
cp compil3 ../bin

cd ../
