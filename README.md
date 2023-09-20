# Pittman, Jerry (117077120)
UMD-CP PMRO ENPM808X Fall 2024 <br />
# Week 3 Problems

## -----How to Run-----
### Problem 9-4
cd Week3/SoftwareEngineering_9_4  <br />
`cmake -S ./ -B build/` <br />
`cmake --build build/` <br />
`./build/app/shell-app`

---

### Problem 9-5
cd Week3/SoftwareEngineering_9_5  <br />
`cmake -S ./ -B build/` <br />
`cmake --build build/` <br />
`./build/app/shell-app` <br />
Input desired number to be square rooted when prompted.

---

## Standard install via command-line
# Create make files:
  cmake -S ./ -B build/
# Compile and build the code:
  # rebuild only files that are modified since the last build
  cmake --build build/
  # or rebuild everything from scracth
  cmake --build build/ --clean-first
# Run program: 
  ./build/app/shell-app
# Run tests: 
  ctest --test-dir build/
# Run clean and start over: 
  rm -rf build/
