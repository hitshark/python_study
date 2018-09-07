import ctypes

ll = ctypes.cdll.LoadLibrary
lib = ll("./libpycallc.so")
foo = lib.foo
disp = lib.disp
foo(1,3)
disp()

libcpp = ll("./libpycallc++.so")
libcpp.view()
