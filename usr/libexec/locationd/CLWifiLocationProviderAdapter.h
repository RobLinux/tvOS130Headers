/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:44 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <locationd/CLLocationProviderAdapter.h>
#import <locationd/CLWifiLocationProviderProtocol.h>

@class NSString;

@interface CLWifiLocationProviderAdapter : CLLocationProviderAdapter <CLWifiLocationProviderProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL valid; 
+(BOOL)isSupported;
+(void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2 ;
+(id)getSilo;
+(void)performSyncOnSilo:(id)arg1 invoker:(/*^block*/id)arg2 ;
-(id)init;
-(void)beginService;
-(void)endService;
-(void)doAsync:(/*^block*/id)arg1 ;
-(void)doAsync:(/*^block*/id)arg1 withReply:(/*^block*/id)arg2 ;
-(BOOL)syncgetDoSync:(/*^block*/id)arg1 ;
-(CLWifiLocationProvider*)adaptee;
-(void)requestLocationUpdateWithParameters:(/*^block*/id)arg1 ;
-(void)emergencyStateChange:(int)arg1 ;
-(void)emergencySettingsChange:(/*^block*/id)arg1 withReason:(int)arg2 ;
-(void)shouldLockoutNilr:(BOOL)arg1 ;
-(void)allowLocalClientsInEmergency:(BOOL)arg1 ;
@end

