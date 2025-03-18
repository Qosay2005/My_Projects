
# Emoji Converter: Transform Words into Emotions! 🌟

Welcome to the **Emoji Converter**, where your text gets transformed into a language of feelings, symbols, and joy! This simple program takes ordinary sentences and turns them into emojis, adding some fun to your words. Whether you're happy, sad, or just want to make things more colorful—this tool has got you covered! 🌈

## Features ✨
- **Text to Emoji**: Input a sentence, and watch it turn into a string of emojis.
- **Add New Emoji**: Got a word that doesn’t have an emoji yet? Add your own custom emoji!
- **Show Emoji List**: Want to see what emojis are already available? Check out the list!
- **Sentiment Analysis**: Feelings matter! The program analyzes the sentiment of your text and adds a corresponding emotion at the end (because who doesn’t love an extra dose of emotion?).

## How It Works 💡

### 1. Run the Program:
Simply run the program in a C++ environment.

### 2. Choose from the Menu:
Once the program is running, you’ll see the main menu:
```
Menu:
1. Convert text to emoji
2. Add new emoji
3. Show emoji list
4. Exit
```

- **Option 1**: Convert any text into emojis by selecting this option.
- **Option 2**: Want to add a new emoji for a word? Choose this option and add it!
- **Option 3**: View all available emojis and their respective words.
- **Option 4**: Exit the program. But why would you want to do that when you’re having so much fun?

### 3. Emoji Conversion 🌍:
When you select **Convert text to emoji**, enter a sentence and voila! The program will match your words to emojis and add a little sentiment analysis at the end.

### 4. Adding Emojis ✏️:
Want to personalize things? You can add new emojis for any word you like! Just enter the word and the emoji, and it’s added to the list!

### 5. Show Available Emojis 📋:
Want to check out the emojis already included? Choose **Show emoji list**, and the program will display them all for you!

## Example 🎉

Here’s how it works in action:

1. Input:  
   `I feel so happy and love pizza.`  
   Output:  
   `Emoji Output: 😊 ❤️ 🍕 🥳`

2. Adding a custom emoji:  
   Add the word "coffee" with the emoji "☕" and it’ll be stored for future use.

## Sentiment Analysis 💭
The program will analyze your text and give it a mood:
- **Happy** = 🥳 (Party Time!)
- **Sad** = 😞 (Feeling blue)
  
The program analyzes words like "love", "happy", and "joy" as positive, while "sad", "angry", and "cry" are considered negative.

## Code Structure 🔧
- **unordered_map**: Stores the words and their corresponding emojis.
- **stringstream**: Extracts words from the input sentence.
- **vector**: Holds the words from the sentence for sentiment analysis.

## Requirements ⚙️
- A C++ environment that supports `iostream`, `unordered_map`, `sstream`, and `vector`.

## License 📝
This project is licensed under the [MIT License](https://opensource.org/licenses/MIT). Feel free to share, modify, and use it as you like!

---

## Let’s Embrace the Language of Emojis! 🌐💖
Who said programming can't be fun? With the Emoji Converter, your words will always have the right emoji to express how you feel! 😎
