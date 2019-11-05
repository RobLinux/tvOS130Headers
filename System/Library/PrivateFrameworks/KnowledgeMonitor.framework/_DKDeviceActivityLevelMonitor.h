/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeMonitor/_DKMonitor.h>

@protocol _CDLocalContext;
@class NSDate, _CDContextualKeyPath;

@interface _DKDeviceActivityLevelMonitor : _DKMonitor {

	BOOL _enabled;
	BOOL _initialized;
	int _pineBoardToken;
	unsigned long long _lastInUseStatus;
	unsigned long long _currentInUseStatus;
	NSDate* _lastSetActiveDate;
	id<_CDLocalContext> _context;
	_CDContextualKeyPath* _lastUseDate;
	_CDContextualKeyPath* _inUseStatus;

}

@property (assign,nonatomic) BOOL enabled;                                       //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL initialized;                                   //@synthesize initialized=_initialized - In the implementation block
@property (assign,nonatomic) unsigned long long lastInUseStatus;                 //@synthesize lastInUseStatus=_lastInUseStatus - In the implementation block
@property (assign,nonatomic) unsigned long long currentInUseStatus;              //@synthesize currentInUseStatus=_currentInUseStatus - In the implementation block
@property (nonatomic,retain) NSDate * lastSetActiveDate;                         //@synthesize lastSetActiveDate=_lastSetActiveDate - In the implementation block
@property (nonatomic,retain) id<_CDLocalContext> context;                        //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) _CDContextualKeyPath * lastUseDate;                 //@synthesize lastUseDate=_lastUseDate - In the implementation block
@property (nonatomic,retain) _CDContextualKeyPath * inUseStatus;                 //@synthesize inUseStatus=_inUseStatus - In the implementation block
@property (assign,nonatomic) int pineBoardToken;                                 //@synthesize pineBoardToken=_pineBoardToken - In the implementation block
+(void)initialize;
+(id)entitlements;
+(id)eventStream;
+(BOOL)shouldMergeUnchangedEvents;
+(id)_eventWithState:(unsigned long long)arg1 ;
-(void)dealloc;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)initialized;
-(void)start;
-(void)stop;
-(id<_CDLocalContext>)context;
-(void)setContext:(id<_CDLocalContext>)arg1 ;
-(void)deactivate;
-(void)synchronouslyReflectCurrentValue;
-(void)setInitialized:(BOOL)arg1 ;
-(void)setLastUseDate:(_CDContextualKeyPath *)arg1 ;
-(_CDContextualKeyPath *)lastUseDate;
-(void)handleUserActivity:(int)arg1 ;
-(int)pineBoardToken;
-(void)updateActivityInUseState:(unsigned long long)arg1 ;
-(void)setLastActivityDate:(id)arg1 ;
-(void)updatePerformanceThrottleStatusWithLevel:(unsigned long long)arg1 ;
-(void)updateActivityDateAndInUseState:(unsigned long long)arg1 ;
-(unsigned long long)lastInUseStatus;
-(void)setLastInUseStatus:(unsigned long long)arg1 ;
-(unsigned long long)currentInUseStatus;
-(void)setCurrentInUseStatus:(unsigned long long)arg1 ;
-(NSDate *)lastSetActiveDate;
-(void)setLastSetActiveDate:(NSDate *)arg1 ;
-(_CDContextualKeyPath *)inUseStatus;
-(void)setInUseStatus:(_CDContextualKeyPath *)arg1 ;
-(void)setPineBoardToken:(int)arg1 ;
@end

