/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:17 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIPopoverController.h>
#import <MediaPlayer/MPAVRoutingViewControllerDelegate.h>

@class MPAVRoutingViewController, NSString;

@interface MPAudioVideoRoutingPopoverController : UIPopoverController <MPAVRoutingViewControllerDelegate> {

	int _airPlayPasswordAlertDidAppearToken;
	BOOL _airPlayPasswordAlertDidAppearTokenIsValid;
	BOOL _mirroringIncluded;
	MPAVRoutingViewController* _routingViewController;
	BOOL _mirroringOnly;

}

@property (assign,nonatomic) BOOL mirroringOnly;                    //@synthesize mirroringOnly=_mirroringOnly - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithType:(long long)arg1 ;
-(id)initWithContentViewController:(id)arg1 ;
-(id)routingController;
-(void)routingViewController:(id)arg1 didPickRoute:(id)arg2 ;
-(void)routingViewControllerDidUpdateContents:(id)arg1 ;
-(id)initWithType:(long long)arg1 includeMirroring:(BOOL)arg2 ;
-(void)setMirroringOnly:(BOOL)arg1 ;
-(BOOL)mirroringOnly;
@end
