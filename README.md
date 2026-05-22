# CPP labs

One GitHub repository for all C++ laboratory works from checkpoints kr2, kr3 and kr4.

## Structure

```text
cpp-labs/
|-- CMakeLists.txt
|-- common/                         # reusable helpers, if needed
|-- docs/assignments/               # put original PDF tasks here
|-- kr2/
|   `-- practice06_arrays_strings/
|       |-- arrays/main.cpp
|       `-- strings/main.cpp
|-- kr3/
|   |-- practice07_functions_pointers/
|   `-- practice08_recursion/
`-- kr4/
    |-- practice09_structs/
    |-- practice10_files/
    |-- practice11_classes/
    `-- practice12_static_virtual/
```

## How to build

### Visual Studio

1. `File -> Open -> Folder...`
2. Choose this repository folder.
3. Wait until CMake configuration finishes.
4. Select the required target, for example `kr4_pr11_fraction`.
5. Press `Ctrl+F5` to run without debugging.

### VS Code

1. Install recommended extensions from `.vscode/extensions.json`.
2. Open this repository folder.
3. Run `CMake: Configure`.
4. Select a build target in the bottom panel.
5. Run `CMake: Build` and then `CMake: Run Without Debugging`.

## Report format for each practice

Each practice folder should contain its own `README.md` with:

1. Task statement.
2. Variant number.
3. Build/run target name.
4. Test input data.
5. Program output.
6. Short conclusion.

## Notes

Use `int main()`, not `void main()`.
Keep generated files, `.exe` files and build folders out of Git.
