# ✈️ Airport Runway Scheduling Simulation

## 📌 Overview
This project simulates an airport runway scheduling system using Linux system calls and Inter-Process Communication (IPC).

Multiple planes request access to a shared runway for landing and takeoff. A central controller ensures that only one plane uses the runway at a time while handling priorities and system conditions like weather.

---

## 🎯 Objectives
- Simulate real-time runway allocation
- Demonstrate process creation using `fork()`
- Implement IPC using message queues and shared memory
- Handle concurrent operations safely
- Log system activity using file I/O

---

## 🚀 Features
- Multi-process architecture
- Plane request generation at random intervals
- Centralized runway scheduling system
- Weather condition simulation
- Continuous logging system
- Safe resource sharing using IPC

---

## 🧱 Project Structure
airport-runway-scheduling-simulation/
│
├── src/ # Source code files
├── include/ # Header files
├── docs/ # Project documentation
│ └── project_report.md
│
├── Makefile # Build file
├── README.md # Project overview


---

## ⚙️ Technologies Used
- C Programming
- Linux System Calls
- IPC Mechanisms:
  - Message Queues
  - Shared Memory
  - Pipes
- File Handling (`open`, `write`, `close`)

---

## 🔄 System Architecture

### Processes:
- **Main Process** → Initializes and manages system
- **Runway Controller** → Handles scheduling
- **Plane Generator** → Creates plane requests
- **Weather Monitor** → Updates weather conditions
- **Logger** → Writes logs to file

---

## 🔗 IPC Mechanisms

| Communication | Method |
|--------------|--------|
| Plane → Controller | Message Queue |
| Controller → Plane | Message Queue |
| Weather → Controller | Shared Memory |
| Controller → Logger | Pipe |

---

## ▶️ How to Run

### Step 1: Build
```bash
make
Step 2: Run
make run
Step 3: Clean
make clean



