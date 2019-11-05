/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:37 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSString, NSDictionary;

@interface HMDDataStreamPendingRequest : NSObject {

	NSNumber* _identifier;
	NSString* _topic;
	NSString* _protocol;
	/*^block*/id _callback;
	NSDictionary* _payload;

}

@property (nonatomic,readonly) NSNumber * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * topic;                    //@synthesize topic=_topic - In the implementation block
@property (nonatomic,readonly) NSString * protocol;                 //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,readonly) id callback;                         //@synthesize callback=_callback - In the implementation block
@property (nonatomic,readonly) NSDictionary * payload;              //@synthesize payload=_payload - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSNumber *)identifier;
-(NSString *)protocol;
-(id)callback;
-(NSDictionary *)payload;
-(NSString *)topic;
-(id)initWithIdentifier:(id)arg1 protocol:(id)arg2 topic:(id)arg3 payload:(id)arg4 callback:(/*^block*/id)arg5 ;
-(BOOL)matchesResponseHeader:(id)arg1 ;
@end

