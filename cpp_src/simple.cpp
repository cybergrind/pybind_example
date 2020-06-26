#include <stdio.h>
#include <pybind11/pybind11.h>

class Some {
public:
  Some() {
    printf("Constructor\n");
  }
  ~Some() {
    printf("Destructor\n");
  }
};


int add(long i, long j) {
  auto s = Some();
  return 2 * (i + j);
}


namespace py = pybind11;

PYBIND11_MODULE(example, m) {
  m.def("add", &add);
}
