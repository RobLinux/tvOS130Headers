/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:27 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class PBCFUserNotification;


@protocol PBUserNotificationViewController <NSObject>
@property (nonatomic,retain) PBCFUserNotification * notification; 
@property (assign,nonatomic,__weak) id<PBUserNotificationViewControllerDelegate> delegate; 
@required
-(id<PBUserNotificationViewControllerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(PBCFUserNotification *)notification;
-(void)setNotification:(id)arg1;

@end

