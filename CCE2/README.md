# 🎵 Music Playlist Manager using Doubly Linked List

## 📌 Project Overview

The **Music Playlist Manager** is a menu-driven C++ application that manages a playlist using a **Doubly Linked List**. It allows users to add and delete songs, display the playlist in forward and reverse order, navigate between songs, and play the complete playlist.

Each song is represented as a node containing the song name and two pointers, `prev` and `next`, which connect it to the previous and next songs.

## 🎯 Objectives

- To implement a Doubly Linked List using C++.
- To perform insertion and deletion of songs dynamically.
- To demonstrate forward and reverse traversal.
- To implement next and previous song navigation.
- To manage the currently selected song using a pointer.
- To understand dynamic memory allocation and pointer manipulation.

## ✨ Features

1. **Add Song** – Adds a new song at the end of the playlist.
2. **Delete Song** – Deletes a song by its name.
3. **Display Forward** – Displays all songs from first to last.
4. **Display Reverse** – Displays all songs from last to first.
5. **Play Current Song** – Displays the currently selected song.
6. **Play Next Song** – Moves to the next song in the playlist.
7. **Play Previous Song** – Moves to the previous song.
8. **Play Complete Playlist** – Displays each song sequentially.
9. **Repeat All Songs** – Plays the complete playlist for one cycle.
10. **Show Current Song** – Displays the currently selected song.
11. **Exit** – Terminates the program.

## 🧠 Data Structure Used

**Doubly Linked List**

A Doubly Linked List is a linear data structure in which each node contains data and two pointers:

- `name` – Stores the song title.
- `prev` – Points to the previous song.
- `next` – Points to the next song.

### Node Structure

```cpp
struct Song {
    string name;
    Song* prev;
    Song* next;
};
```

### Example Playlist

```text
head
 |
 v
NULL <-> Song A <-> Song B <-> Song C <-> NULL
          prev/next links in both directions
```

The `head` pointer refers to the first song, while the `current` pointer refers to the currently selected song.

## 🔗 Pointer Operations

| Pointer   | Purpose                                                    |
| --------- | ---------------------------------------------------------- |
| `p`       | Points to a newly created node or the node to be deleted.  |
| `q`       | Traverses the list to find the last node during insertion. |
| `head`    | Points to the first song in the playlist.                  |
| `current` | Tracks the currently selected song.                        |
| `prev`    | Links a song to its previous song.                         |
| `next`    | Links a song to its next song.                             |

### Navigation Logic

- **Next Song:** `current = current->next`
- **Previous Song:** `current = current->prev`
- **Forward Traversal:** `p = p->next`
- **Reverse Traversal:** `p = p->prev`

## ⚙️ Technologies Used

- **Programming Language:** C++
- **Data Structure:** Doubly Linked List
- **IDE:** Visual Studio Code
- **Compiler:** GCC (g++) or another compatible C++ compiler
- **Version Control:** Git and GitHub

## ▶️ How to Run the Project

### Step 1: Clone the Repository

```bash
git clone <repository-url>
```

### Step 2: Open the Project Folder

```bash
cd <repository-folder>
```

### Step 3: Compile the Program

Save the source code as `MusicPlaylist.cpp` and compile it using:

```bash
g++ MusicPlaylist.cpp -o MusicPlaylist
```

### Step 4: Run the Program

**Windows:**

```bash
.\MusicPlaylist.exe
```

**Linux/macOS:**

```bash
./MusicPlaylist
```

## 🧪 Testing

The program can be tested using the following cases:

- Adding one or multiple songs.
- Displaying the playlist in forward and reverse order.
- Deleting the first, middle, and last songs.
- Attempting to delete a song that does not exist.
- Playing the current song and navigating to the next or previous song.
- Attempting to navigate beyond the first or last song.
- Playing the complete playlist and repeating it for one cycle.
- Performing operations on an empty playlist.
- Exiting the application through the menu.

## 📚 Learning Outcomes

- Understood the implementation of a Doubly Linked List in C++.
- Learned dynamic node creation and deletion.
- Practised pointer manipulation and memory management.
- Implemented bidirectional traversal and navigation.
- Applied linked-list concepts to a real-world music playlist application.

## ⚠️ Limitations

- The program displays song names but does not play actual audio.
- Songs are stored in memory and are not saved permanently.
- The Repeat All option currently performs only one complete cycle.
- Playlist navigation is linear and does not wrap automatically from the last song to the first.

## 👥 Project Information

- **Subject:** Data Structures and Algorithms (DSA)
- **CCE:** Case Study 2
- **Project Title:** Music Playlist Manager using Doubly Linked List
- **Academic Year:** 2026–2027
- **Course:** S.Y. B.Tech, Electronics and Computer Engineering
- **Institution:** Amrutvahini College of Engineering, Sangamner

## 🏁 Conclusion

The Music Playlist Manager demonstrates the practical implementation of a Doubly Linked List in C++. It supports song insertion, deletion, forward and reverse traversal, and navigation using `prev` and `next` pointers. This project helps develop a clear understanding of linked-list operations, dynamic memory allocation, and pointer management through a real-world application.
