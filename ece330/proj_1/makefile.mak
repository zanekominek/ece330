all: test_dynamic test_static

test_dynamic: test_dynamic.c matrix_dynamic.c
	gcc -o test_dynamic test_dynamic.c matrix_dynamic.c 

test_static: test_static.c matrix_static.c
	gcc -o test_static test_static.c matrix_static.c 