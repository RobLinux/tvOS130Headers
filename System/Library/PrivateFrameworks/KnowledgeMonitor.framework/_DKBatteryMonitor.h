/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeMonitor/KnowledgeMonitor-Structs.h>
#import <KnowledgeMonitor/_DKMonitor.h>

@interface _DKBatteryMonitor : _DKMonitor {

	unsigned _powerService;
	unsigned _batteryNotification;
	IONotificationPortRef _notifyPort;
	BOOL _hasInternalBattery;
	BOOL _previouslyFullyCharged;
	int _immediateShutdownThreshold;
	double _previousPercentage;

}

@property (assign,nonatomic) int immediateShutdownThreshold;              //@synthesize immediateShutdownThreshold=_immediateShutdownThreshold - In the implementation block
@property (assign,nonatomic) BOOL hasInternalBattery;                     //@synthesize hasInternalBattery=_hasInternalBattery - In the implementation block
@property (assign,nonatomic) double previousPercentage;                   //@synthesize previousPercentage=_previousPercentage - In the implementation block
@property (assign,nonatomic) BOOL previouslyFullyCharged;                 //@synthesize previouslyFullyCharged=_previouslyFullyCharged - In the implementation block
+(id)entitlements;
+(id)eventStream;
+(void)setCurrentBatteryPercentage:(double)arg1 ;
+(id)_eventWithBatteryPercentage:(double)arg1 isFullyCharged:(BOOL)arg2 ;
-(void)dealloc;
-(void)start;
-(void)stop;
-(void)deactivate;
-(void)synchronouslyReflectCurrentValue;
-(id)getBatteryProperties;
-(double)batteryPercentageFromPowerSourceDictionary:(id)arg1 ;
-(double)currentBatteryPercentage;
-(void)postImminentShutdownNotification:(double)arg1 ;
-(BOOL)percentage:(id)arg1 differsFrom:(id)arg2 ;
-(BOOL)temperature:(id)arg1 differsFrom:(id)arg2 ;
-(BOOL)voltage:(id)arg1 differsFrom:(id)arg2 ;
-(BOOL)fullyCharged:(id)arg1 differsFrom:(id)arg2 ;
-(BOOL)isCharging:(id)arg1 differsFrom:(id)arg2 ;
-(BOOL)externalConnected:(id)arg1 differsFrom:(id)arg2 ;
-(BOOL)adapterType:(id)arg1 differsFrom:(id)arg2 ;
-(void)_handleBatteryNotification;
-(BOOL)newBatteryState:(id)arg1 differsSignificantlyFromState:(id)arg2 ;
-(BOOL)fullyChargedFromPowerSourceDictionary:(id)arg1 ;
-(int)immediateShutdownThreshold;
-(void)setImmediateShutdownThreshold:(int)arg1 ;
-(BOOL)hasInternalBattery;
-(void)setHasInternalBattery:(BOOL)arg1 ;
-(double)previousPercentage;
-(void)setPreviousPercentage:(double)arg1 ;
-(BOOL)previouslyFullyCharged;
-(void)setPreviouslyFullyCharged:(BOOL)arg1 ;
@end

