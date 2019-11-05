/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/MNTimeballLocationProvider.h>

@protocol OS_dispatch_queue, OS_dispatch_source, CLLocationManagerDelegate;
@class CLLocation, NSLock, NSMutableArray, CLLocationManager, NSObject, NSString;

@interface MNTimeballMockLocationProvider : NSObject <MNTimeballLocationProvider> {

	BOOL _deliveringUpdates;
	NSLock* _objectLock;
	NSMutableArray* _queuedObjects;
	NSMutableArray* _delayIntervals;
	CLLocationManager* _lm;
	CLLocation* _location;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _timer;
	id<CLLocationManagerDelegate> delegate;
	double desiredAccuracy;
	CLLocation* location;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double desiredAccuracy; 
@property (nonatomic,copy,readonly) CLLocation * location; 
@property (assign,nonatomic,__weak) id<CLLocationManagerDelegate> delegate; 
-(id<CLLocationManagerDelegate>)delegate;
-(void)setDelegate:(id<CLLocationManagerDelegate>)arg1 ;
-(CLLocation *)location;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
-(double)desiredAccuracy;
-(void)setDesiredAccuracy:(double)arg1 ;
-(id)initWithEffectiveBundleIdentifier:(id)arg1 delegate:(id)arg2 onQueue:(id)arg3 ;
-(id)initWithEffectiveBundle:(id)arg1 delegate:(id)arg2 onQueue:(id)arg3 ;
-(void)_setupTimer;
-(void)_processNextObject;
-(void)_deliverNextObject;
-(void)deliverLocation:(id)arg1 afterDelay:(double)arg2 ;
-(void)deliverError:(id)arg1 afterDelay:(double)arg2 ;
-(void)clearLocationsAndErrors;
@end

