/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:26 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXGestureRecorderViewDelegate <NSObject>
@required
-(unsigned long long)numberOfDynamicFingerPathsInGestureRecorderView:(id)arg1;
-(void)gestureRecorderView:(id)arg1 setChromeVisible:(BOOL)arg2;
-(BOOL)canToggleChromeForGestureRecorderView:(id)arg1;
-(BOOL)isChromeVisibleForGestureRecorderView:(id)arg1;
-(id)gestureRecorderView:(id)arg1 dynamicFingerPathAtIndex:(unsigned long long)arg2;

@end
