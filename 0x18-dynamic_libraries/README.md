C Dynamic libraries
library created using commands gcc *.c -c -fpic to create object files for each .c file
-fpic flag keeps the code position independent
gcc *.o -shared -o libname.so creates the dynamic linrary called name, it must be preceeded by lib and terminated by .so
