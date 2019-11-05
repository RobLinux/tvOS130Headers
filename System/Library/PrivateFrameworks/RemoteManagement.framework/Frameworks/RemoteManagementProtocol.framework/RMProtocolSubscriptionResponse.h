/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementProtocol.framework/RemoteManagementProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagementProtocol/RemoteManagementProtocol-Structs.h>
#import <RemoteManagementModel/RMModelPayloadBase.h>

@class NSString, RMModelAnyPayload;

@interface RMProtocolSubscriptionResponse : RMModelPayloadBase {

	NSString* _responseType;
	NSString* _responseIdentifier;
	NSString* _responseDescription;
	NSString* _responseServerToken;
	RMModelAnyPayload* _responsePayload;

}

@property (nonatomic,copy) NSString * responseType;                          //@synthesize responseType=_responseType - In the implementation block
@property (nonatomic,copy) NSString * responseIdentifier;                    //@synthesize responseIdentifier=_responseIdentifier - In the implementation block
@property (nonatomic,copy) NSString * responseDescription;                   //@synthesize responseDescription=_responseDescription - In the implementation block
@property (nonatomic,copy) NSString * responseServerToken;                   //@synthesize responseServerToken=_responseServerToken - In the implementation block
@property (nonatomic,copy) RMModelAnyPayload * responsePayload;              //@synthesize responsePayload=_responsePayload - In the implementation block
+(id)requestWithType:(id)arg1 identifier:(id)arg2 description:(id)arg3 serverToken:(id)arg4 payload:(id)arg5 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)responseType;
-(NSString *)responseDescription;
-(void)setResponseDescription:(NSString *)arg1 ;
-(void)setResponseType:(NSString *)arg1 ;
-(BOOL)loadPayload:(id)arg1 serializationType:(short)arg2 error:(id*)arg3 ;
-(id)serializePayloadWithType:(short)arg1 ;
-(void)setResponseIdentifier:(NSString *)arg1 ;
-(void)setResponsePayload:(RMModelAnyPayload *)arg1 ;
-(NSString *)responseIdentifier;
-(RMModelAnyPayload *)responsePayload;
-(void)setResponseServerToken:(NSString *)arg1 ;
-(NSString *)responseServerToken;
@end

