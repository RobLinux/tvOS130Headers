/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 12:58:56 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVDiagnostics.app/TVDiagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DADeviceWithUI
@property (assign,nonatomic,__weak) id<DKVolumeHUDResponder> volumeHUDResponder; 
@property (assign,nonatomic,__weak) id<DKBrightnessResponder> brightnessResponder; 
@property (assign,nonatomic,__weak) id<DKViewControllerDelegate> viewControllerDelegate; 
@property (assign,nonatomic,__weak) id<DADeviceWithUIDelegate> delegate; 
@required
-(id<DADeviceWithUIDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(id<DKViewControllerDelegate>)viewControllerDelegate;
-(id<DKBrightnessResponder>)brightnessResponder;
-(id<DKVolumeHUDResponder>)volumeHUDResponder;
-(void)setBrightnessResponder:(id)arg1;
-(void)setVolumeHUDResponder:(id)arg1;
-(void)setViewControllerDelegate:(id)arg1;

@end

