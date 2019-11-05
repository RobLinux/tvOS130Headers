/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:48 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <locationd/CLTransitMacMonitorClientProtocol.h>

@class NSString;

@interface CLVehicleStateNotifierTransitMacMonitorAdapter : NSObject <CLTransitMacMonitorClientProtocol> {

	CLVehicleStateNotifier* _vehicleStateNotifier;
	BOOL _valid;

}

@property (assign,nonatomic) BOOL valid;                            //@synthesize valid=_valid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)valid;
-(void)setValid:(BOOL)arg1 ;
-(id)initWithVehicleStateNotifier:(CLVehicleStateNotifier*)arg1 ;
-(void)onTransitStateUpdate:(unsigned long long)arg1 ;
@end

