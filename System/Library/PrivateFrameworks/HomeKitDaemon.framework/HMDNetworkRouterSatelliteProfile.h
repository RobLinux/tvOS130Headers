/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDAccessoryProfile.h>

@interface HMDNetworkRouterSatelliteProfile : HMDAccessoryProfile {

	unsigned long long _networkStatus;
	long long _satelliteStatus;

}

@property (assign,nonatomic) long long satelliteStatus;                     //@synthesize satelliteStatus=_satelliteStatus - In the implementation block
@property (assign,nonatomic) unsigned long long networkStatus;              //@synthesize networkStatus=_networkStatus - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_registerForNotifications;
-(void)registerForMessages;
-(unsigned long long)networkStatus;
-(void)setNetworkStatus:(unsigned long long)arg1 ;
-(void)unconfigure;
-(id)runtimeState;
-(void)handleAccessoryIsReachable:(id)arg1 ;
-(id)initWithRouterSatelliteService:(id)arg1 msgDispatcher:(id)arg2 ;
-(void)handleInitialState;
-(void)handleCharacteristicValuesChanged:(id)arg1 ;
-(void)__handleAccessoryIsReachable;
-(long long)satelliteStatus;
-(void)__notifyClientsOfNetworkStatusUpdate:(unsigned long long)arg1 ;
-(void)setSatelliteStatus:(long long)arg1 ;
-(void)_updateNetworkStatus;
-(void)__updateSatelliteStatus:(id)arg1 ;
-(void)_handleCharacteristicChanges:(id)arg1 ;
@end

