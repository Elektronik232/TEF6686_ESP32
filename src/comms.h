#ifndef COMMS_H
#define COMMS_H

#include <Arduino.h>
#include <TFT_eSPI.h>
#include <WiFiClient.h>
#include "TEF6686.h"
#include <WiFi.h>
#include <Hash.h>
#include "WiFiConnect.h"
#include "WiFiConnectParam.h"

extern bool aftest;
extern bool BWreset;
extern bool direction;
extern bool fullsearchrds;
extern bool menu;
extern bool RDSSPYTCP;
extern bool RDSSPYUSB;
extern bool RDSstatus;
extern bool screenmute;
extern bool seek;
extern bool setupmode;
extern bool softmuteam;
extern bool softmutefm;
extern bool SQ;
extern bool StereoToggle;
extern bool store;
extern bool wifi;
extern bool wificonnected;
extern bool XDRGTKdata;
extern bool XDRGTKTCP;
extern bool XDRGTKUSB;
extern bool XDRMute;
extern bool XDRMute;
extern byte band;
extern byte BWset;
extern byte EQset;
extern byte iMSEQ;
extern byte iMSset;
extern byte language;
extern byte subnetclient;
extern char buff[16];
extern int ActiveColor;
extern int ActiveColorSmooth;
extern int BackgroundColor;
extern int DeEmphasis;
extern int freqold;
extern int GreyoutColor;
extern int InsignificantColor;
extern int InsignificantColorSmooth;
extern int PrimaryColor;
extern int PrimaryColorSmooth;
extern int scanner_filter;
extern int SignificantColor;
extern int SignificantColorSmooth;
extern int Squelch;
extern int Squelchold;
extern int Stereostatus;
extern int XDRBWset;
extern int XDRBWsetold;
extern int16_t OStatus;
extern int16_t SStatus;
extern int8_t LowLevelSet;
extern int8_t VolSet;
extern IPAddress remoteip;
extern String cryptedpassword;
extern String salt;
extern String saltkey;
extern String XDRGTK_key;
extern uint16_t BW;
extern uint16_t MStatus;
extern uint16_t USN;
extern uint16_t WAM;
extern uint8_t buff_pos;
extern uint8_t SNR;
extern unsigned int freq_scan;
extern unsigned int frequency;
extern unsigned int frequency_AM;
extern unsigned int frequencyold;
extern unsigned int LWHighEdgeSet;
extern unsigned int LWLowEdgeSet;
extern unsigned int MWHighEdgeSet;
extern unsigned int MWLowEdgeSet;
extern unsigned int scanner_end;
extern unsigned int scanner_start;
extern unsigned int scanner_step;
extern unsigned int SWHighEdgeSet;
extern unsigned int SWLowEdgeSet;
extern unsigned long aftimer;

extern TFT_eSPI tft;
extern TEF6686 radio;
extern WiFiClient RemoteClient;
extern WiFiUDP Udp;
extern WiFiServer Server;
extern WiFiConnect wc;

void Communication();
void XDRGTKRoutine();
void passwordcrypt();
void tryWiFi();

extern void DataPrint(String string);
extern void ShowFreq(int mode);
extern void SelectBand();
extern void doBW();
extern void BuildDisplay();
extern void ModeButtonPress();
extern void Seek(bool mode);
extern void doStereoToggle();
extern void MuteScreen(bool setting);
extern void updateiMS();
extern void updateEQ();
extern void tftPrint(int8_t offset, const String & text, int16_t x, int16_t y, int color, int smoothcolor, uint8_t fontsize);

#endif