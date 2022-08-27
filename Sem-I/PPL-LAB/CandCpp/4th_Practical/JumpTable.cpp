    #include <cstdio>
    #include <iostream>
    #include <string>
    #include <unordered_map>

    using namespace std;

    void Zero()
    {
        printf("Zero\n");
    }
    void One()
    {
        printf("One\n");
    }
    void Two()
    {
        printf("Two\n");
    }
    void Three()
    {
        printf("Three\n");
    }
    string prompt()
    {
        printf("Enter number from 0 to 3 or q to quit:\n");
        string line;
        getline(cin, line);
        return line;
    }
    int main(int argc, const char *argv[])
    {
        unordered_map<string, void (*)()> map;
        map["0"] = Zero;
        map["1"] = One;
        map["2"] = Two;
        map["3"] = Three;
        while (true)
        {
            string c = prompt();
            if (c == "q")
                break;
            map[c]();
        }
        return 0;
    }
