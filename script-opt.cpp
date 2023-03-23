#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;

int main() {

//Backup
    string origen = "/home/ /etc/";
    string destino = "./copiadeseguridad-debian.tar.gz";

    int opcion;
    //Diferentes opciones
    cout << "Seleccione una opción:\n";
    cout << "1. Hacer un update del sistema\n";
    cout << "2. Configurar DHCP\n";
    cout << "3. Configurar FTP\n";
    cout << "4. Configurar SSH\n";
    cout << "5. Hacer una copia de seguridad\n";
    cout << "6. Salir\n";
    
    cin >> opcion;
    
    switch(opcion) {
        case 1:
            cout << "Realizando un update del sistema...\n";
            system("sudo apt-get update");
            break;
        case 2:
            cout << "Configurando DHCP...\n";
            system("sudo apt-get update");
            system("sudo apt-get install isc-dhcp-server");
            // Configuración del archivo /etc/dhcp/dhcpd.conf
            // ...
            break;
        case 3:
            cout << "Configurando FTP...\n";
            system("sudo apt-get update");
            system("sudo apt-get install vsftpd");
            // Configuración del archivo /etc/vsftpd.conf
            // ...
            break;
        case 4:
            cout << "Configurando SSH...\n";
            system("sudo apt-get update");
            system("sudo apt-get install openssh-server");
            // Configuración del archivo /etc/ssh/sshd_config
            // ...
            break;
        case 5:
            cout << "Haciendo una copia de seguridad...\n";
            system(("sudo tar -czvf " + destino + " " + origen).c_str());
            break;
        case 6:
            cout << "Saliendo...\n";
            break;
        default:
            cout << "Opcion no valida\n";
            break;
    }
    
    return 0;
}