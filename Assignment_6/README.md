Name:       Sreya Vadlamudi
Student ID: 2371434
File Names: DLList.h
            DLLQueue.h
            FileProcessor.cpp
            FileProcessor.h
            ListNode.h
            mainprogram.cpp
            Registrar.cpp
            Registrar.h
            Student.cpp
            Student.h
            Window.cpp
            Window.h
References: worked with Suparna Pal
            #include <bits/stdc++.h> - https://www.geeksforgeeks.org/bitsstdc-h-c/
Issues:     FileProcessor.cpp: prints out the wrong numbers for the mean queue,
            median queue, and mean idle
            for some sets of inputs, the long idle time calculation works, but
            other times it returns an abort/double free corruption error
