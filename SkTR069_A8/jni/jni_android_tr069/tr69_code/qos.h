#ifndef __SK_QOS_UPLOAD_H__
#define __SK_QOS_UPLOAD_H__

#ifdef __cplusplus
extern "C"{
#endif


typedef enum _local_qos_type_t
{
	E_TR069_QOS_GET_STARTPOINT,
	E_TR069_QOS_GET_ENDPOINT,
	E_TR069_QOS_GET_AUTHNUMBERS,
	E_TR069_QOS_GET_AUTHFAILNUMBERS,
	E_TR069_QOS_GET_MULTIREQNUMBERS,
	E_TR069_QOS_GET_MULTIRRT,
	E_TR069_QOS_GET_MULTIFAILINFO,
	E_TR069_QOS_GET_ERROR,
	E_TR069_QOS_GET_BUFFERINFO,
	E_TR069_QOS_GET_RTSPINFO,
	E_TR069_QOS_GET_IGMPINFO,
	E_TR069_QOS_GET_HTTPINFO,
	E_TR069_QOS_GET_VODREQNUMBER,
	E_TR069_QOS_GET_VODRRT,
	E_TR069_QOS_GET_VODFAILNUMBER,
	E_TR069_QOS_GET_VODFAILINFO,
	E_TR069_QOS_GET_HTTPREQNUMBER,
	E_TR069_QOS_GET_HTTPRRT,
	E_TR069_QOS_GET_HTTPFAILNUMBER,
	E_TR069_QOS_GET_HTTPFAILINFO,
	E_TR069_QOS_GET_MULTIABENDNUMBER,
	E_TR069_QOS_GET_VODABENDNUMBER,
	E_TR069_QOS_GET_MULTIABENDUPNUMBER,
	E_TR069_QOS_GET_VODABENDUPNUMBER,
	E_TR069_QOS_GET_PLAYERRORNUMBER,
	E_TR069_QOS_GET_PLAYERRORINFO,
	E_TR069_QOS_GET_MULTIPLOSTR1,
	E_TR069_QOS_GET_MULTIPLOSTR2,
	E_TR069_QOS_GET_MULTIPLOSTR3,
	E_TR069_QOS_GET_MULTIPLOSTR4,
	E_TR069_QOS_GET_MULTIPLOSTR5,
	E_TR069_QOS_GET_FECMULTIPLOSTR1,
	E_TR069_QOS_GET_FECMULTIPLOSTR2,
	E_TR069_QOS_GET_FECMULTIPLOSTR3,
	E_TR069_QOS_GET_FECMULTIPLOSTR4,
	E_TR069_QOS_GET_FECMULTIPLOSTR5,
	E_TR069_QOS_GET_VODPLOSTR1,
	E_TR069_QOS_GET_VODPLOSTR2,
	E_TR069_QOS_GET_VODPLOSTR3,
	E_TR069_QOS_GET_VODPLOSTR4,
	E_TR069_QOS_GET_VODPLOSTR5,
	E_TR069_QOS_GET_ARQVODPLOSTR1,
	E_TR069_QOS_GET_ARQVODPLOSTR2,
	E_TR069_QOS_GET_ARQVODPLOSTR3,
	E_TR069_QOS_GET_ARQVODPLOSTR4,
	E_TR069_QOS_GET_ARQVODPLOSTR5,
	E_TR069_QOS_GET_MULTIBITRATER1,
	E_TR069_QOS_GET_MULTIBITRATER2,
	E_TR069_QOS_GET_MULTIBITRATER3,
	E_TR069_QOS_GET_MULTIBITRATER4,
	E_TR069_QOS_GET_MULTIBITRATER5,
	E_TR069_QOS_GET_VODBITRATER1,
	E_TR069_QOS_GET_VODBITRATER2,
	E_TR069_QOS_GET_VODBITRATER3,
	E_TR069_QOS_GET_VODBITRATER4,
	E_TR069_QOS_GET_VODBITRATER5,
	E_TR069_QOS_GET_BUFFERINCNMB,
	E_TR069_QOS_GET_BUFFERDECNMB,
	E_TR069_QOS_GET_FRAMELOSTR1,
	E_TR069_QOS_GET_FRAMELOSTR2,
	E_TR069_QOS_GET_FRAMELOSTR3,
	E_TR069_QOS_GET_FRAMELOSTR4,
	E_TR069_QOS_GET_FRAMELOSTR5
}LOCAL_QOS_TYPE_T;










#ifdef __cplusplus
}
#endif

#endif