
example.so: cpp_src/*
	mkdir -p build
	cd build &&	cmake .. && make -j8 && cp example.* ../example.so
