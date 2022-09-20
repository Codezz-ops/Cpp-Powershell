using namespace std;

void clears()
{
    cout << "\x1B[2J\x1B[H";
}

void welcome(){
    cout << "PowerShell " << __VERSION__"(Beta)" << endl;
    cout << "Copyright (c) Microsoft Corporation.\n" << endl;
    cout << "https://aka.ms/powershell" << endl;
    cout << "Type 'help' to get help.\n" << endl;
}

void evenmorecommands()
{
    cout << "NAME\n" << endl;
    cout << "   Get-ExecutionPolicy\n" << endl;
    cout << "SYNTAX\n" << endl;
    cout << "   Get-ExecutionPolicy [[-Scope] {Process | CurrentUser | LocalMachine | " << endl;
    cout << "   UserPolicy | MachinePolicy}] [-List] [<CommonParameters>]\n\n" << endl;
    cout << "PARAMETERS\n" << endl;
    cout << "    -List\n" << endl;
    cout << "    -Scope <ExecutionPolicyScope>\n" << endl;
    cout << "    <CommonParameters>" << endl;
    cout << "        This cmdlet supports the common parameters: Verbose, Debug," << endl;
    cout << "        ErrorAction, ErrorVariable, WarningAction, WarningVariable," << endl;
    cout << "        OutBuffer, PipelineVariable, and OutVariable. For more information, see" << endl;
    cout << "        about_CommonParameters " << endl;
    cout << "    (https://go.microsoft.com/fwlink/?LinkID=113216).\n\n" << endl;
    cout << "ALIASES" << endl;
    cout << "    None\n\n" << endl;
    cout << "REMARKS" << endl;
    cout << "    Get-Help cannot find the Help files for this cmdlet on this computer. It " << endl;
    cout << "    is displaying only partial help." << endl;
    cout << "        -- To download and install Help files for the module that includes " << endl;
    cout << "    this cmdlet, use Update-Help." << endl;
    cout << "        -- To view the Help topic for this cmdlet online, type: 'Get-Help'" << endl;
    cout << "    Get-ExecutionPolicy -Online' or'" << endl;
    cout << "           go to https://go.microsoft.com/fwlink/?LinkID=2096594.\n\n" << endl;
}

void morecommands()
{
    cout << "SUMMARY OF LESS COMMAND\n\n" << endl;
    cout << "      Commands marked with * may be preceded by a number, N." << endl;
    cout << "      Notes in parentheses indicate the behavior if N is given." << endl;
    cout << "      A key preceded by a caret indicates the Ctrl key; thus ^K is ctrl-K.\n" << endl;
    cout << "  h  H                 Display this help." << endl;
    cout << "  q  :q  Q  :Q  ZZ     Exit." << endl;
    cout << " ---------------------------------------------------------------------------\n" << endl;
    cout << "                           MOVING\n" << endl;
    cout << "  e  ^E  j  ^N  CR  *  Forward  one line   (or N lines)." << endl;
    cout << "  y  ^Y  k  ^K  ^P  *  Backward one line   (or N lines)." << endl;
    cout << "  f  ^F  ^V  SPACE  *  Forward  one window (or N lines)." << endl;
    cout << "  b  ^B  ESC-v      *  Backward one window (or N lines)." << endl;
    cout << "  z                 *  Forward  one window (and set window to N)." << endl;
    cout << "  w                 *  Backward one window (and set window to N)." << endl;
    cout << "  ESC-SPACE         *  Forward  one window, but don't stop at end-of-file." << endl;
    cout << "  d  ^D             *  Forward  one half-window (and set half-window to N)." << endl;
    cout << "  u  ^U             *  Backward one half-window (and set half-window to N)." << endl;
    cout << "  ESC-)  RightArrow *  Right one half screen width (or N positions)." << endl;
    cout << "  ESC-(  LeftArrow  *  Left  one half screen width (or N positions)." << endl;
    cout << "  ESC-}  ^RightArrow   Right to last column displayed." << endl;
    cout << "  ESC-{  ^LeftArrow    Left  to first column." << endl;
    cout << "  F                    Forward forever; like 'tail -f'." << endl;
    cout << "  ESC-F                Like F but stop when search pattern is found.\n\n" << endl;
}

