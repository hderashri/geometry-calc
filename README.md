# 🧼 Geometry Calculator App (C++)

This is a modular, extensible Geometry Calculator built in C++ using Object-Oriented Programming (OOP) principles. It supports various shape-based computations such as distances and areas, and is designed to be easily extendable for future geometric operations.

---

## 📁 Project Structure

```
GeometryCalculator/
├── Main.cpp
├── Shapes/
│   ├── Point3D.cpp / .h
│   ├── Triangle.cpp / .h
│   └── Circle.cpp / .h
├── Operations/
│   ├── AreaCalculator.cpp / .h
│   ├── Point3DDistanceCalculator.cpp / .h
├── Utils/
│   ├── IOHelper.cpp / .h
├── Interfaces/
│   ├── IShape.h
│   └── IOperation.h
├── DataTypes/
│   └── (future custom types if needed)
```

---

## 🚀 Features

* Calculate **distance** between two 3D points
* Calculate **area** of a triangle in 3D space
* **Interactive** CLI input/output
* Easily **extendable** to new shapes and operations (like circles, rectangles, etc.)
* Follows **SOLID OOP principles** (interfaces, abstraction, modularity)

---

## 🛠️ Build & Run

### ✅ Prerequisites:

* C++ compiler with C++17 support (e.g., `g++`)
* Command line access (Linux, macOS, or WSL for Windows)

### 🔧 Compile:

```bash
g++ -std=c++17 -I. Main.cpp Shapes/*.cpp Operations/*.cpp Utils/*.cpp Interfaces/*.cpp DataTypes/*.cpp -o GeometryApp
```

### ▶️ Run:

```bash
./GeometryApp
```

---

## 🧱 Design Highlights

### 🔄 Interfaces

* `IShape` — Base interface for all shapes
* `IOperation` — Base interface for all operations (distance, area, etc.)

### 🧹 Modular Structure

* Each shape (`Point3D`, `Triangle`, etc.) lives in its own file under `/Shapes`
* Each operation has its own module under `/Operations`

### 👨‍💻 Input Handling

* `IOHelper` encapsulates reusable input/output utilities

---

## ✨ Sample Features to Add in Future

* Area of **multiple triangles**
* Circle **area and circumference**
* **Perimeter** and **volume** calculations
* **Graphical UI** for visualizing shapes

---

## 📜 License

This project is for educational and demonstration purposes. Feel free to fork and extend it.

---

## 🙇‍♂️ Author

**Your Name** – [GitHub Profile](https://github.com/yourusername)
