#!/bin/bash
tecla=0
while [[ 1=1 ]]; do
	if [[ $tecla = 0 ]]; then
		read -p "Digite o nome ou indice do arquivo: " entrada
		arquivo=`find ${entrada%.cpp}*.cpp | cut -d . -f 1 >./log.out`
		arquivo=$(cat log.out)
		tecla=1
	fi
	echo ""
	echo ""
	echo "EXECUTANDO" $arquivo".cpp:"
	echo "====================================================================="
	g++ $arquivo.cpp -o $arquivo.out && ./$arquivo.out
	rm -rf *.out
	echo "====================================================================="
	echo "FIM DA EXECUCAO"
	echo ""
	read -p "Tecle qualquer tecla para repetir ou '0' para escolher outro arquivo." -n1 -s tecla
	echo ""

done
# AWMO
