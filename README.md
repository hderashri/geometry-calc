# 🧼 Geometry Calculator App (C++)

This is a modular, extensible Geometry Calculator built in C++ using Object-Oriented Programming (OOP) principles. It supports various shape-based computations such as distances and areas, and is designed to be easily extendable for future geometric operations.

---

## 📁 Project Structure

```
GeometryCalculator/
├── Main.cpp
├── Shapes/
│   ├── Pyramid.cpp / .h
│   ├── Quadrilateral.cpp / .h
│   ├── Triangle.cpp / .h
│   └── Sphere.cpp / .h
├── Operations/
│   ├── TrianglrAreaCalculator.cpp / .h
│   ├── Point3DDistanceCalculator.cpp / .h
│   ├── PyramidVolumeCalculator.cpp / .h
│   ├── QuadrilateralAreaCalculator.cpp / .h
│   ├── SphereVolumeCalculator.cpp / .h
├── Utils/
│   ├── IOHelper.cpp / .h
│   ├── ShapeSelector.cpp / .h
├── Interfaces/
│   ├── IShape.h
│   └── IOperation.h
├── DataTypes/
│   └── Point3D.cpp / .h
    └── Vector.cpp / .h
```

---

## 🚀 Features

* **Calculate** geometric operations in 3D space
* **Interactive** CLI input/output
* Easily **extendable** to new shapes and operations
* Follows **SOLID OOP principles** (interfaces, abstraction, modularity)

---

## 🛠️ Build & Run

### ✅ Prerequisites:

* C++ compiler with C++17 support (e.g., `g++`)
* Command line access (Linux, macOS, or WSL for Windows)

### 🔧 Compile:

```bash
g++ -std=c++17 -I. Main.cpp Shapes/*.cpp Operations/*.cpp Utils/*.cpp DataTypes/*.cpp -o GeometryApp
```

### ▶️ Run:

```bash
./GeometryApp
```

---

## 🧱 Design Highlights

### 🔄 Interfaces

* `IShape` — Base interface for all shapes
* `IOperation` — Base interface for all operations

### 📦 DataTypes

* `Point3D` — Data type definition for 3D point
* `Vector` — Data type definition for vector in 3D space

### 🧹 Modular Structure

* Each shape lives in its own file under `/Shapes`
* Each operation has its own module under `/Operations`

### 👨‍💻 Input Handling

* `IOHelper` encapsulates reusable input/output utilities

---

## ✨ Sample Features to Add in Future

* **Meshing** of given shapes
* **Parellel Processing** for better efficiency
* **Graphical UI** for visualizing shapes

---

## 📜 License

This project is for educational and demonstration purposes. Feel free to fork and extend it.

---

## 🙇‍♂️ Author

**Harshit Derashree** – [GitHub Profile](https://github.com/hderashri)
