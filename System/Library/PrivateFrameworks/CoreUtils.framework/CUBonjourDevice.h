/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NSString, NSDictionary, NSData;

@interface CUBonjourDevice : NSObject {

	unsigned char _deviceIDBytes[6];
	NSUUID* _identifier;
	NSString* _model;
	NSString* _name;
	NSString* _serviceType;
	NSDictionary* _txtDictionary;
	NSData* _txtData;
	NSDictionary* _deviceInfo;
	NSString* _identifierStr;
	NSUUID* _identifierUUID;

}

@property (nonatomic,copy) NSDictionary * deviceInfo;                          //@synthesize deviceInfo=_deviceInfo - In the implementation block
@property (nonatomic,copy) NSString * identifierStr;                           //@synthesize identifierStr=_identifierStr - In the implementation block
@property (nonatomic,copy) NSUUID * identifierUUID;                            //@synthesize identifierUUID=_identifierUUID - In the implementation block
@property (nonatomic,copy) NSUUID * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * model;                                   //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                             //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * txtDictionary;              //@synthesize txtDictionary=_txtDictionary - In the implementation block
@property (nonatomic,copy) NSData * txtData;                                   //@synthesize txtData=_txtData - In the implementation block
-(NSString *)name;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSString *)model;
-(void)setServiceType:(NSString *)arg1 ;
-(NSString *)serviceType;
-(void)setModel:(NSString *)arg1 ;
-(id)shortDescription;
-(id)descriptionWithLevel:(int)arg1 ;
-(NSDictionary *)txtDictionary;
-(unsigned)updateWithBonjourDeviceInfo:(id)arg1 ;
-(void)setIdentifierStr:(NSString *)arg1 ;
-(void)setIdentifierUUID:(NSUUID *)arg1 ;
-(id)copyConnectionInfoWithFlags:(unsigned long long)arg1 interfaceName:(id)arg2 error:(id*)arg3 ;
-(id)copyConnectionStringWithFlags:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)reconfirm;
-(void)_updateTXTDictionary:(id)arg1 ;
-(NSData *)txtData;
-(void)setTxtData:(NSData *)arg1 ;
-(NSDictionary *)deviceInfo;
-(void)setDeviceInfo:(NSDictionary *)arg1 ;
-(NSString *)identifierStr;
-(NSUUID *)identifierUUID;
@end

