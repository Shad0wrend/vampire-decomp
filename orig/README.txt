Put your own copy of the original vampire.dll in this folder: orig/vampire.dll.

The build reads it for the bytes the repository does not hold (the data the .asm.in templates leave as ORIGBYTES
holes) and `ninja verify` compares the DLL it builds with it. It must be the version this project matches:

    vampire.dll  SHA-1 3fe64bc0d9d7eca64976adc668617ca2814e5e4a

configure.py --orig FILE takes a copy kept somewhere else.

Never commit it: .gitignore keeps orig/*.dll out of git, and the game's files are not ours to share.
