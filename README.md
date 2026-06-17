# DIT 633 - Development of Embedded and Realtime systems

[![License: CC BY-SA 4.0](https://img.shields.io/badge/License-CC%20BY--SA%204.0-lightgrey.svg)](https://creativecommons.org/licenses/by-sa/4.0/)

This repository contains the source code for the first lecture, starting 2025

## Changes to the previous years
1. We use WSL2 and not Visual Studio 2020 any more
2. We use header files and Makefiles

## Build examples
You can now build and run each lecture example as a separate target:
- `make main_arguments`
- `make main_loops`
- `make main_inout`
- `make main_getch`
- `make main_fgets`
- `make main_assert`

## License and how to reference this code

This work is licensed under [Creative Commons Attribution-ShareAlike 4.0 International (CC BY-SA 4.0)](https://creativecommons.org/licenses/by-sa/4.0/).

If you use or adapt this code, please cite it as:

> Staron, M. (2025). *DIT633 – Development of Embedded and Realtime Systems: Lecture 1 source code*. GitHub. https://github.com/miroslawstaron/DIT633_lecture_1

BibTeX:
```bibtex
@misc{staron2025dit633,
  author    = {Staron, Miroslaw},
  title     = {{DIT633 -- Development of Embedded and Realtime Systems: Lecture 1 source code}},
  year      = {2025},
  publisher = {GitHub},
  url       = {https://github.com/miroslawstaron/DIT633_lecture_1},
  license   = {CC BY-SA 4.0}
}
```

## Rules for making changes
I appreciate if you add cool programs and ideas for the lecture. Here is how to do it:

1. Add a new file with the new function
2. Declare the function in myHeader.h
3. Add a piece of code that calls this function from the main() in main.c
4. Create a pull request with a short description of the rationale