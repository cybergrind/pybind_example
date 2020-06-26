
example.so: cpp_src/*
	mkdir -p build
	cd build &&	cmake .. && make -j8 && cp example.* ../example.so


venv: requirements.txt
	python -m venv venv
	./venv/bin/pip install -r requirements.txt


test:
	./venv/bin/pytest sample
