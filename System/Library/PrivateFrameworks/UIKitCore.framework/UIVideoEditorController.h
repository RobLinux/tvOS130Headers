/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UINavigationController.h>

@class NSMutableDictionary, NSString;

@interface UIVideoEditorController : UINavigationController {

	int _previousStatusBarStyle;
	NSMutableDictionary* _properties;
	struct {
		unsigned visible : 1;
		unsigned isCleaningUp : 1;
		unsigned didRevertStatusBar : 1;
	}  _flags;

}

@property (assign,nonatomic) id<UINavigationControllerDelegate><UIVideoEditorControllerDelegate> delegate; 
@property (nonatomic,copy) NSString * videoPath; 
@property (assign,nonatomic) double videoMaximumDuration; 
@property (assign,nonatomic) long long videoQuality; 
+(BOOL)canEditVideoAtPath:(id)arg1 ;
-(id)init;
-(id)_properties;
-(void)_setValue:(id)arg1 forProperty:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)_videoURL;
-(NSString *)videoPath;
-(void)_setVideoURL:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_setProperties:(id)arg1 ;
-(void)setVideoQuality:(long long)arg1 ;
-(long long)videoQuality;
-(void)_autoDismiss;
-(id)_valueForProperty:(id)arg1 ;
-(BOOL)_didRevertStatusBar;
-(void)editVideoViewController:(id)arg1 didFailWithError:(id)arg2 ;
-(void)editVideoViewControllerDidCancel:(id)arg1 ;
-(void)editVideoViewController:(id)arg1 didTrimVideoWithOptions:(id)arg2 ;
-(double)videoMaximumDuration;
-(void)viewWillUnload;
-(void)setVideoPath:(NSString *)arg1 ;
-(BOOL)_isSupportedInterfaceOrientation:(long long)arg1 ;
-(void)_initializeProperties;
-(void)_removeAllChildren;
-(void)setVideoMaximumDuration:(double)arg1 ;
-(void)_setupControllers;
-(id)_createInitialController;
@end

