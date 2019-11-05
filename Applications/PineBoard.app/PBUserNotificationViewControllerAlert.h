/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:31 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSystemUI/TVSUITextAlertController.h>
#import <PineBoard/PBUserNotificationViewController.h>

@protocol PBUserNotificationViewControllerDelegate;
@class PBCFUserNotification, NSString;

@interface PBUserNotificationViewControllerAlert : TVSUITextAlertController <PBUserNotificationViewController> {

	PBCFUserNotification* _notification;
	id<PBUserNotificationViewControllerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) PBCFUserNotification * notification;                                       //@synthesize notification=_notification - In the implementation block
@property (assign,nonatomic,__weak) id<PBUserNotificationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<PBUserNotificationViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PBUserNotificationViewControllerDelegate>)arg1 ;
-(PBCFUserNotification *)notification;
-(void)setNotification:(PBCFUserNotification *)arg1 ;
-(void)viewDidLoad;
-(void)_handleMenuButton;
-(void)_handleHomeButton:(id)arg1 ;
-(void)updateWithNotification:(id)arg1 ;
-(void)_didSelectButtonAtIndex:(unsigned long long)arg1 ;
@end

