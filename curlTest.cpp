#include <stdio.h>
#include <curl/curl.h>
 
int main(void)
{

sting hello = "hello world";

string json_struct = "{ "tenantName": "SIE","serviceName": "COR","applianceId": "","rdCategory": "D2P","rdSubCategory": "BIZ","rdType": "FNCPRHT","rdSubType": "NULL","deviceId":"00000000534de1ee","timeofTransaction": 1449659076058,"txnLocation": "PashanDesk","txnLat": "NA","txnLong": "NA","statusCode": "0","statusSubCode": "NULL","authToken": "","payLoad": [ {"txCat": "NULL","txSubCat": "NULL","paramName": "Temperature Value","paramValue": "23.6","paramType": "FLOAT","alertFlag": "0","statusCode": "0","statusSubCode": "NULL","txTimeStamp": 1449658837000},{"txCat": "NULL","txSubCat": "NULL","paramName": "Humidity Value","paramValue": "41.43","paramType":"FLOAT","alertFlag": "0","statusCode": "0","statusSubCode": "NULL","txTimeStamp": 1449658837000},{"txCat": "NULL","txSubCat": "NULL","paramName": "Temperature Sensor Status","paramValue": "0","paramType":"TEXT","alertFlag": "0","statusCode": "0","statusSubCode": "NULL","txTimeStamp": 1449658837000}],"otherDetails":null}"
curl = curl_easy_init();

if (curl) {
    headers = curl_slist_append(headers, client_id_header);
    headers = curl_slist_append(headers, "Content-Type: application/json");

    curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers); 
    curl_easy_setopt(curl, CURLOPT_URL,"115.x.x.x" );  
    curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, "PUT"); /* !!! */

    curl_easy_setopt(curl, CURLOPT_POSTFIELDS, json_struct); /* data goes here */

    res = curl_easy_perform(curl);

    curl_slist_free_all(headers);
    curl_easy_cleanup(curl);
}

  return 0;
}

