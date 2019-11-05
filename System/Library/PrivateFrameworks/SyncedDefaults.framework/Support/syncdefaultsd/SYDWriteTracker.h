/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/Support/syncdefaultsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface SYDWriteTracker : NSObject {

	BOOL _enabled;
	NSMutableDictionary* _clientsByIdentifier;

}

@property (assign,nonatomic) BOOL enabled;                                           //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * clientsByIdentifier;              //@synthesize clientsByIdentifier=_clientsByIdentifier - In the implementation block
-(id)init;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(id)reset;
-(id)disable;
-(void)enable;
-(id)initWithPlistRepresentation:(id)arg1 ;
-(id)plistRepresentation;
-(void)wroteBytes:(unsigned long long)arg1 forIdentifier:(id)arg2 ;
-(NSMutableDictionary *)clientsByIdentifier;
-(void)setClientsByIdentifier:(NSMutableDictionary *)arg1 ;
@end

