# Particular Project 2 – Informatica

🇮🇹 [Italiano](#-italiano) | 🇬🇧 [English](#-english)

## 🇮🇹 Italiano

### 📌 Descrizione
Progetto scolastico di **Informatica**: un programma che **verifica se un numero è primo**. Lo stesso algoritmo è scritto in due versioni:
- **C++** per il computer: legge i numeri da tastiera e stampa il risultato nel terminale;
- **Arduino** (sketch `.ino`): legge i numeri dal Monitor Seriale e risponde sulla stessa porta seriale.

In entrambi i casi il programma chiede un numero, controlla se è primo (i numeri ≤ 1 non sono considerati primi; per gli altri si cercano divisori da 2 fino a metà del numero), stampa il risultato, attende 1 secondo e chiede un nuovo numero, all'infinito.

I messaggi del programma sono in italiano.

### 📂 Contenuto

| Percorso | Descrizione |
|---|---|
| `File CPP/Particular Project 2.cpp` | Codice sorgente C++ (versione da terminale) |
| `File CPP/Particular Project 2.exe`, `.o` | Eseguibile Windows e file oggetto già compilati |
| `File CPP/Particular Project 2.workspace`, `.workspace.layout` | File di workspace di Code::Blocks (quasi vuoti, non contengono un progetto) |
| `File INO/Particular Project 2.ino` | Sketch Arduino (versione con comunicazione seriale) |
| `File INO/Particular Project 2.fzz` | Progetto Fritzing con la scheda Arduino Uno |
| `File INO/Particular Project 2 (Vista Breadboard/Schema/PCB).png` | Immagini esportate da Fritzing nelle tre viste |

### 🛠️ Tecnologie utilizzate
- **C++** (librerie standard `iostream`, `chrono`, `thread`)
- **Arduino** (scheda Arduino Uno, comunicazione seriale a 9600 baud)
- **Code::Blocks** e **Fritzing**

### ▶️ Come eseguire
**Versione C++**
```bash
cd "File CPP"
g++ "Particular Project 2.cpp" -o "Particular Project 2"
./"Particular Project 2"
```
In alternativa, su Windows si può avviare direttamente `Particular Project 2.exe` oppure aprire il file `.cpp` con Code::Blocks e compilarlo da lì.

**Versione Arduino**
1. Apri `File INO/Particular Project 2.ino` con l'**Arduino IDE**.
2. Collega una scheda Arduino Uno e carica lo sketch.
3. Apri il **Monitor Seriale** a **9600 baud** e inserisci i numeri da verificare.

Il file `.fzz` si apre con **Fritzing**.

### 📋 Requisiti
- Un compilatore C++ (es. `g++`) oppure Code::Blocks
- Arduino IDE e una scheda Arduino Uno (per la versione `.ino`)
- Fritzing (facoltativo, solo per aprire il file `.fzz`)

### 👤 Autore
[MatteoMgr2008](https://github.com/MatteoMgr2008)

---

## 🇬🇧 English

### 📌 Description
A school project for **Computer Science (Informatica)**: a program that **checks whether a number is prime**. The same algorithm comes in two versions:
- **C++** for the computer: reads numbers from the keyboard and prints the result in the terminal;
- **Arduino** (`.ino` sketch): reads numbers from the Serial Monitor and replies over the same serial port.

In both cases the program asks for a number, checks whether it is prime (numbers ≤ 1 are not considered prime; otherwise it looks for divisors from 2 up to half of the number), prints the result, waits 1 second and asks for a new number, forever.

The program messages are in Italian.

### 📂 Contents

| Path | Description |
|---|---|
| `File CPP/Particular Project 2.cpp` | C++ source code (terminal version) |
| `File CPP/Particular Project 2.exe`, `.o` | Precompiled Windows executable and object file |
| `File CPP/Particular Project 2.workspace`, `.workspace.layout` | Code::Blocks workspace files (nearly empty, they contain no project) |
| `File INO/Particular Project 2.ino` | Arduino sketch (serial communication version) |
| `File INO/Particular Project 2.fzz` | Fritzing project with the Arduino Uno board |
| `File INO/Particular Project 2 (Vista Breadboard/Schema/PCB).png` | Images exported from Fritzing in its three views |

### 🛠️ Technologies
- **C++** (standard libraries `iostream`, `chrono`, `thread`)
- **Arduino** (Arduino Uno board, serial communication at 9600 baud)
- **Code::Blocks** and **Fritzing**

### ▶️ How to run
**C++ version**
```bash
cd "File CPP"
g++ "Particular Project 2.cpp" -o "Particular Project 2"
./"Particular Project 2"
```
Alternatively, on Windows you can run `Particular Project 2.exe` directly or open the `.cpp` file in Code::Blocks and build it from there.

**Arduino version**
1. Open `File INO/Particular Project 2.ino` in the **Arduino IDE**.
2. Connect an Arduino Uno board and upload the sketch.
3. Open the **Serial Monitor** at **9600 baud** and type the numbers to check.

The `.fzz` file opens with **Fritzing**.

### 📋 Requirements
- A C++ compiler (e.g. `g++`) or Code::Blocks
- Arduino IDE and an Arduino Uno board (for the `.ino` version)
- Fritzing (optional, only to open the `.fzz` file)

### 👤 Author
[MatteoMgr2008](https://github.com/MatteoMgr2008)
