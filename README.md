# Doxygen_CPP
Trying to learn the process of making documentation of CPP project using Doxygen

### Usage

- Create Doxygen file

```sh
cd project_directory
mkdir doc && cd doc
doxygen -g
doxygen Doxyfile
```
Right now in `doc` directory a file `Doxygen` will be appeared. It has no extension. In this file required modification could be done. For example, I have enabled [Generation of XML](https://github.com/atifkarim/Doxygen_CPP/commit/018cb2d741f608cb214892d4f9f9011033116e50).

- Build the project and access generated doc file

```sh
mkdir build && cd build
cmake .. && make
```
Now navigate to `build/doc/doxygen/html` and find `index.html`. This is the generated doc file. I have plan to move this in another directory rather than `build` directory.


### Resources
1. [Quick setup to use Doxygen with CMake](https://vicrucann.github.io/tutorials/quick-cmake-doxygen/)
1. [CPP / C++ Notes - Doxygen - Documentation Generator](https://caiorss.github.io/C-Cpp-Notes/Doxygen-documentation.html)
1. [A gist rgarding Doxygen CMake](https://gist.github.com/smrfeld/4938ebcbe49cf3671de2fd7257da75b7)
1. [C++ documentation with Doxygen/CMake/Sphinx/Breathe for those of us who are totally lost](https://medium.com/practical-coding/c-documentation-with-doxygen-cmake-sphinx-breathe-for-those-of-use-who-are-totally-lost-7d555386fe13)
