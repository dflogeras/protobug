 * protoc poc.proto -cpp_out=.
 * mkdir build
 * cd build
 * CC=clang CXX=clang++ cmake -DCMAKE_BUILD_TYPE=Debug ..
 * make
 * ./tester

 - See valgrind.out, gdb.out for summaries.
 - Running armv7a-unknown-linux-gnueabihf on cubieboard2 (sunxi A20)
 - System compiled with Gentoo gcc-9.3.0-r2
 - Program is compiled with clang/llvm 11.0.1
 - This bug is triggered after upgrading from protobuf-3.13.0 to 3.14.0

