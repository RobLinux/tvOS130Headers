/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:47 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <locationd/CLBTLEBeaconProviderAdapter.h>
#import <locationd/CLBTLEBeaconProviderMockProtocol.h>

@class NSString;

@interface CLBTLEBeaconProviderMockAdapter : CLBTLEBeaconProviderAdapter <CLBTLEBeaconProviderMockProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL valid; 
+(void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2 ;
+(id)getSilo;
+(void)performSyncOnSilo:(id)arg1 invoker:(/*^block*/id)arg2 ;
-(id)init;
-(void)beginService;
-(void)endService;
-(void)doAsync:(/*^block*/id)arg1 ;
-(void)doAsync:(/*^block*/id)arg1 withReply:(/*^block*/id)arg2 ;
-(BOOL)syncgetDoSync:(/*^block*/id)arg1 ;
-(CLBTLEBeaconProviderMock*)adaptee;
-(void)addProximityZoneEvent:(/*^block*/id)arg1 ;
-(void)addProximityScanEvent:(/*^block*/id)arg1 ;
-(void)requestScan:(double)arg1 ;
@end

