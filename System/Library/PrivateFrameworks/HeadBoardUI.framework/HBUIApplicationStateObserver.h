/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HeadBoardUI.framework/HeadBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HeadBoardUI/HeadBoardUI-Structs.h>
@class UIWindow;

@interface HBUIApplicationStateObserver : NSObject {

	struct {
		BOOL inactive;
		BOOL background;
	}  _applicationStateFlags;
	unsigned long long _applicationDeactivationReasons;
	UIWindow* _controlCenterWindow;

}

@property (assign,nonatomic) unsigned long long applicationDeactivationReasons;              //@synthesize applicationDeactivationReasons=_applicationDeactivationReasons - In the implementation block
@property (nonatomic,readonly) UIWindow * controlCenterWindow;                               //@synthesize controlCenterWindow=_controlCenterWindow - In the implementation block
@property (nonatomic,readonly) BOOL canPlayVideo; 
+(id)sharedInstance;
-(id)_init;
-(void)_applicationWillAddDeactivationReason:(id)arg1 ;
-(void)_applicationDidRemoveDeactivationReason:(id)arg1 ;
-(void)_applicationWillEnterForeground;
-(void)_applicationDidEnterBackground;
-(void)_applicationWillResignActive;
-(BOOL)canPlayVideo;
-(void)_applicationDidBecomeActive;
-(unsigned long long)applicationDeactivationReasons;
-(void)setApplicationDeactivationReasons:(unsigned long long)arg1 ;
-(UIWindow *)controlCenterWindow;
@end

