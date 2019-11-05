/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeMonitor/_DKMonitor.h>

@interface _DKPluggedInMonitor : _DKMonitor {

	BOOL _enabled;
	int _pluggedInToken;

}

@property (assign,nonatomic) BOOL enabled;                    //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) int pluggedInToken;              //@synthesize pluggedInToken=_pluggedInToken - In the implementation block
+(id)entitlements;
+(id)eventStream;
+(BOOL)shouldMergeUnchangedEvents;
+(void)setIsPluggedIn:(BOOL)arg1 ;
+(id)_eventWithState:(BOOL)arg1 adapterType:(long long)arg2 ;
-(void)dealloc;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)start;
-(void)stop;
-(void)deactivate;
-(void)synchronouslyReflectCurrentValue;
-(long long)currentAdapterType;
-(void)setCurrentState;
-(int)pluggedInToken;
-(void)setPluggedInToken:(int)arg1 ;
@end

