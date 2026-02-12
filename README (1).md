# 🔍 Inverted Search Engine (C)

A **high-performance Inverted Search Engine** implemented in **C**, using **linked lists and file handling** to enable fast, scalable full-text search across multiple files.

This project demonstrates strong fundamentals in **Data Structures**, **Memory Management**, and **Modular C Programming**, and is inspired by real-world search engine indexing techniques.

> ⚡ Built completely by me, end-to-end — from data structure design to implementation and testing.

---

## 🚀 What is Inverted Search?
An **inverted index** maps *words* to the *documents (files)* in which they appear, instead of storing words per document.  
This dramatically improves search performance and is the core idea behind modern search engines.

---

## ✨ Key Features
- 📂 Indexes multiple text files
- 🧠 Efficient word-based searching
- 📊 Displays file-wise word frequency
- 💾 Save & reload database (persistence)
- 🔄 Update database without rebuilding
- 🧪 Robust input and file validation
- 🧩 Clean, modular architecture

---

## 🛠️ Tech Stack & Concepts
- **Language:** C  
- **Data Structures:** Singly Linked Lists, Hash Indexing
- **Core Concepts:**
  - Dynamic memory allocation
  - File I/O
  - String tokenization
  - Modular programming
  - Menu-driven CLI design

---

## 🗂️ Project Structure

```
.
├── main.c                     # Program entry point (menu-driven)
├── inverted_search.h          # Structures & function declarations
├── create_db.c                # Inverted index creation
├── display_db.c               # Database visualization
├── search_db.c                # Word search logic
├── save_db.c                  # Save database to file
├── update_db.c                # Reload database from file
├── validate_user_inputs.c     # Input & file validation
├── helper_operations.c        # Common utility functions
├── data.txt                   # Sample input file
├── db.txt                     # Stored database
└── README.md
```

---

## 🧠 Internal Design

### 🔹 Main Index List
- Stores **unique words**
- Organized by starting character
- Each node contains:
  - Word
  - Number of files
  - Pointer to file list

### 🔹 File Sub-List
- Stores file-specific data
- Each node contains:
  - File name
  - Word occurrence count

This design ensures **efficient insertion, search, and scalability**.

---

## ⚙️ How It Works

### 1️⃣ Database Creation
- Reads multiple files
- Tokenizes content into words
- Builds an inverted index dynamically

### 2️⃣ Searching
- User enters a word
- Engine retrieves all matching files with frequency

### 3️⃣ Persistence
- Database can be saved to disk
- Reloaded later without re-indexing files

---

## ▶️ Build & Run

```bash
gcc *.c
./a.out <File names> (For create new database)
./a.out (For update database only)
```

---

## 📸 Sample Menu

```
Enter your choice:
1. Create Database
2. Display Database
3. Search Word
4. Save Database
5. Update Database
6. Exit
```

---

## 🧪 Edge Cases Handled
- Duplicate file names
- Invalid file paths
- Empty files
- Repeated words
- Dynamic memory cleanup

---

## 🚧 Future Enhancements
- Case-insensitive search
- Stop-word filtering
- Result ranking by relevance
- Binary database storage

---

## 👨‍💻 Author
**Siddharth Gaikwad**  
B.Tech – Electronics & Communication Engineering  
Aspiring Embedded Software Engineer  

📌 *Strong focus on C, Data Structures, and System-level programming*

---

## 📚 References
- Emertxe – Inverted Search Project Specification  
- Data Structures & Algorithms (DSA)

---

⭐ If you find this project useful, feel free to star the repository!
