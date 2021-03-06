/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:26 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <LocationSupport/CLIntersiloService.h>
#import <CoreMotion/CLNotifierServiceProtocol.h>

@class NSString;

@interface CLNotifierServiceAdapter : CLIntersiloService <CLNotifierServiceProtocol> {

	map<unsigned long, int, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, int> > >* _clients;
	CLNotifierBase* _notifier;

}

@property (nonatomic,readonly) CLNotifierBase* notifier;              //@synthesize notifier=_notifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL valid; 
-(NSString *)debugDescription;
-(id)init;
-(void)invalidate;
-(void)register:(R)arg1 forNotification:(id)arg2 registrationInfo:(int)arg3 :(id)arg4 ;
-(void)unregister:(R)arg1 forNotification:(id)arg2 :(int)arg3 ;
-(void)setAdaptedNotifier:(CLNotifierBase*)arg1 ;
-(void)forget:(R)arg1 :(id)arg2 ;
-(CLNotifierBase*)notifier;
-(int)notifierClientNumForCoparty:(id)arg1 ;
@end

