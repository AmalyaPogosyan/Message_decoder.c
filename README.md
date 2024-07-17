# Message_decoder.cTask: Secret Message Decoder
Overview
In this assignment, you'll work with file operations in C to decode a secret message hidden within a text file. The message has been encoded by shifting each character forward by three positions in the alphabet (e.g., 'A' becomes 'D', 'Z' becomes 'C'). Your task is to write a C program that decodes this message and writes the decoded text back to the same file.
Objectives
Read Encoded Characters: Use pread() to read characters from specified offsets in the encoded file.
Decode Characters: Implement a function to shift each character back by three positions in the alphabet to its original form.
Write Decoded Characters: Use pwrite() to overwrite the encoded characters with the decoded characters directly in the file.
Efficient File Navigation: Optionally use lseek() to explore more about file navigation though it's not necessary with pread() and pwrite().
Requirements
The program must read an encoded file, decode its content, and write the decoded characters back to the same file.
The program should launch and display instructions or a prompt for the user to input the path to the encoded file and the specific offsets where encoded characters are located.
Decode each character by shifting it back by 3 positions in the alphabet.
Use pwrite() to overwrite the encoded characters with the decoded ones directly at the same offsets in the file.
Display the decoded message once all specified offsets are processed.
Ensure the program can handle multiple decoding sessions one after another without needing to restart.
