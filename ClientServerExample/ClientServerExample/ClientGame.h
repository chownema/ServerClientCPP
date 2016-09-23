#include <winsock2.h>
#include <Windows.h>
#include "ClientNetwork.h"


class ClientGame
{

public:

	ClientGame();
	~ClientGame(void);

	void sendActionPackets();

	char network_data[1000000];

	void update();

	ClientNetwork* network;
};