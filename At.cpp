#include "At.h"

const QString
At::at("AT");

const QString
At::end("\x0D\x0A");

const QString
At::setEchoOn("ATE1");

const QString
At::signalStrength("AT+HDRSSI");

const QString
At::signalStrengthResponse("+HDRSSI:");

const QString
At::meid("AT^MEID");

const QString
At::meidResponse("^MEID:");


const QString
At::esn("AT+VGMUID?");

const QString
At::esnResponse("+VGMUID:");

const QString
At::systemInformation("ATI");

const QString
At::systemInformationResponse("Manufacturer:");

const QString
At::supplementaryServices("AT+CUSD=1,\"");

const QString
At::supplementaryServicesResponse("+CUSD:");

const QString
At::serialNumber("AT+CGSN");

const QString
At::serialNumberResponse("+CGSN:");

const QString
At::hardwareVersion("AT+MVER");

const QString
At::hardwareSoftwareVersionResponse("+MVER:");

const QString
At::setCellIdentifier("AT+CREG=2");

const QString
At::cellIdentifier("AT+CREG?");

const QString
At::cellIdentifierResponse("+CREG:");

const QString
At::newMessage("AT+CMGS=");

const QString
At::newMessageResponse("");

const QString
At::error("ERROR");

const QString
At::dormant0("DORMANT:0");

const QString
At::dormant1("DORMANT:1");

const QString
At::ok("OK");

const QString
At::setFullModemFunctionality("AT+CFUN=1");

const QString
At::setNetworkModeGsm("AT+CSCS=\"GSM\"");

const QString
At::setMessageModeText("AT+CMGF=1");

const QString
At::setApplicationMessage ("AT+CNMI=1,2,0,1,0");

const QString
At::applicationMessageRecieved ("+CMT: ");

const QString
At::messageCenterNumber("AT+CSCA?");

const QString
At::messageCenterNumberResponse("+CSCA:");

const QString
At::pinCodeStatus("AT+CPIN?");

const QString
At::pinCodeStatusResponse("+CPIN:");

const QString
At::networkName("AT+COPS?");

const QString
At::networkNameResponse("+COPS:");

const QString
At::accessPointName("AT+CGDCONT?");

const QString
At::accessPointNameResponse("+CGDCONT:");

const QString
At::setContactMemorySim("AT+CPBS=\"SM\"");

const QString
At::contactCount("AT+CPBS?");

const QString
At::contactCountResponse("+CPBS:");

const QString
At::readContact("AT+CPBR=");

const QString
At::readAllContact("AT+CPBR=1,250");

const QString
At::readContactResponse("+CPBR:");

const QString
At::ownNumber("AT+CNUM");

const QString
At::ownNumberResponse("+CNUM:");

const QString
At::setAccessPointName("AT+CGDCONT=1,\"IP\",\"aircelgprs\",\"0.0.0.0\",0,0");

const QString
At::setValidity ("AT+CSMP=16,,0,0");

const QString
At::networkMode("AT+COPS=?");

const QString
At::networkModeResponse("+COPS: (");

const QString
At::psAttachemnt("AT+CGATT?");

const QString
At::psAttachemntResponse("+CGATT:");

const QString
At::psRegistration("AT+CGREG?");

const QString
At::psRegistrationResponse("+CGREG:");

const QString
At::pinPukAttempts("AT+ZPINPUK=?");

const QString
At::pinPukAttemptsResponse("+ZPINPUK:");

const QString
At::networkDisplayMode("AT+ZPAS?");

const QString
At::networkDisplayModeResponse("+ZPAS:");

const QString
At::pinServices("AT+CLCK=\"SC\",");

const QString
At::enterPin("AT+CPIN=");

const QString
At::pinQuery("AT+CLCK=\"SC\", 2");

const QString
At::pinQueryResponse("+CLCK:");

const QString
At::pinModify("AT+CPWD=\"SC\",");

const QString
At::pinModifyResponse("+CPWD:");

const QString
At::enableDeliveryAcknowledgement("AT+CSMP=49,179,0,0");

const QString
At::disableDeliveryAcknowledgement("AT+CSMP=17,169,0,0");

const QString
At::deliveryReportResponse("+CDS:");

const QString
At::automaticNetworkSelection("AT+COPS=0,0");

const QString
At::manualNetworkSelection("AT+COPS=1,0,");

const QString
At::changeNetworkMode("AT+ZSNT=");

const QString
At::getSelectedNetworkMode("AT+ZSNT?");

const QString
At::getSelectedNetworkModeResponse("+ZSNT:");

const QString
At::incorrectPinPukResponse("+CME");

const QString
At::deleteContact ("AT+CPBW="); //AT+CPBW=<index>

const QString
At::writeContact ("AT+CPBW=,"); //AT+CPBW=,"9223215062",,"prabhat"

const QString
At::editContact ("AT+CPBW="); //AT+CPBW=2,"11111",129,"sssss" Where 2 is index

const QString
At::writeContactResponse("+CPBW:");

