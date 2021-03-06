/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:07 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FLViewModel <NSObject>
@optional
-(id)groups;
-(void)refreshItems:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)refreshItemsForItem:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;

@required
-(id)allPendingItems;
-(void)setItemChangeHandler:(/*^block*/id)arg1;

@end

