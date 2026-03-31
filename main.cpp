#include "Twitter.h"
#include <iostream>

using namespace std;

int main() {
    Twitter twitter;
    int choice;

    cout << "===== Micro-Tweets & Feed =====\n";

    while (true) {
        cout << "\nChoose an option:\n";
        cout << "1. Post Tweet (creates user if not exist)\n";
        cout << "2. Get News Feed\n";
        cout << "3. Follow User\n";
        cout << "4. Unfollow User\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";

        cin >> choice;

        if (choice == 1) {
            int userId, tweetId;
            cout << "Enter User ID: ";
            cin >> userId;
            cout << "Enter Tweet ID: ";
            cin >> tweetId;

            twitter.postTweet(userId, tweetId);
            cout << "Tweet posted successfully!\n";
        }

        else if (choice == 2) {
            int userId;
            cout << "Enter User ID: ";
            cin >> userId;

            vector<int> feed = twitter.getNewsFeed(userId);

            if (!feed.empty()) {
                cout << "News Feed: ";
                for (int id : feed) cout << id << " ";
                cout << endl;
            }
        }

        else if (choice == 3) {
            int followerId, followeeId;
            cout << "Enter Follower ID: ";
            cin >> followerId;
            cout << "Enter Followee ID: ";
            cin >> followeeId;

            twitter.follow(followerId, followeeId);
        }

        else if (choice == 4) {
            int followerId, followeeId;
            cout << "Enter Follower ID: ";
            cin >> followerId;
            cout << "Enter Followee ID: ";
            cin >> followeeId;

            twitter.unfollow(followerId, followeeId);
        }

        else if (choice == 5) {
            cout << "Exiting...\n";
            break;
        }

        else {
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}