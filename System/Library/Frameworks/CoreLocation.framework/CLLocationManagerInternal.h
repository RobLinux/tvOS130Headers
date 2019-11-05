/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLLocationManagerDelegate;
#import <CoreLocation/CoreLocation-Structs.h>
@class CLLocationManager, CLLocationManagerStateTracker, NSString, CLTimer, NSMutableSet, CLSilo;

@interface CLLocationManagerInternal : NSObject {

	CLClientRef fClient;
	id<CLLocationManagerDelegate> fDelegate;
	CLLocationManager* fManager;
	CLLocationManagerStateTracker* fState;
	SCD_Struct_CL3 fLocation;
	NSString* fLocationEventType;
	CLTimer* fLocationRequestTimer;
	double fLocationRequestTimeout;
	CLTimer* fRangingRequestTimer;
	double fLastRangingRequestTimeout;
	unsigned long long fLastRangingRequestMachTime;
	int fHeadingOrientation;
	NSMutableSet* fRangedRegions;
	NSMutableSet* fRangedConstraints;
	/*^block*/id fPlaceInferenceHandler;
	unsigned long long fFidelityPolicy;
	CLSilo* fSilo;

}

@property (nonatomic,readonly) NSMutableSet * rangedRegions; 
@property (nonatomic,readonly) NSMutableSet * rangedConstraints; 
@property (assign,nonatomic,__weak) id<CLLocationManagerDelegate> delegate; 
@property (assign,nonatomic,__weak) CLLocationManager * manager; 
-(void)dealloc;
-(void)invalidate;
-(id<CLLocationManagerDelegate>)delegate;
-(void)setDelegate:(id<CLLocationManagerDelegate>)arg1 ;
-(CLLocationManager *)manager;
-(void)setManager:(CLLocationManager *)arg1 ;
-(void)setPausesLocationUpdatesAutomatically:(int)arg1 ;
-(BOOL)allowsBackgroundLocationUpdates;
-(void)setAllowsBackgroundLocationUpdates:(BOOL)arg1 ;
-(BOOL)showsBackgroundLocationIndicator;
-(void)setShowsBackgroundLocationIndicator:(BOOL)arg1 ;
-(BOOL)hasLingeringRangingRequest;
-(void)cancelRangingRequest;
-(id)initWithInfo:(id)arg1 bundleIdentifier:(id)arg2 bundle:(id)arg3 delegate:(id)arg4 silo:(id)arg5 ;
-(int)PausesLocationUpdatesAutomatically;
-(void)stopUpdatingLocationAutoPaused;
-(void)cancelLocationRequest;
-(void)cancelLingeringRangingRequest;
-(void)performCourtesyPromptIfNeeded;
-(NSMutableSet *)rangedRegions;
-(NSMutableSet *)rangedConstraints;
@end

