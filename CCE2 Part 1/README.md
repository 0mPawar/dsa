# 🎵 Music Playlist Manager using Doubly Linked List

## 1. Project Overview

The **Music Playlist Manager** is a menu-driven C++ application that manages a playlist using a **Doubly Linked List**. It allows users to add and delete songs, display the playlist in forward and reverse order, navigate between songs, and display the complete playlist.

Each song is represented as a node containing the song name and two pointers, `prev` and `next`, which connect it to the previous and next songs.

## 2. Objectives

- To implement a Doubly Linked List using C++.
- To perform insertion and deletion of songs dynamically.
- To demonstrate forward and reverse traversal.
- To implement next and previous song navigation.
- To manage the currently selected song using a pointer.
- To understand dynamic memory allocation and pointer manipulation.

## 3. Features

1. **Add Song** – Adds a new song at the end of the playlist.
2. **Delete Song** – Deletes a song by its name.
3. **Display Forward** – Displays all songs from first to last.
4. **Display Reverse** – Displays all songs from last to first.
5. **Play Current Song** – Displays the currently selected song.
6. **Play Next Song** – Moves to the next song in the playlist.
7. **Play Previous Song** – Moves to the previous song.
8. **Play Complete Playlist** – Displays each song sequentially.
9. **Repeat All Songs** – Plays the complete playlist for one cycle in the current implementation.
10. **Show Current Song** – Displays the currently selected song.
11. **Exit** – Terminates the program using menu option `0`.

## 4. Data Structure Used

### Doubly Linked List

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
```

The `head` pointer refers to the first song, while the `current` pointer refers to the currently selected song.

### Pointer Operations

| Pointer   | Purpose                                                                                               |
| --------- | ----------------------------------------------------------------------------------------------------- |
| `p`       | Used for a newly allocated node, the node to be deleted, and traversal in display/playback functions. |
| `q`       | Used as a navigation/traversal pointer, including finding the last node during insertion.             |
| `head`    | Points to the first song in the playlist.                                                             |
| `current` | Tracks the currently selected song.                                                                   |
| `prev`    | Links a song to its previous song.                                                                    |
| `next`    | Links a song to its next song.                                                                        |

### Navigation Logic

- **Next Song:** `current = current->next`
- **Previous Song:** `current = current->prev`
- **Forward Traversal:** `p = p->next`
- **Reverse Traversal:** `p = p->prev`

## 5. Technologies Used

- **Programming Language:** C++
- **Data Structure:** Doubly Linked List
- **IDE:** Visual Studio Code
- **Compiler:** GCC (`g++`) or another compatible C++ compiler
- **Version Control:** Git and GitHub

## 6. How to Run the Project

### Step 1: Save the Source Code

Save the program as `MusicPlaylist.cpp`.

### Step 2: Open the Project Folder

Open the folder in Visual Studio Code or a terminal.

### Step 3: Compile the Program

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

## 7. Testing

Test the program using the following cases:

- Performing operations on an empty playlist.
- Adding one song and multiple songs.
- Displaying the playlist in forward and reverse order.
- Deleting the first, middle, and last songs.
- Attempting to delete a song that does not exist.
- Playing the current song.
- Moving to the next and previous songs.
- Attempting to move next from the last song.
- Attempting to move previous from the first song.
- Playing the complete playlist.
- Repeating the playlist for one cycle.
- Exiting the application properly.

## 8. Learning Outcomes

- Understood the implementation of a Doubly Linked List in C++.
- Learned dynamic node creation and deletion.
- Practised pointer manipulation and memory management.
- Implemented forward and reverse traversal.
- Implemented bidirectional navigation using `prev` and `next`.
- Applied linked-list concepts to a music playlist application.

## 9. Limitations

- The program displays song names but does not play actual audio.
- Songs are stored in memory and are not saved permanently.
- The Repeat All option currently performs only one complete cycle.
- Playlist navigation does not wrap automatically from the last song to the first song.

## 10. Project Information

- **Subject:** Data Structures and Algorithms (DSA)
- **CCE:** CCE-2 P1 – Case Study
- **Unit:** Doubly Linked List
- **Project Title:** Music Playlist Manager using Doubly Linked List
- **Academic Year:** 2026–2027
- **Course:** S.Y. B.Tech, Electronics and Computer Engineering
- **Institution:** Amrutvahini College of Engineering, Sangamner

## 11. Conclusion

The Music Playlist Manager demonstrates the practical implementation of a Doubly Linked List in C++. It supports song insertion, deletion, forward and reverse traversal, and navigation using `prev` and `next` pointers. This project helps develop a clear understanding of linked-list operations, dynamic memory allocation, and pointer management through a real-world application.
