/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface _CDEventStreams : NSObject {

	BOOL _allStreamsLoaded;
	NSDictionary* _allEventStreams;
	NSDictionary* _allKBEventStreams;

}

@property (assign,nonatomic) BOOL allStreamsLoaded;                           //@synthesize allStreamsLoaded=_allStreamsLoaded - In the implementation block
@property (nonatomic,readonly) NSDictionary * allEventStreams;                //@synthesize allEventStreams=_allEventStreams - In the implementation block
@property (nonatomic,readonly) NSDictionary * allKBEventStreams;              //@synthesize allKBEventStreams=_allKBEventStreams - In the implementation block
+(id)sharedInstance;
+(id)ephemeralitySchedule;
+(void)loadAllEventStreams;
+(id)eventStreamPropertiesForKBName:(id)arg1 ;
+(id)contentProviderPlistEventStreamsForPath:(id)arg1 ;
+(id)eventStreamForName:(id)arg1 ;
+(id)eventStreamPropertiesForName:(id)arg1 ;
+(id)eventStreamPropertiesForEventStream:(id)arg1 ;
+(id)rateLimiterForEventStreamName:(id)arg1 ;
+(id)privacyPolicyForEventStreamName:(id)arg1 ;
-(id)init;
-(NSDictionary *)allEventStreams;
-(BOOL)allStreamsLoaded;
-(void)setAllStreamsLoaded:(BOOL)arg1 ;
-(id)_eventStreamForName:(id)arg1 orKBName:(id)arg2 ;
-(NSDictionary *)allKBEventStreams;
-(void)setAllEventStreams:(NSDictionary *)arg1 ;
-(void)setAllKBEventStreams:(NSDictionary *)arg1 ;
@end

