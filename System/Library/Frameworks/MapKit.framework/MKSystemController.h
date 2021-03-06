/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:10 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKSystemControllerOpenURLDelegate;
#import <MapKit/MapKit-Structs.h>
@interface MKSystemController : NSObject {

	id<MKSystemControllerOpenURLDelegate> _openURLDelegate;

}

@property (assign,nonatomic,__weak) id<MKSystemControllerOpenURLDelegate> openURLDelegate;              //@synthesize openURLDelegate=_openURLDelegate - In the implementation block
+(id)sharedInstance;
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isInternalInstall;
-(BOOL)openURL:(id)arg1 ;
-(int)userInterfaceIdiom;
-(double)screenScale;
-(CGSize)screenSize;
-(BOOL)reduceMotionEnabled;
-(BOOL)requiresRTT;
-(BOOL)supportsPitchAPI;
-(BOOL)overrideBlurStyle;
-(BOOL)supports3DImagery;
-(BOOL)supportsAlwaysOnCompass;
-(BOOL)supports3DMaps;
-(BOOL)isDevicePluggedIn;
-(BOOL)isHiDPI;
-(void)openURL:(id)arg1 bundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)isPhone6PlusOrLarger;
-(BOOL)_openURLsOnBackgroundThread;
-(BOOL)_isRunningInLockScreen;
-(BOOL)_shouldUseLaunchServices;
-(id)_defaultOpenURLOptions;
-(id)_transformURLIfNecessary:(id)arg1 ;
-(BOOL)isWifiEnabled;
-(void)openUserActivity:(id)arg1 withApplicationProxy:(id)arg2 requireOptionKeyPromptUnlockDevice:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)shouldCaptureMapViewGestureAnalytics;
-(id<MKSystemControllerOpenURLDelegate>)openURLDelegate;
-(void)setOpenURLDelegate:(id<MKSystemControllerOpenURLDelegate>)arg1 ;
@end

