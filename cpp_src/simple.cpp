#include <pybind11/pybind11.h>

int add(long i, long j) {
  return i + j;
}

namespace py = pybind11;

PYBIND11_MODULE(example, m) {
  m.def("add", &add);
}
