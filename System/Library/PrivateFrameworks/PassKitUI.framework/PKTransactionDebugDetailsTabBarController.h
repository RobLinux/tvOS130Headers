/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:08 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITabBarController.h>

@class UIBarButtonItem, PKPaymentTransaction, PKTransactionCloudKitDebugDetailsViewController;

@interface PKTransactionDebugDetailsTabBarController : UITabBarController {

	UIBarButtonItem* _shareButton;
	PKPaymentTransaction* _transaction;
	PKTransactionCloudKitDebugDetailsViewController* _cloudKitViewController;

}
-(id)initWithTransaction:(id)arg1 ;
-(void)_handleShareButton:(id)arg1 ;
@end

