/*
Assignment: Rust Assignment
Writtem by: Slava Borysyuk
Date: 11/29/2023
Language: Rust
Description:
A program that checks if a given string is a palindrome.
*/

fn is_palindrome(s: &str) -> bool {
    let processed_string: String = s
        .chars()
        .filter(|c| c.is_alphanumeric())
        .map(|c| c.to_ascii_lowercase())
        .collect();

    let reversed_string: String = processed_string.chars().rev().collect();

    processed_string == reversed_string
}

fn main() {
    println!("{}", is_palindrome("radar")); // true
    println!("{}", is_palindrome("hello")); // false
    println!("{}", is_palindrome("A man a plan a canal Panama")); // true
}
