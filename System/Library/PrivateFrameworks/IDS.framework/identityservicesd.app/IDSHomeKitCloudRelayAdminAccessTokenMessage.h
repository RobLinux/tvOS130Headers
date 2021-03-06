/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <FTServices/FTIDSMessage.h>
#import <identityservicesd/NSCopying.h>

@class NSString, NSData, NSNumber;

@interface IDSHomeKitCloudRelayAdminAccessTokenMessage : FTIDSMessage <NSCopying> {

	NSString* _serviceUserID;
	NSString* _accessoryID;
	NSData* _pairingToken;
	NSString* _responseAccessoryID;
	NSData* _responseAdminAcccessToken;
	NSNumber* _responseExpiry;

}

@property (copy) NSString * serviceUserID;                        //@synthesize serviceUserID=_serviceUserID - In the implementation block
@property (copy) NSString * accessoryID;                          //@synthesize accessoryID=_accessoryID - In the implementation block
@property (copy) NSData * pairingToken;                           //@synthesize pairingToken=_pairingToken - In the implementation block
@property (copy) NSString * responseAccessoryID;                  //@synthesize responseAccessoryID=_responseAccessoryID - In the implementation block
@property (copy) NSData * responseAdminAcccessToken;              //@synthesize responseAdminAcccessToken=_responseAdminAcccessToken - In the implementation block
@property (copy) NSNumber * responseExpiry;                       //@synthesize responseExpiry=_responseExpiry - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)messageBody;
-(id)bagKey;
-(id)additionalMessageHeaders;
-(void)handleResponseDictionary:(id)arg1 ;
-(NSString *)accessoryID;
-(void)setAccessoryID:(NSString *)arg1 ;
-(void)setServiceUserID:(NSString *)arg1 ;
-(void)setPairingToken:(NSData *)arg1 ;
-(NSString *)responseAccessoryID;
-(NSData *)responseAdminAcccessToken;
-(NSNumber *)responseExpiry;
-(NSString *)serviceUserID;
-(NSData *)pairingToken;
-(void)setResponseAdminAcccessToken:(NSData *)arg1 ;
-(void)setResponseExpiry:(NSNumber *)arg1 ;
-(void)setResponseAccessoryID:(NSString *)arg1 ;
@end

