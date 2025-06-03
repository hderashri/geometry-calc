Geometry Calculator - Documentation
📌 Overview
The Geometry Calculator is a modular, object-oriented C++ application designed to perform geometric computations in 3D space. This includes calculating distances, areas, and more. The application is built with clean code principles, abstract interfaces, and a scalable architecture.
📁 Project Structure
Folder layout:

GeometryCalculator/
└── src/
    ├── Main.cpp
    ├── Interfaces/
    │   ├── IShape.h
    │   └── IOperation.h
    ├── Shapes/
    │   ├── Point3D.h / .cpp
    │   ├── Triangle.h / .cpp
    │   ├── Circle.h / .cpp
    ├── Operations/
    │   ├── Point3DDistanceCalculator.h / .cpp
    │   ├── AreaCalculator.h / .cpp
    ├── Utils/
    │   └── IOHelper.h / .cpp

🔧 Features
- Calculate distance between two 3D points.
- Calculate area of a triangle in 3D space using vector cross product.
- Modular architecture using interfaces and abstraction.
- Easily extendable to support new shapes and operations.
🛠️ Build Instructions
Prerequisites:
- C++17 or newer
- g++ or clang++
- A Unix-like environment (macOS/Linux) or Windows with appropriate toolchain
To build and run the application:

cd src/
g++ -std=c++17 -I. Main.cpp Shapes/*.cpp Operations/*.cpp Utils/*.cpp -o GeometryApp
./GeometryApp

✍️ Example Usage

--- Geometry Calculator ---

Select Operation:
1. Calculate Distance Between Two Points
2. Calculate Area of Triangle

> 1

Enter coordinates for Point A:
> 1 2 3

Enter coordinates for Point B:
> 4 5 6

Distance between points: 5.196

🚀 Extending the App
To add a new shape:
1. Create a new class in Shapes/, e.g., Sphere.h / .cpp.
2. Implement required methods (input(), getters, etc.).
To add a new operation:
1. Create a new class in Operations/ that inherits from IOperation.
2. Implement the execute() method with your logic.
3. Update Main.cpp to add a menu option to trigger this operation.
👨‍💻 Author
Developed by [Your Name] as part of a modular and maintainable C++ OOP design study project.
📄 License
This project is open source and available under the MIT License.
![image](https://github.com/user-attachments/assets/da8200e7-7172-4e23-9458-3d9c7914387c)
