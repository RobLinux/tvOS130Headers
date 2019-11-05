/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HMFoundation/NSCopying.h>

@class NSUUID, NSString, HMFMessageDestination, HMFMessageTransport, HMFActivity, NSDictionary;

@interface HMFMessageInternal : HMFObject <NSCopying> {

	NSUUID* _identifier;
	NSString* _name;
	double _timeout;
	long long _qualityOfService;
	HMFMessageDestination* _destination;
	HMFMessageTransport* _transport;
	HMFActivity* _activity;
	NSDictionary* _userInfo;
	NSDictionary* _headers;
	NSDictionary* _messagePayload;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) NSUUID * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) double timeout;                                      //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                          //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (nonatomic,retain) HMFMessageDestination * destination;                 //@synthesize destination=_destination - In the implementation block
@property (assign,nonatomic,__weak) HMFMessageTransport * transport;              //@synthesize transport=_transport - In the implementation block
@property (nonatomic,retain) HMFActivity * activity;                              //@synthesize activity=_activity - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                               //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,copy) NSDictionary * headers;                                //@synthesize headers=_headers - In the implementation block
@property (nonatomic,copy) NSDictionary * messagePayload;                         //@synthesize messagePayload=_messagePayload - In the implementation block
@property (nonatomic,copy) id responseHandler;                                    //@synthesize responseHandler=_responseHandler - In the implementation block
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSDictionary *)userInfo;
-(void)setName:(NSString *)arg1 ;
-(NSUUID *)identifier;
-(void)setTimeout:(double)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(double)timeout;
-(HMFActivity *)activity;
-(void)setActivity:(HMFActivity *)arg1 ;
-(long long)qualityOfService;
-(void)setQualityOfService:(long long)arg1 ;
-(void)setDestination:(HMFMessageDestination *)arg1 ;
-(HMFMessageDestination *)destination;
-(HMFMessageTransport *)transport;
-(void)setTransport:(HMFMessageTransport *)arg1 ;
-(NSDictionary *)headers;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
-(NSDictionary *)messagePayload;
-(void)setMessagePayload:(NSDictionary *)arg1 ;
@end

