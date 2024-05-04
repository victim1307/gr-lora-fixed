⁠git clone https://github.com/Mistsuu/gr-lora-fix-dependancies.git
cd gr-lora-fix-dependancies/
mkdir build
cd build/
cmake ../
sudo ldconfig
make && sudo make install
python3 ../apps/lora_receive_file_nogui.py ⁠
