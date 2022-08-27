    #include <iostream>

    using namespace std;

    int main()
    {
        cout << "Best Fit Program" << endl;

        int numOfBlocks = 5, numOfProcess = 5;
        // cout << "Enter number of Blocks.";
        // cin >> numOfBlocks;
        // cout << "Enter number of Process.";
        // cin >> numOfProcess;

        int bArr[numOfBlocks] = {400, 200, 300, 500, 600};
        int pArr[numOfProcess] = {350, 400, 200, 550, 280};

        cout << "Blocks are:";
        for (int i = 0; i < numOfBlocks; i++)
        {
            cout << bArr[i] << " ";
        }
        cout << endl;
        cout << "Process are:";
        for (int i = 0; i < numOfProcess; i++)
        {
            cout << pArr[i] << " ";
        }

        int trackIdx = -2;
        int ProcessAssigned[5];

        for (int i = 0; i < numOfProcess; i++)
        {
            for (int j = 0; j < numOfBlocks; j++)
            {
                if (bArr[j] >= pArr[i])
                {

                    if (trackIdx == -2)// only 1st use
                    {
                        trackIdx = j;
                    }
                    if (bArr[trackIdx] > bArr[j])
                    {
                        trackIdx = j;
                    }
                }
            }

            bArr[trackIdx] = bArr[trackIdx] - pArr[i];
            ProcessAssigned[i] = (trackIdx + 1);
            trackIdx = -2;
        }

        cout << "\nRemaining Memory size are:";
        for (int i = 0; i < numOfBlocks; i++)
        {
            cout << bArr[i] << " ";
        }
        cout << endl;
        cout << "ProcessAssigned are to block number:\n";
        for (int i = 0; i < numOfProcess; i++)
        {
            cout << ProcessAssigned[i] << " Block"
                << " Remaining memory :" << bArr[i] << endl;
        }

        return 0;
    }