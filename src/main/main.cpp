/* Modules */
#include <stdio.h>
#include <fstream>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <sys/stat.h>
#include <filesystem>
#include <sys/types.h>

/*Includes*/
#include "../../../PowerShell/src/main/headers/functions.hpp"

/*Main Function*/
int main()
{
    int errorCode;
    string Filename, Dirname, sDirertory;
    string commands = "";
    fstream File;
    welcome();

    while (true)
    {
        cout << "PS " << get_current_dir_name() << "> ";
        getline(std::cin, commands);
        if (commands == "help")
        {
            clears();
            help();
        }
        else if (commands == "Get-Help")
        {
            help();
        }
        else if (commands == "Get-Help Remove")
        {
            GetHelpRemove();
        }
        else if (commands == "Set-Location")
        {
            cin >> sDirertory;
            cin.get();
            chdir(sDirertory.c_str());
        }
        else if (commands == "Create-File")
        {
            cin >> Filename;
            File.open(Filename,ios::out);
            File.close();
        }
        else if (commands == "Make-Item")
        {
            cin >> Dirname;
            mkdir(Dirname.c_str(), 0777);
        }
        else if (commands == "Make-Item --verbose")
        {
            cin >> Dirname;
            cout << "/usr/bin/mkdir: created directory " << Dirname << endl;
            mkdir(Dirname.c_str(), 0777);
        }
        else if (commands == "Make-Item --help")
        {
            MkdirHelp();
        }
        else if (commands == "Make-Item --version")
        {
            mkdirversion();
        }
        else if (commands == "Remove-File")
        {
            cin >> Filename;
            remove(Filename.c_str());
        }
        else if (commands == "Remove-Item")
        {
            cin >> Dirname;
            rmdir(Dirname.c_str());
        }
        else if (commands == "Remove-Item --verbose")
        {
            cin >> Dirname;
            cout << "/usr/bin/mkdir: deleted directory " << Dirname << endl;
            rmdir(Dirname.c_str());
        }
        else if (commands == "Remove-Item --help")
        {
            Rmhelp();
        }
        else if (commands == "Remove-Item --version")
        {
            rmdirversion();
        }
        else if (commands == "Get-Location")
        {
            cout << "Current working directory " << get_current_dir_name() << endl;
        }
        else if (commands == "Clear-Host")
        {
            clears();
        }
        else if (commands == "ls" || commands == "dir")
        {
            system(commands.c_str());
        } else if (commands == "exit")
        {
            exit(0);
        } else if (commands == "Get-Help -h")
        {
            morecommands();
        } else if (commands == "Get-Help -Name Get-ExecutionPolicy -Detailed")
        {
            evenmorecommands();
        }
        else {
            cout << commands << ": The term '" << commands << "'" << " is not recognized as a name of a cmdlet, function, script file, or executable program." << endl;
            cout << "Check the spelling of the name, or if a path was included, verify that the path is correct and try again." << endl;
        }
    }
    return 0;
}
