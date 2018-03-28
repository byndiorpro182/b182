

#ifndef B_H
#define B_H

#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#include <BlynkSimpleEsp8266.h>
#include <EEPROM.h>
#include <ESP8266HTTPClient.h>
#include <ESP8266httpUpdate.h>
#include <IRRemoteControl.h>


#define HAN_UPDATE 				(1)      // update pin
#define HAN_WIFI_STATUS 		(2)
#define HAN_PROJECT 			(3)
#define HAN_DISCONNECT 			(4)
#define HAN_BLYNK_CONFIG 		(5)
#define HAN_BLYNK_DISCONNECT	(6)
#define HAN_CONNECT 			(7)
#define HAN_DATA_WRITE 			(8)
#define HAN_DATA_READ 			(9)
#define HAN_UPDATE_SKETCH 		(10)
#define HAN_SETUP               (11)
#define HAN_SERVER_HANDLE       (12)
#define HAN_DATA                (13)
#define HAN_SCAN_NETWORKS       (14)
#define HAN_PING				(15)
	/**
	*/
	// Lưu dữ liệu
	bool import_data(int location, String import_value);

	// Xuất dữ liệu
	String export_data ( int location);
	
	// Lưu SSID và PASS WiFi mới nhất
	void save_wifi(String sta_ssid, String sta_pass);
	
	// Thiết lập trạng thái AP
	bool wifi_config_ap(void);

	// Kết nối WiFi tới 1 mạng
	bool wifi_config_sta(String STA_SSID, String STA_PASS);
	
	// Thiết lập kết nối tới máy chủ
	bool blynk_config(void);
	
	// Check server
	bool sbr();


	// Kết nối tới 1 trang web HTTP và trả về nội dung trang web đó
	String api(String url);


	// In ra serial nội dung
	void binary_log(const char* fmt, ... );
	
	// Chờ nhận tín hiệu hồng ngoại tối đa 30s
	String ir_recv(const int IR_RECV_PIN);
	
	// Xuất tín hiệu hồng ngoại, chuỗi dạng => tổng số tín hiệu : th1, th2,th3, ...
	bool ir_send(String data);











#endif