void GetHelpRemove(){
    cout << "\e[0;32mName                              Category  Module                    Synopsis\e[0;37m" << endl;
    cout << "\e[0;32m----                              --------  ------                    --------\e[0;37m" << endl;
    cout << "Remove-Job                        Cmdlet    Microsoft.PowerShell.Core …"  << endl;
    cout << "Remove-Module                     Cmdlet    Microsoft.PowerShell.Core …" << endl;
    cout << "Remove-PSSession                  Cmdlet    Microsoft.PowerShell.Core …" << endl;
    cout << "Remove-PSReadLineKeyHandler       Cmdlet    PSReadLine                …" << endl;
    cout << "Remove-Event                      Cmdlet    Microsoft.PowerShell.Uti… Remove-E…" << endl;
    cout << "Remove-TypeData                   Cmdlet    Microsoft.PowerShell.Uti… Remove-T…" << endl;
    cout << "Remove-PSBreakpoint               Cmdlet    Microsoft.PowerShell.Uti… Remove-P…" << endl;
    cout << "Remove-Alias                      Cmdlet    Microsoft.PowerShell.Uti… Remove-A…" << endl;
    cout << "Remove-Variable                   Cmdlet    Microsoft.PowerShell.Uti… Remove-V…" << endl;
    cout << "Remove-PSDrive                    Cmdlet    Microsoft.PowerShell.Man… Remove-P…" << endl;
    cout << "Remove-Item                       Cmdlet    Microsoft.PowerShell.Man… Remove-I…" << endl;
    cout << "Remove-ItemProperty               Cmdlet    Microsoft.PowerShell.Man… Remove-I…\n" << endl;
}

void Rmhelp() {
    cout << "Usage: /usr/bin/rmdir [OPTION]... DIRECTORY..." << endl;
    cout << "Remove the DIRECTORY(ies), if they are empty.\n" << endl;
    cout << "       --ignore-fail-on-non-empty" << endl;
    cout << "                   ignore each failure that is solely because a directory" << endl;
    cout << "                       is non-empty" << endl;
    cout << "   -p, --parents   remove DIRECTORY and its ancestors; e.g., 'rmdir -p a/b/c' is" << endl;
    cout << "                       similar to 'rmdir a/b/c a/b a'" << endl;
    cout << "   -v, --verbose    output a diagnostic for every directory processed" << endl;
    cout << "       --help      displays this help and exit" << endl;
    cout << "       --version   output version information and exit" << endl;
    cout << "" << endl;
    cout << "GNU coreutils online help: <https://www.gnu.org/software/coreutils/>" << endl;
    cout << "Full documentation at: <https://www.gnu.org/software/coreutils/rmdir>" << endl;
    cout << "or available locally via: info '(coreutils) rmdir invocation'" << endl;
}

void MkdirHelp() {
    cout << "Usage: /usr/bin/mkdir [OPTION]... DIRECTORY..." << endl;
    cout << "Create the DIRECTORY(ies), if they do not already exist.\n" << endl;
    cout << "Mandatory arguments to long options are mandatory for short options too." << endl;
    cout << " -m, --mode=MODE   set file mode (as in chmod), not a=rwx - umask" << endl;
    cout << " -p, --parents     no error if existing, make parent directories as needed" << endl;
    cout << " -v, --verbose     print a message for each created directory" << endl;
    cout << " -Z                    set SELinux security context of each created directory" << endl;
    cout << "                           to the defualt type" << endl;
    cout << "     --context[=CTX]   like -Z, or if CTX is specified then set the SELinux" << endl;
    cout << "                           or SMACK security context to CTX" << endl;
    cout << "     --help         displays this and exit" << endl;
    cout << "     --version      output version information and exit\n" << endl;
    cout << "GNU coreutils online help: <https://www.gnu.org/software/coreutils/>" << endl;
    cout << "Full documentation at: <https://www.gnu.org/software/coreutils/mkdir>" << endl;
    cout << "or available locally via: info '(coreutils) mkdir invocation'" << endl;
}

void mkdirversion() {
    cout << "mkdir (GNU coreutils) 8.30 " << endl;
    cout << "Copyroght (C) 2018 Free Software Foundation, Inc." << endl;
    cout << "License GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>."<< endl;
    cout << "This is free software: you are free to change and redistribute it." << endl;
    cout << "There is NO WARRANTY, to the extent permitted by law.\n" << endl;
    cout << "Written by David MacKenzie." << endl;
}

void rmdirversion() {
    cout << "rmdir (GNU coreutils) 8.30 " << endl;
    cout << "Copyroght (C) 2018 Free Software Foundation, Inc." << endl;
    cout << "License GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>."<< endl;
    cout << "This is free software: you are free to change and redistribute it." << endl;
    cout << "There is NO WARRANTY, to the extent permitted by law.\n" << endl;
    cout << "Written by David MacKenzie." << endl;
}

