cd ../release
source ahir_bashrc
cd ../myprocessor
make clean
make aalink
make aa2c
make aa2vc
make vc2vhdl
make vhdlsim
echo done