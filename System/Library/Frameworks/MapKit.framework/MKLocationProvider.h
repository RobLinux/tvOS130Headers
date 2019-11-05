/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:07 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSBundle, NSString, CLLocation;


@protocol MKLocationProvider <NSObject>
@property (assign,nonatomic,__weak) id<MKLocationProviderDelegate> delegate; 
@property (nonatomic,retain) NSBundle * effectiveBundle; 
@property (nonatomic,copy) NSString * effectiveBundleIdentifier; 
@property (assign,nonatomic) double desiredAccuracy; 
@property (assign,getter=isLocationServicesPreferencesDialogEnabled,nonatomic) BOOL locationServicesPreferencesDialogEnabled; 
@property (assign,nonatomic) double distanceFilter; 
@property (assign,nonatomic) BOOL matchInfoEnabled; 
@property (assign,nonatomic) int headingOrientation; 
@property (nonatomic,copy) id authorizationRequestBlock; 
@property (nonatomic,readonly) double expectedGpsUpdateInterval; 
@property (nonatomic,readonly) int authorizationStatus; 
@property (assign,nonatomic) long long activityType; 
@property (nonatomic,readonly) BOOL usesCLMapCorrection; 
@property (nonatomic,readonly) BOOL shouldShiftIfNecessary; 
@property (nonatomic,readonly) BOOL isTracePlayer; 
@property (nonatomic,readonly) double timeScale; 
@property (nonatomic,readonly) CLLocation * lastLocation; 
@optional
-(CLLocation *)lastLocation;

@required
-(id<MKLocationProviderDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(long long)activityType;
-(void)setActivityType:(long long)arg1;
-(int)authorizationStatus;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
-(double)distanceFilter;
-(void)setDistanceFilter:(double)arg1;
-(double)desiredAccuracy;
-(void)setDesiredAccuracy:(double)arg1;
-(BOOL)matchInfoEnabled;
-(void)setMatchInfoEnabled:(BOOL)arg1;
-(void)startUpdatingHeading;
-(void)requestWhenInUseAuthorization;
-(double)expectedGpsUpdateInterval;
-(void)setHeadingOrientation:(int)arg1;
-(int)headingOrientation;
-(void)stopUpdatingHeading;
-(void)dismissHeadingCalibrationDisplay;
-(void)requestWhenInUseAuthorizationWithPrompt;
-(BOOL)isLocationServicesPreferencesDialogEnabled;
-(void)setLocationServicesPreferencesDialogEnabled:(BOOL)arg1;
-(void)startUpdatingVehicleSpeed;
-(void)stopUpdatingVehicleSpeed;
-(void)startUpdatingVehicleHeading;
-(void)stopUpdatingVehicleHeading;
-(void)setEffectiveBundleIdentifier:(id)arg1;
-(BOOL)usesCLMapCorrection;
-(NSBundle *)effectiveBundle;
-(void)setEffectiveBundle:(id)arg1;
-(NSString *)effectiveBundleIdentifier;
-(id)authorizationRequestBlock;
-(void)setAuthorizationRequestBlock:(/*^block*/id)arg1;
-(BOOL)isTracePlayer;
-(double)timeScale;
-(void)authorizationStatusOnQueue:(id)arg1 result:(/*^block*/id)arg2;
-(BOOL)shouldShiftIfNecessary;

@end

