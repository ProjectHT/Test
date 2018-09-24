/*************************************************************************************************/
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/*************************************************************************************************/
/* 
 * File:   main.cpp
 * Author: Thong_Laptop
 *
 * Created on September 24, 2018, 9:25 AM
 */
/*************************************************************************************************/
#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <sstream>
#include <typeinfo>
#include <memory>
#include <unistd.h>
/*************************************************************************************************/
#include "../WebSocket/WebSocket.h"
/*************************************************************************************************/
using namespace std;
/*************************************************************************************************/
/*
 * 
 */
int main(int argc, char** argv) {
    WebSocket* m_web_socket = new WebSocket();
    m_web_socket->init("camera_server",8080);
    int index_camera = cameras.size();
    cameras.push_back(Interface());
    cameras.at(index_camera).init("camera_1","rtsp://gshtxmda.dyndns.org:554/user=admin&password=gshtxmda&channel=14&stream=0.sdp","/root/Videos");
    cameras.at(index_camera).setrun();
    sleep(10);
    cameras.at(index_camera).setDetectFace(true);
    while(1) {
        sleep(1);
    }
    return 0;
}
/*************************************************************************************************/
