/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <FTServices/FTIDSMessage.h>

@class NSString, NSData, NSNumber, NSArray;

@interface IDSGroupPutMessage : FTIDSMessage {

	NSString* _route;
	NSString* _hardwareVersion;
	NSString* _osVersion;
	NSString* _softwareVersion;
	NSString* _deviceName;
	NSData* _engramID;
	NSNumber* _version;
	NSData* _key;
	NSData* _data;
	NSNumber* _requiredUpdate;
	NSData* _signature;
	NSString* _sigAlgorithm;
	NSData* _forwardingSig;
	NSString* _forwardingSigAlgorithm;
	NSData* _responseEngramID;
	NSNumber* _responseVersion;
	NSArray* _responseEntries;
	NSNumber* _responseStatus;
	NSString* _responseMessage;

}

@property (copy) NSString * route;                               //@synthesize route=_route - In the implementation block
@property (copy) NSString * hardwareVersion;                     //@synthesize hardwareVersion=_hardwareVersion - In the implementation block
@property (copy) NSString * osVersion;                           //@synthesize osVersion=_osVersion - In the implementation block
@property (copy) NSString * softwareVersion;                     //@synthesize softwareVersion=_softwareVersion - In the implementation block
@property (copy) NSString * deviceName;                          //@synthesize deviceName=_deviceName - In the implementation block
@property (copy) NSData * engramID;                              //@synthesize engramID=_engramID - In the implementation block
@property (copy) NSNumber * version;                             //@synthesize version=_version - In the implementation block
@property (copy) NSData * key;                                   //@synthesize key=_key - In the implementation block
@property (copy) NSData * data;                                  //@synthesize data=_data - In the implementation block
@property (copy) NSNumber * requiredUpdate;                      //@synthesize requiredUpdate=_requiredUpdate - In the implementation block
@property (copy) NSData * signature;                             //@synthesize signature=_signature - In the implementation block
@property (copy) NSString * sigAlgorithm;                        //@synthesize sigAlgorithm=_sigAlgorithm - In the implementation block
@property (copy) NSData * forwardingSig;                         //@synthesize forwardingSig=_forwardingSig - In the implementation block
@property (copy) NSString * forwardingSigAlgorithm;              //@synthesize forwardingSigAlgorithm=_forwardingSigAlgorithm - In the implementation block
@property (copy) NSData * responseEngramID;                      //@synthesize responseEngramID=_responseEngramID - In the implementation block
@property (copy) NSNumber * responseVersion;                     //@synthesize responseVersion=_responseVersion - In the implementation block
@property (copy) NSArray * responseEntries;                      //@synthesize responseEntries=_responseEntries - In the implementation block
@property (copy) NSNumber * responseStatus;                      //@synthesize responseStatus=_responseStatus - In the implementation block
@property (copy) NSString * responseMessage;                     //@synthesize responseMessage=_responseMessage - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)key;
-(NSData *)data;
-(NSNumber *)version;
-(void)setData:(NSData *)arg1 ;
-(void)setKey:(NSData *)arg1 ;
-(void)setVersion:(NSNumber *)arg1 ;
-(NSData *)signature;
-(NSString *)deviceName;
-(id)messageBody;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)setHardwareVersion:(NSString *)arg1 ;
-(NSString *)hardwareVersion;
-(void)setSignature:(NSData *)arg1 ;
-(void)setSoftwareVersion:(NSString *)arg1 ;
-(NSString *)softwareVersion;
-(void)setRoute:(NSString *)arg1 ;
-(NSString *)route;
-(NSString *)osVersion;
-(void)setOsVersion:(NSString *)arg1 ;
-(NSString *)responseMessage;
-(void)setResponseMessage:(NSString *)arg1 ;
-(id)requiredKeys;
-(BOOL)allowDualDelivery;
-(id)bagKey;
-(id)additionalMessageHeaders;
-(void)handleResponseDictionary:(id)arg1 ;
-(NSNumber *)responseStatus;
-(void)setResponseStatus:(NSNumber *)arg1 ;
-(NSData *)engramID;
-(void)setEngramID:(NSData *)arg1 ;
-(void)setResponseVersion:(NSNumber *)arg1 ;
-(NSNumber *)responseVersion;
-(NSArray *)responseEntries;
-(NSData *)responseEngramID;
-(NSString *)sigAlgorithm;
-(void)setSigAlgorithm:(NSString *)arg1 ;
-(NSData *)forwardingSig;
-(void)setForwardingSig:(NSData *)arg1 ;
-(NSString *)forwardingSigAlgorithm;
-(void)setForwardingSigAlgorithm:(NSString *)arg1 ;
-(void)setResponseEngramID:(NSData *)arg1 ;
-(void)setResponseEntries:(NSArray *)arg1 ;
-(NSNumber *)requiredUpdate;
-(void)setRequiredUpdate:(NSNumber *)arg1 ;
@end

