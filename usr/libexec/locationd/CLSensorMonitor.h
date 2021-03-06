/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:44 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <LocationSupport/CLIntersiloService.h>
#import <locationd/CLSensorMonitorProtocol.h>

@class NSString;

@interface CLSensorMonitor : CLIntersiloService <CLSensorMonitorProtocol> {

	unique_ptr<CLStepCountNotifier_Type::Client, std::__1::default_delete<CLStepCountNotifier_Type::Client> >* _stepCountClient;
	unique_ptr<CLFallNotifier_Type::Client, std::__1::default_delete<CLFallNotifier_Type::Client> >* _fallClient;
	unique_ptr<CLOdometerNotifier_Type::Client, std::__1::default_delete<CLOdometerNotifier_Type::Client> >* _odometerClient;
	unique_ptr<CLCatherineNotifier_Type::Client, std::__1::default_delete<CLCatherineNotifier_Type::Client> >* _heartRateClient;

}

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
-(Class)classForSensorIdentifier:(id)arg1 ;
@end

