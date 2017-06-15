#!/bin/bash
read -p "Digite o nome ou indice do arquivo: " entrada
arquivo=`find ${entrada%.cpp}*.cpp | cut -d . -f 1`
tecla=1
while [[ $tecla != 0 ]]; do
	echo "Executando" $arquivo".cpp:"
	echo "---------------------------------------------------"
	g++ $arquivo.cpp -o $arquivo.exe && ./$arquivo.exe
	echo "---------------------------------------------------" 
	read -p "Tecle algo diferente de '0' para executar novamente." -n1 -s tecla
	echo ""
done
# AWMO