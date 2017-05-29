#!/bin/bash
read -p "Digite o nome do arquivo sem extencao '.cpp': " entrada
arquivo=`find $entrada*.cpp | cut -d . -f 1`
tecla=1
while [[ $tecla != 0 ]]; do
	echo "Executando..."
	echo ""
	g++ $arquivo.cpp -o $arquivo.exe && ./$arquivo.exe
	echo "---------------------------------------------------" 
	read -p "Tecle algo diferente de '0' para executar novamente" -n1 -s tecla
	echo ""
done
# AWMO