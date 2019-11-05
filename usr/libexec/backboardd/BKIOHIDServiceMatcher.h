/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:33 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <backboardd/BSInvalidatable.h>

@protocol BKIOHIDServiceMatchObserver, OS_dispatch_queue;
@class NSDictionary, NSObject, BKHIDSystemInterface, NSString;

@interface BKIOHIDServiceMatcher : NSObject <BSInvalidatable> {

	BOOL _startedMatching;
	BOOL _invalidated;
	NSDictionary* _matchingDictionary;
	Class _serviceClass;
	id<BKIOHIDServiceMatchObserver> _observer;
	NSObject*<OS_dispatch_queue> _observerQueue;
	BKHIDSystemInterface* _HIDSystem;

}

@property (nonatomic,copy) NSDictionary * matchingDictionary;                                //@synthesize matchingDictionary=_matchingDictionary - In the implementation block
@property (nonatomic,retain) Class serviceClass;                                             //@synthesize serviceClass=_serviceClass - In the implementation block
@property (assign,nonatomic,__weak) id<BKIOHIDServiceMatchObserver> observer;                //@synthesize observer=_observer - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<OS_dispatch_queue> observerQueue;              //@synthesize observerQueue=_observerQueue - In the implementation block
@property (nonatomic,retain) BKHIDSystemInterface * HIDSystem;                               //@synthesize HIDSystem=_HIDSystem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(id<BKIOHIDServiceMatchObserver>)observer;
-(void)setObserver:(id<BKIOHIDServiceMatchObserver>)arg1 ;
-(void)setServiceClass:(Class)arg1 ;
-(Class)serviceClass;
-(NSObject*<OS_dispatch_queue>)observerQueue;
-(void)setObserverQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BKHIDSystemInterface *)HIDSystem;
-(void)setHIDSystem:(BKHIDSystemInterface *)arg1 ;
-(id)initWithUsagePage:(int)arg1 usage:(int)arg2 builtIn:(BOOL)arg3 HIDSystem:(id)arg4 ;
-(id)initWithMatchingDictionary:(id)arg1 HIDSystem:(id)arg2 ;
-(id)initWithMatchingDictionary:(id)arg1 serviceClass:(Class)arg2 HIDSystem:(id)arg3 ;
-(id)existingServices;
-(void)startObserving:(id)arg1 queue:(id)arg2 ;
-(void)_servicesAdded:(id)arg1 ;
-(id)_servicesForIOHIDServiceRefs:(id)arg1 ;
-(NSDictionary *)matchingDictionary;
-(void)setMatchingDictionary:(NSDictionary *)arg1 ;
@end

