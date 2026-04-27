# 📖 Speller - Dictionary Spell Checker

![C](https://img.shields.io/badge/Language-C-blue.svg)
![CS50](https://img.shields.io/badge/CS50-Week%205-orange.svg)
![Data Structure](https://img.shields.io/badge/Data%20Structure-Hash%20Table-brightgreen.svg)

A fast and efficient **spell checker** built in C using a **hash table** data structure.

## ✨ Overview

This program loads a large dictionary into memory and then checks the spelling of every word in a given text file. It reports how many words are misspelled and provides detailed performance statistics.

Designed to handle large texts quickly, this project demonstrates professional-level use of hash tables for fast lookups.

## 🎯 Features

- ✅ Loads a dictionary of over 140,000 words into a **hash table**
- ✅ Spell-checks any text file efficiently
- ✅ Case-insensitive word checking
- ✅ Ignores numbers and punctuation properly
- ✅ Displays detailed performance timing:
  - Time to load dictionary
  - Time to check text
  - Time to unload dictionary
- ✅ Clean and professional output
- ✅ Excellent memory management (no leaks)

## 🚀 Quick Start

```bash
# Clone the repository
git clone https://github.com/kabincs9/speller.git
cd speller

# Compile
make

# Run the spell checker
./speller dictionaries/large texts/lalaland.txt
📊 Example Output
textMISSPELLED WORDS
================
café
utilising
colour

WORDS MISSPELLED:     3
WORDS IN DICTIONARY:  143091
WORDS IN TEXT:        591

TIME IN load:         0.02
TIME IN check:        0.01
TIME IN size:         0.00
TIME IN unload:       0.01
TIME IN TOTAL:        0.04
🧠 What I Learned

Implementing a hash table from scratch
Hash function design and collision handling
Efficient memory management with linked lists
Fast dictionary lookup (O(1) average case)
Processing large text files word by word
Measuring and optimizing program performance
Advanced pointer usage and dynamic memory
