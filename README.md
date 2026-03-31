# Twitter Backend System Design (C++)

A scalable Twitter-like backend system implemented in C++ supporting tweet posting, follow/unfollow, and efficient news feed generation.

---

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

## How It Works

- Each user maintains a linked list of tweets
- Tweets are ordered using a global timestamp
- News feed is generated using a max heap (merge k sorted lists)

---

## ⏱ Time Complexity

| Operation        | Complexity |
|-----------------|----------|
| Post Tweet      | O(1)     |
| Follow/Unfollow | O(1)     |
| Get News Feed   | O(N log K) |

---

## Run Locally

```bash
g++ main.cpp src/Twitter.cpp -o twitter
./twitter
