# Basic example of using `fstream`

In this code we will work with the fstream library for working with files.

Here we will simply create a `text.txt` file, and write the Hello World string there, and then read this string from the file.

## Compilation
This example uses the **CMake** builder, make sure you have CMake version 3.8 or higher.

To build, create a `build` directory and compile the program there.

```
mkdir build
cd build
cmake ..
make
./files
```

After assembly and compilation, the compiled file will also be located in the `build/` folder, and the `file.txt` file will be located there too.