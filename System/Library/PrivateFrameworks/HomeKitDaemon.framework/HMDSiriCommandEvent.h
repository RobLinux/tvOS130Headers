/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <HomeKitDaemon/HMDAWDLogEvent.h>

@class NSString;

@interface HMDSiriCommandEvent : HMDLogEvent <HMDAWDLogEvent> {

	unsigned long long _duration;
	NSString* _actionType;
	NSString* _outcome;
	unsigned long long _numberOfEntities;
	unsigned long long _numberOfFailures;
	unsigned long long _numberOfIncompletions;
	unsigned long long _configurationVersion;
	unsigned long long _lastSyncedConfigurationVersion;
	unsigned long long _serverConfigurationVersion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long duration;                                    //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) NSString * actionType;                                          //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,readonly) NSString * outcome;                                             //@synthesize outcome=_outcome - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfEntities;                            //@synthesize numberOfEntities=_numberOfEntities - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfFailures;                            //@synthesize numberOfFailures=_numberOfFailures - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfIncompletions;                       //@synthesize numberOfIncompletions=_numberOfIncompletions - In the implementation block
@property (nonatomic,readonly) unsigned long long configurationVersion;                        //@synthesize configurationVersion=_configurationVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long lastSyncedConfigurationVersion;              //@synthesize lastSyncedConfigurationVersion=_lastSyncedConfigurationVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long serverConfigurationVersion;                  //@synthesize serverConfigurationVersion=_serverConfigurationVersion - In the implementation block
+(void)initialize;
+(id)uuid;
+(id)commandEventWithStartTime:(unsigned long long)arg1 actionType:(id)arg2 outcome:(id)arg3 numberOfEntities:(unsigned long long)arg4 numberOfFailures:(unsigned long long)arg5 numberOfIncompletions:(unsigned long long)arg6 serverConfigurationVersion:(unsigned long long)arg7 configurationVersion:(unsigned long long)arg8 lastSyncedConfigurationVersion:(unsigned long long)arg9 ;
-(unsigned long long)duration;
-(NSString *)outcome;
-(NSString *)actionType;
-(unsigned long long)configurationVersion;
-(unsigned long long)lastSyncedConfigurationVersion;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(unsigned long long)serverConfigurationVersion;
-(id)initWithStartTime:(unsigned long long)arg1 actionType:(id)arg2 outcome:(id)arg3 numberOfEntities:(unsigned long long)arg4 numberOfFailures:(unsigned long long)arg5 numberOfIncompletions:(unsigned long long)arg6 serverConfigurationVersion:(unsigned long long)arg7 configurationVersion:(unsigned long long)arg8 lastSyncedConfigurationVersion:(unsigned long long)arg9 ;
-(unsigned long long)numberOfEntities;
-(unsigned long long)numberOfFailures;
-(unsigned long long)numberOfIncompletions;
@end

