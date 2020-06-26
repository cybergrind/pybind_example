import pytest
from fan_tools.python import rel_path
from fan_tools.unix import succ, cd


@pytest.fixture(scope='session', autouse=True)
def cpp_module():
    with cd(rel_path('../..')):
        succ('make example.so')


def test_cpp_module():
    import example
    assert example.add(1, 2) == 3
    assert example.add(8, 2) == 10
