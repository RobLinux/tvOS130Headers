/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <StoreKit/SKUIClientComposeReviewViewController.h>

@class SKComposeReviewViewController, NSString;

@interface SKRemoteComposeReviewViewController : _UIRemoteViewController <SKUIClientComposeReviewViewController> {

	SKComposeReviewViewController* _composeReviewViewController;

}

@property (assign,nonatomic,__weak) SKComposeReviewViewController * composeReviewViewController;              //@synthesize composeReviewViewController=_composeReviewViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)didPrepareWithResult:(id)arg1 error:(id)arg2 ;
-(void)promptForStarRating;
-(void)setComposeReviewViewController:(SKComposeReviewViewController *)arg1 ;
-(void)didFinishWithResult:(id)arg1 error:(id)arg2 ;
-(void)_keyboardVisibilityDidChangeNotification:(id)arg1 ;
-(SKComposeReviewViewController *)composeReviewViewController;
@end

