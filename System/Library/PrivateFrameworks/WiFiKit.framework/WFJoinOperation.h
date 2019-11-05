/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:05 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiKit/WiFiKit-Structs.h>
#import <WiFiKit/WFOperation.h>

@protocol WFWiFiJoinProxy;
@class WFNetworkProfile, WFNetworkScanRecord;

@interface WFJoinOperation : WFOperation {

	WFNetworkProfile* _profile;
	WFNetworkScanRecord* _network;
	id<WFWiFiJoinProxy> _joinProxy;

}

@property (nonatomic,retain) WFNetworkScanRecord * network;              //@synthesize network=_network - In the implementation block
@property (nonatomic,retain) id<WFWiFiJoinProxy> joinProxy;              //@synthesize joinProxy=_joinProxy - In the implementation block
@property (nonatomic,retain) WFNetworkProfile * profile;                 //@synthesize profile=_profile - In the implementation block
-(void)start;
-(WFNetworkScanRecord *)network;
-(WFNetworkProfile *)profile;
-(void)setProfile:(WFNetworkProfile *)arg1 ;
-(void)setNetwork:(WFNetworkScanRecord *)arg1 ;
-(void)joinNetworkRef:(WiFiNetworkRef)arg1 ;
-(id<WFWiFiJoinProxy>)joinProxy;
-(id)initWithJoinProxy:(id)arg1 network:(id)arg2 profile:(id)arg3 ;
-(void)setJoinProxy:(id<WFWiFiJoinProxy>)arg1 ;
@end

