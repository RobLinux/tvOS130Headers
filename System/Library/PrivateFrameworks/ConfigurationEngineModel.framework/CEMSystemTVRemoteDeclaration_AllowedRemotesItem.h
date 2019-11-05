/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMSystemTVRemoteDeclaration_AllowedRemotesItem : CEMPayloadBase {

	NSString* _payloadRemoteDeviceID;

}

@property (nonatomic,copy) NSString * payloadRemoteDeviceID;              //@synthesize payloadRemoteDeviceID=_payloadRemoteDeviceID - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithRemoteDeviceID:(id)arg1 ;
+(id)buildRequiredOnlyWithRemoteDeviceID:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadRemoteDeviceID:(NSString *)arg1 ;
-(NSString *)payloadRemoteDeviceID;
@end
