/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFAirDropActivityViewControllerDelegate <NSObject>
@optional
-(void)nodePressedWithGUID:(id)arg1 groupName:(id)arg2 recipients:(id)arg3;
-(void)nodePressedWithRecipients:(id)arg1;
-(void)airDropActivityDoneButtonPressed;
-(void)airDropActivityRequestingSharedItemsWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)airDropActivityDidFailToStartTransfer;
-(void)airDropActivityDidReceiveInitialPeopleList;

@required
-(void)airDropActivityRequestingSharedItemsWithCompletionHandler:(/*^block*/id)arg1;
-(void)airDropActivityDidSuccessfullyCompleteTransfer;
-(void)airDropActivityDidSuccessfullyStartTransfer;

@end

