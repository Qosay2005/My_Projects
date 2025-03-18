#include <iostream>
#include <unordered_map>
#include <sstream>
#include <vector>
using namespace std;
/*
How the code works ->
Emoji Mapping (unordered_map) 📜

A) dictionary-like structure stores words with their corresponding emojis, e.g., "love" -> ❤️.
===================================================================================================
B) Converting Text to Emojis 🔄
The program reads a sentence, checks each word against the emoji map, and replaces matching words with their emojis.
If a word contains part of a mapped keyword, it is replaced with the corresponding emoji.
====================================================================================================================
C) Sentiment Analysis 😃😢
The program evaluates if the sentence is positive (e.g., contains "happy", "joy") or negative (e.g., "sad", "angry").
If positive words dominate, it adds 🥳, and if negative words dominate, it adds 😞.
======================================================================================================================
D)Adding Custom Emojis ✨

The user can input a new word and its emoji, which is stored in the emoji map for future use.
=======================================================================================================================
E) Displaying Available Emojis 📋
Users can view a list of all predefined and custom-added emojis.
========================================================================================================================
F) User Menu System 🎛

The program offers a menu where users can:
Convert text to emojis
Add a new emoji
Show all available emojis
Exit
=========================================================================================================================
*/

unordered_map<string, string> emojiMap = {  // map emojy
    {"love", "❤️"}, {"pizza", "🍕"}, {"cats", "😺"},
    {"happy", "😊"}, {"sun", "☀"}, {"smile", "😃"},
    {"sad", "😢"}, {"angry", "😠"}, {"hello", "👋"},
    {"goodbye", "👋"}, {"cool", "😎"}, {"fire", "🔥"},
    {"laugh", "😂"}, {"joy", "😂"}, {"funny", "😂"},
    {"heart", "❤️"}, {"hot", "🔥"}, {"happy", "😊"},
    {"cry", "😢"}, {"tears", "😢"}, {"furious", "😠"},
    {"rain", "🌧"}, {"storm", "⛈"}, {"snow", "❄"},
    {"coffee", "☕"}, {"music", "🎵"}, {"dance", "💃"},
    {"sleep", "😴"}, {"car", "🚗"}, {"train", "🚆"},
    {"book", "📖"}, {"computer", "💻"}, {"game", "🎮"},
    {"money", "💰"}, {"gift", "🎁"}, {"party", "🎉"}
};


void addEmoji() { // for add new emoge from user
    string word, emoji;
    cout << "Enter the word you want to add an emoji for: ";
    cin >> word;
    cout << "Enter the emoji: ";
    cin >> emoji;
    emojiMap[word] = emoji;
    cout << "Emoji added successfully!" << endl;
}


void showEmojiList() {   // show menue emojy
    cout << "\nEmoji List:" << endl;
    for (const auto& pair : emojiMap) {
        cout << pair.first << " -> " << pair.second << endl;
    }
}


string analyzeSentiment(const vector<string>& words) {  // analyzes statement

    int positive = 0, negative = 0;
    for (const string& word : words) {
        if (word == "happy" || word == "love" || word == "smile" || word == "joy" || word == "funny") positive++;
        if (word == "sad" || word == "angry" || word == "cry" || word == "tears" || word == "furious") negative++;
    }
    if (positive > negative) return "🥳";
    if (negative > positive) return "😞";
    return "";
}


string textToEmoji(string text) {  // convert text for emojy
    stringstream ss(text);
    string word, result;
    vector<string> words;
    while (ss >> word) {
        words.push_back(word);
        for (const auto& pair : emojiMap) {
            if (word.find(pair.first) != string::npos) {
                result += pair.second + " ";
                break;
            }
        }
    }
   // add analizes statement
    result += analyzeSentiment(words);
    return result.empty() ? "❌ No emoji found!" : result;
}

int main() {
    int choice;
    do {
        cout << "\nMenu:\n1. Convert text to emoji\n2. Add new emoji\n3. Show emoji list\n4. Exit\nChoose an option: ";
        cin >> choice;
        cin.ignore(); // for avoid input

        if (choice == 1) {
            string input;
            cout << "Enter a sentence: ";
            getline(cin, input);
            cout << "\nEmoji Output: " << textToEmoji(input) << endl;
        } else if (choice == 2) {
            addEmoji();
        } else if (choice == 3) {
            showEmojiList();
        }
    } while (choice != 4);


}
