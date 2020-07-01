#include <stdio.h>
#include <pybind11/pybind11.h>

class SampleClass {
public:
  SampleClass() {
    printf("Constructor\n");
  }
  ~SampleClass() {
    printf("Destructor\n");
  }
};


int add(long i, long j) {
  auto s = SampleClass();
  return i + j;
}


namespace py = pybind11;

PYBIND11_MODULE(example, m) {
  m.def("add", &add);
}
