/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagementProtocol/RemoteManagementProtocol-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString, RMProtocolSupportedFeatures;

@interface RMProtocolServerCapabilitiesResponse : RMModelPayloadBase {

	NSString* _responseCapabilitiesToken;
	NSString* _responseVersion;
	RMProtocolSupportedFeatures* _responseSupportedFeatures;

}

@property (nonatomic,copy) NSString * responseCapabilitiesToken;                                 //@synthesize responseCapabilitiesToken=_responseCapabilitiesToken - In the implementation block
@property (nonatomic,copy) NSString * responseVersion;                                           //@synthesize responseVersion=_responseVersion - In the implementation block
@property (nonatomic,copy) RMProtocolSupportedFeatures * responseSupportedFeatures;              //@synthesize responseSupportedFeatures=_responseSupportedFeatures - In the implementation block
+(id)requestWithCapabilitiesToken:(id)arg1 version:(id)arg2 supportedFeatures:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)serializePayloadWithType:(short)arg1 ;
-(void)setResponseCapabilitiesToken:(NSString *)arg1 ;
-(void)setResponseVersion:(NSString *)arg1 ;
-(void)setResponseSupportedFeatures:(RMProtocolSupportedFeatures *)arg1 ;
-(NSString *)responseCapabilitiesToken;
-(NSString *)responseVersion;
-(RMProtocolSupportedFeatures *)responseSupportedFeatures;
@end

