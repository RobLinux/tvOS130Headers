/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:54 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SDShareSheetSlotManagerProtocol <SDXPCDaemonProtocol>
@required
-(void)activityViewControllerWithSessionID:(id)arg1 selectedPersonWithIdentifier:(id)arg2;
-(void)activityViewControllerWithSessionID:(id)arg1 selectedActivityWithIdentifier:(id)arg2;
-(void)activityViewControllerWithSessionID:(id)arg1 selectedActionWithIdentifier:(id)arg2;
-(void)activityViewControllerWithSessionID:(id)arg1 updatedFavoritesProxies:(id)arg2 activityCategory:(long long)arg3;
-(void)activityViewControllerWithSessionID:(id)arg1 toggledActivityWithIdentifier:(id)arg2 activityCategory:(long long)arg3;
-(void)activityViewControllerWithSessionID:(id)arg1 favoritedActivity:(BOOL)arg2 withIdentifier:(id)arg3 activityCategory:(long long)arg4;
-(void)activityViewControllerWithSessionID:(id)arg1 selectedDefaultActivityWithIdentifier:(id)arg2 activityCategory:(long long)arg3;
-(void)activityViewControllerPerformEditActionsWithSessionID:(id)arg1;
-(void)connectToDaemonWithSessionID:(id)arg1 discoveryContext:(id)arg2 assetIdentifiers:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)activityViewControllerDidEnterBackgroundWithSessionID:(id)arg1;
-(void)activityViewControllerWillEnterForegroundWithSessionID:(id)arg1;
-(void)activityViewControllerWithSessionID:(id)arg1 performedActivityWithSuccess:(BOOL)arg2;
-(void)sendConfiguration:(id)arg1 completion:(/*^block*/id)arg2;

@end

