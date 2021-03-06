/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <FTServices/FTIDSMessage.h>
#import <identityservicesd/NSCopying.h>

@class NSString, NSArray;

@interface IDSHomeKitCloudRelayConsentTokensMessage : FTIDSMessage <NSCopying> {

	NSString* _serviceUserID;
	NSArray* _accessoryIDs;
	NSString* _adminID;
	NSString* _expiry;
	NSArray* responseConsentTokens;
	NSArray* _responseConsentTokens;

}

@property (copy) NSString * serviceUserID;                     //@synthesize serviceUserID=_serviceUserID - In the implementation block
@property (copy) NSArray * accessoryIDs;                       //@synthesize accessoryIDs=_accessoryIDs - In the implementation block
@property (copy) NSString * adminID;                           //@synthesize adminID=_adminID - In the implementation block
@property (copy) NSString * expiry;                            //@synthesize expiry=_expiry - In the implementation block
@property (copy) NSArray * responseConsentTokens;              //@synthesize responseConsentTokens=_responseConsentTokens - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)messageBody;
-(NSString *)expiry;
-(id)bagKey;
-(id)additionalMessageHeaders;
-(void)handleResponseDictionary:(id)arg1 ;
-(void)setExpiry:(NSString *)arg1 ;
-(void)setServiceUserID:(NSString *)arg1 ;
-(void)setAdminID:(NSString *)arg1 ;
-(void)setAccessoryIDs:(NSArray *)arg1 ;
-(NSArray *)responseConsentTokens;
-(NSString *)serviceUserID;
-(NSArray *)accessoryIDs;
-(NSString *)adminID;
-(void)setResponseConsentTokens:(NSArray *)arg1 ;
@end

