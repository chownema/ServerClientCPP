#include "ServerNetwork.h"
#include "NetworkData.h"

class ServerGame
{

public:

	ServerGame(void);
	~ServerGame(void);

	void update();

	void receiveFromClients();

	void sendActionPackets();

private:

	// data buffer
	char network_data[MAX_PACKET_SIZE];

	// IDs for the clients connecting for table in ServerNetwork 
	static unsigned int client_id;

	// The ServerNetwork object 
	ServerNetwork* network;
};