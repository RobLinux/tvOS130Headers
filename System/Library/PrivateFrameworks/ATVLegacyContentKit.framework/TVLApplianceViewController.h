/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLNavigationController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <ATVLegacyContentKit/TVLApplianceDelegate.h>

@class TVLAppliance, NSString;

@interface TVLApplianceViewController : TVLNavigationController <UIGestureRecognizerDelegate, TVLApplianceDelegate> {

	TVLAppliance* _appliance;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)viewDidLoad;
-(id)popViewControllerAnimated:(BOOL)arg1 ;
-(void)_loadRootURLWithCompletion:(/*^block*/id)arg1 ;
-(void)_readJavaScriptConfig:(/*^block*/id)arg1 ;
-(void)appliance:(id)arg1 didRequestLoadWithPropertyList:(id)arg2 ;
-(id)initWithAppliance:(id)arg1 ;
-(id)_popViewControllerAnimated:(BOOL)arg1 ;
-(void)startFeedApplicationWithCompletion:(/*^block*/id)arg1 ;
-(void)stopFeedApplication;
@end

