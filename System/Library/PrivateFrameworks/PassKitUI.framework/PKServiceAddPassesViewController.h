/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:07 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKNavigationController.h>
#import <PassKitUI/PKAddPassesCardStackViewControllerDelegate.h>
#import <PassKitUI/PKServiceAddPassesViewControllerProtocol.h>

@class PKAddPassesCardStackViewController, NSString;

@interface PKServiceAddPassesViewController : PKNavigationController <PKAddPassesCardStackViewControllerDelegate, PKServiceAddPassesViewControllerProtocol> {

	CGSize _screenSize;
	double _screenScale;
	BOOL _placeholderViewControllerDidCancel;
	PKAddPassesCardStackViewController* _cardStackViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(BOOL)_preventsAppearanceProxyCustomization;
+(id)_remoteViewControllerInterface;
-(id)init;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)preferredStatusBarStyle;
-(BOOL)shouldAutorotate;
-(BOOL)prefersStatusBarHidden;
-(void)resetBrightness;
-(void)evaluateBrightness;
-(void)addPassesCardStackViewController:(id)arg1 didFinishAddingPasses:(id)arg2 ;
-(void)addPassesCardStackViewController:(id)arg1 didCancelAddingPasses:(id)arg2 ;
-(void)setDisplayPropertiesWithScreenSize:(CGSize)arg1 scale:(double)arg2 ;
-(void)ingestPassesWithData:(id)arg1 fromPresentationSource:(unsigned long long)arg2 ;
@end

