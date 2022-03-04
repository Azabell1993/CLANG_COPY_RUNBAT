gcc -c -o ShowErrorMsg.o ShowErrorMsg.c
gcc -o copy.exe copy.c ShowErrorMsg.o
gcc -c -DBUILD_MY_DLL ShowErrorMsg.c
gcc -shared -o ShowErrorMsg.dll ShowErrorMsg.o -Wl,--out-implib,lib-ShowErrorMsg.a