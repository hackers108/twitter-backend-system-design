# Micro-Tweets & Feed (C++)

A scalable Twitter-like backend system implemented in C++ supporting tweet posting, follow/unfollow, and efficient news feed generation.

---

## Live Demo
Run the project online:  
👉 https://replit.com/@hackers108/Micro-Tweets-Feeds

Note:
- Click **Run ** to execute the program  
- If prompted, click **Remix**
- Then click **Tools&Files** 
- Then use the console to enter commands 

## Features
- Post tweets in real-time
- Follow / Unfollow users
- Retrieve top 10 most recent tweets
- Efficient feed generation using heap (priority queue)

---

## Concepts Used
- HashMap (unordered_map)
- HashSet (unordered_set)
- Priority Queue (Max Heap)
- Linked List
- System Design Principles

---

##  How It Works
- Each user maintains a linked list of tweets
- Tweets are ordered using a global timestamp
- News feed is generated using a max heap (merging k sorted tweet lists)

---

## ⏱ Time Complexity

| Operation        | Complexity |
|-----------------|----------|
| Post Tweet      | O(1)     |
| Follow/Unfollow | O(1)     |
| Get News Feed   | O(N log K) |

---

##  Project Structure

micro-tweets-feed/
├── Twitter.h
├── Twitter.cpp
├── main.cpp

---

## Example Output

===== Micro-Tweets & Feed =====

1. Post Tweet
2. Get News Feed
3. Follow User
4. Unfollow User
5. Exit

---

##  Run Locally

g++ main.cpp Twitter.cpp -o twitter
./twitter

---

## Key Highlights
- Designed a mini-twitter like system using system design and DSA
- Implemented efficient feed retrieval using heap-based merging
- Built an interactive CLI-based simulation
