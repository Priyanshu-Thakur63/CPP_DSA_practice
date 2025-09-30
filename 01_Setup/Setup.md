### **On Windows (Recommended: MSYS2 Method)**

This is the most robust method for a Unix-like environment on Windows, which is what competitive programming platforms use.

1. **Download MSYS2:**
    - Go to the official website: https://www.msys2.org/
    - Click the large download button to get the installer (`msys2-x86_64-....exe`).
2. **Install MSYS2:**
    - Run the installer. It's best to stick with the default installation path, which is `C:\\msys64`.
3. **Install the `g++` Compiler:**
    - After the installation finishes, a terminal window will open. If it doesn't, search for "MSYS2 MINGW64" in your Start Menu and open it.
    - First, update the package manager's database by typing this command and hitting Enter. You might be asked to close the terminal; if so, re-open it and run the command again.
        
        ```bash
        pacman -Syu
        
        ```
        
    - Next, install the C++ compiler toolchain with this command:
        
        ```bash
        pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain
        
        ```
        
    - It will ask you to select which packages to install. Just press **Enter** for the default (which is all of them). Type `Y` to proceed with the installation. This will install `g++` and other useful tools.
4. **Add Compiler to Windows PATH (CRITICAL STEP):**
    - This tells Windows where to find the `g++` program from any terminal (like CMD or VS Code's terminal).
    - Open your file explorer and navigate to where you installed MSYS2. The path you need is inside the `mingw64` folder, in the `bin` subfolder. For a default installation, this is: `C:\\msys64\\mingw64\\bin`. **Copy this path.**
    - Press the Windows key and search for "Edit the system environment variables" and open it.
    - Click the "Environment Variables..." button.
    - In the "System variables" box (the bottom one), find the `Path` variable, select it, and click "Edit...".
    - Click "New" and paste the path you copied: `C:\\msys64\\mingw64\\bin`.
    - Click OK on all the windows to save.
5. **Download and Install VS Code:**
    - Go to https://code.visualstudio.com/ and download the installer for Windows.
    - Run the installer. Be sure to keep the "Add to PATH" option checked.

---

### **On macOS**

1. **Install Xcode Command Line Tools:**
    - Open the `Terminal` app (you can find it in `Applications/Utilities` or search for it with Spotlight).
    - Type the following command and press Enter:
        
        ```bash
        xcode-select --install
        
        ```
        
    - A window will pop up. Click "Install" and agree to the terms. This will install `clang`, which is Apple's C++ compiler and works just like `g++` for our starting purposes.
2. **(Recommended) Install the latest GCC:** While Clang is fine, `g++` is the standard for CP. The easiest way to get it is with Homebrew.
    - **Check for Homebrew:** In your terminal, type `brew -v`. If you see a version number, you have it. If not, install it by visiting https://brew.sh/ and copying the main command into your terminal.
    - **Install GCC:** Once Homebrew is ready, run:
        
        ```bash
        brew install gcc
        
        ```
        
3. **Download and Install VS Code:**
    - Go to https://code.visualstudio.com/ and download the installer for Mac.
    - Unzip the file and drag the `Visual Studio Code.app` into your `Applications` folder.

---

### **On Linux (Ubuntu / Debian / Mint)**

Linux users have it the easiest, as these tools are core to the ecosystem.

1. **Install the `build-essential` Package:**
    - Open your terminal.
    - Run the following commands to update your package lists and then install the necessary package:
        
        ```bash
        sudo apt update
        sudo apt install build-essential
        
        ```
        
    - This command installs a suite of development tools, including `g++` and `make`.
2. **Download and Install VS Code:**
    - Go to https://code.visualstudio.com/ and download the `.deb` package for Debian/Ubuntu.
    - Navigate to your `Downloads` folder in the terminal and run (replace the filename with the one you downloaded):
        
        ```bash
        sudo dpkg -i code_*.deb
        
        ```