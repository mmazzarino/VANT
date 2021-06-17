#include <stdbool.h>

bool configuraProcessadores();
bool configuraLora();
bool configuraIMU();
bool configuraRMT();
bool configuraGPS();
void recebeDadosDaBase();
void defineEmpuxoDeModoComum();
void defineAnguloDosEixos();
void pegaDadosDoIMU();
void filtraDadosDoIMU();
void calcula_PID_dosEixos();
void calculaEmpuxoDeModoDiferencial();
void totalizaEmpuxosIndividuais();
void montaFrameDshot();
void enviaFrameParaESC();
void pegaGeolocalizacao();
void enviaDadosParaBase();
void loopCore1();
void loopCore2();


void app_main(void){
	configuraProcessadores();
	configuraLora();
	configuraIMU();
	configuraRMT();
	configuraGPS();

}

bool configuraProcessadores(){

	return false;
}

bool configuraLora(){

	return false;
}

bool configuraIMU(){

	return false;
}

bool configuraRMT(){

	return false;
}

bool configuraGPS(){

	return false;
}

void recebeDadosDaBase(){

}

void defineEmpuxoDeModoComum(){

}


void defineAnguloDosEixos(){

}


void pegaDadosDoIMU(){

}

void filtraDadosDoIMU(){

}

void calcula_PID_dosEixos(){

}

void calculaEmpuxoDeModoDiferencial(){

}

void totalizaEmpuxosIndividuais(){

}

void montaFrameDshot(){

}

void enviaFrameParaESC(){

}

void pegaGeolocalizacao(){

}

void enviaDadosParaBase(){

}

void loopCore1(){

}

void loopCore2(){

}

