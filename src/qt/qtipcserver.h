#ifndef QTIPCSERVER_H
#define QTIPCSERVER_H

// Define StalinCoin-qt message queue name
#define BITCOINURI_QUEUE_NAME "StalinCoinURI"

void ipcScanRelay(int argc, char *argv[]);
void ipcInit(int argc, char *argv[]);

#endif // QTIPCSERVER_H