void help()
{
            cout << "TOPIC" << endl;
            cout << "   PowerShell Help System\n" << endl;
            cout << "SHORT DESCRIPTION" << endl;
            cout << "   Displays help about PowerShell cmdlets and concepts.\n" << endl;
            cout << "LONG DESCRIPTION" << endl;
            cout << "   PowerShell Help describes PowerShell cmdlets, functions, scripts, and" << endl;
            cout << "   modules, and explains concepts, including the elements of the PowerShell" << endl;
            cout << "   language.\n" << endl;
            cout << "   PowerShell does not include help files, but you can read the help topics" << endl;
            cout << "   online, or use the Update-Help cmdlet to download help files to your" << endl;
            cout << "   computer and then use the Get-Help cmdlet to display the help topics at" << endl;
            cout << "   the command line.\n" << endl;
            cout << "   You can also use the Update-Help cmdlet to download updated help files" << endl;
            cout << "   as they are released so that your local help content is never obsolete.\n" << endl;
            cout << "   Without help files, Get-Help displays auto-generated help for cmdlets," << endl;
            cout << "   functions, and scripts.\n" << endl;
            cout << " ONLINE HELP" << endl;
            cout << "   You can find help for PowerShell onlie at" << endl;
            cout << "   https://go.microsoft.com/fwlink.?LinkID=108518.\n" << endl;
            cout << "   To open online help for any cmdlets or function, type:\n" << endl;
            cout << "       Get-Help <cmdlet-name> -Online" << endl;
            cout << " UPDATE-HELP" << endl;
            cout << "   To download and install help files on your computer:\n" << endl;
            cout << "       1. Start PowerShell with the 'Run as administrator' option." << endl;
            cout << "       2. Type:\n" << endl;
            cout << "           Update-Help\n" << endl;
            cout << "   After the help files are installed, you can use the Get-Help cmdlet to" << endl;
            cout << "   display the help topics. You can also use the Update-Help cmdlet to" << endl;
            cout << "   download updated help files so that your local help files are always" << endl;
            cout << "   up-to-date.\n" << endl;
            cout << "   For more information about the Update-Help cmdlet, type:\n" << endl;
            cout << "       Get-Help Update-Help -Online\n" << endl;
            cout << "   or go to: https://go.microsoft.com/fwlink/?LinkID=210614\n\n" << endl;
            cout << " GET-HELP" << endl;
            cout << "   The Get-Help cmdlet displays help at the command line from content in" << endl;
            cout << "   help files on your computer. Without help files, Get-Help displaya basic" << endl;
            cout << "   help about cmdlets and functions. You can also use Get-Help to display" << endl;
            cout << "   online help for cmdlets and functions.\n";
            cout << "   To get help for a cmdlet, type:\n" << endl;
            cout << "       Get-Help <cmdlet-name>\n" << endl;
            cout << "   To get online help, type:\n" << endl;
            cout << "       Get-Help <cmdlet-name> -Online" << endl;
            cout << "   The titles of conceptual topics begin with 'About_'. To get help for a" << endl;
            cout << "   concept or language element, type:\n" << endl;
            cout << "       Get-Help About_<topic-name>\n" << endl;
            cout << "   To search for a word or phrase in all help files, type:\n" << endl;
            cout << "       Get-Help <search-term>\n" << endl;
            cout << "   For more information about the Get-Help cmdlet, type:\n" << endl;
            cout << "       Get-Help Get-Help -Online\n" << endl;
            cout << "   or got to: https://go.microsoft.com/fwlink/?LinkID=113316\n\n" << endl;
            cout << " EXAMPLES:" << endl;
            cout << "   Save-Help          : Download help files from the internet and save" << endl;
            cout << "                        them on a file share.\n" << endl;
            cout << "   Update-Help        : Downloads and installs help files from the" << endl;
            cout << "                        internet or a file share.\n" << endl;
            cout << "   Get-Help Get-Process : Displays help about the Get-Process cmdlet.\n" << endl;
            cout << "   Get-Help Get-Process -Online" << endl;
            cout << "                           : Opens online help for the Get-Process cmdlet.\n" << endl;
            cout << "   Help Get-Process        : Displays help about Get-Process one page at a" << endl;
            cout << "                             time." << endl;
            cout << "   Get-Process -?          : Displays help about the Get-Process cmdlet.\n" << endl;
            cout << "   Get-Help About_Modules  : Displays help about PowerShell modules.\n" << endl;
            cout << "   Get-Help remoting       : Searches the help topics for the word 'remoting.'\n\n" << endl;
            cout << " SEE ALSO:" << endl;
            cout << "   about_Updateable_Help" << endl;
            cout << "   Get-Help" << endl;
            cout << "   Save-Help" << endl;
            cout << "   Update-Help\n\n" << endl;
}
