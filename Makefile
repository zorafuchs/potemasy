testit:
	mkdir -p build
	gcc lib/unity/unity.c src/system_check.c test/test_system_check.c -o build/test_system_check.out
	./build/test_system_check.out