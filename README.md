# AutoDealership Program

![Car Rental](./src/car_rental_dealership.jpg)
_Image by [David McBee] from [https://www.pexels.com/photo/aerial-photo-of-building-395537/]_


Welcome to the **AutoDealership Program**! This is a simple, terminal-based car rental system that allows customers to rent cars for a specified number of days. The system calculates the total rental cost based on the type of car selected and the rental duration.

This project demonstrates key concepts of **Object-Oriented Programming (OOP)**, such as classes, inheritance, and polymorphism, making it an excellent example for learning and understanding these principles.

## Table of Contents

- [Features](#features)
- [Concepts Demonstrated](#concepts-demonstrated)
- [Installation](#installation)
- [Demonstration](#demonstration)
- [License](#license)

## Features

- **User-Friendly Interface**: The program is designed with an interactive command-line interface (CLI) for easy use.
- **Car Selection**: Choose from a list of available cars.
- **Rental Duration**: Set the number of rental days, and the system calculates the total cost.
- **OOP Design**: The system is structured using classes and objects to represent real-world entities like cars and rental contracts.
- **Flexible Pricing**: Different rates are applied to different car models.

## Concepts Demonstrated

This project demonstrates several core **Object-Oriented Programming** principles:

- **Classes and Objects**: The program uses classes like `logoPage`, `customer`, and `rent` to model entities such as cars, customers, and rental contracts.
- **Encapsulation**: Each class encapsulates its own attributes and methods, such as car information and rental calculation.
- **Inheritance**: The `rent` class inherits from the `customer` class to reuse customer-related data and functionality.
- **Polymorphism**: Different car models are treated as polymorphic objects, with the rental price calculation differing based on the chosen car model.
- **Abstraction**: The user interacts with simplified interfaces to select cars, input rental duration, and view the total cost.

### Key Classes

- **logoPage**: Displays the welcome logo and introductory information.
- **customer**: Holds customer-related information like name and selected car.
- **rent**: Handles the car rental process, including car selection, rental duration input, price calculation, and invoice generation.



## Installation

To set up and run the program on your local machine:

1. **Clone the repository**:
    ```bash
    git clone https://github.com/your-username/AutoDealership.git
    cd AutoDealership
    ```

2. **Compile and run the program**:
    - Make sure you have a C++ compiler installed (e.g., GCC, MinGW, or Visual Studio).
    - Compile the code using:
      ```bash
      g++ .\src\main.cpp -o .\bin\AutoDealership
      ```
    - Run the compiled program:
      ```bash
      .\bin\AutoDealership.exe
      ```

## Usage

Once the program is running, the following steps will guide you through renting a car:

1. **Logo Page**: The system displays a welcoming logo and message, pulling details from a file `autoDealerships.txt` and showing the available car options.
2. **Select Car Model**: Choose from the listed cars by entering a letter corresponding to your choice (e.g., A for Ford Endeavour, B for Jeep Compass, C for Maruti Alto).
3. **Enter Rental Duration**: After selecting a car, enter the number of days you wish to rent the car.
4. **Calculate Total Rent**: The system calculates and displays the total rental amount based on the number of days and selected car model.

### Demonstration

![](https://github.com/patelvaidat/project_oops/blob/main/demo/demo_1.gif)

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.