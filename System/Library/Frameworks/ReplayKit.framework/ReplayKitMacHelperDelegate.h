/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ReplayKitMacHelperDelegate <NSObject>
@optional
-(void)extensionDidFinishWithLaunchURL:(id)arg1 broadcastURL:(id)arg2 extensionBundleID:(id)arg3 cancelled:(BOOL)arg4;
-(void)replayKitMacHelper:(id)arg1 didDismissVideoEditorSheetWithActivityTypes:(id)arg2;
-(void)userDidStopRecordingFromStatusBar;
-(void)macApplicationDidResignActive;
-(void)macApplicationDidBecomeActive;

@end

