/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AKFollowUpProvider <NSObject>
@required
-(BOOL)removeFollowUpItemsWithIdentifiers:(id)arg1 error:(id*)arg2;
-(id)pendingAuthKitFollowUpItems:(id*)arg1;
-(BOOL)removeAllAuthKitFollowUpItems:(id*)arg1;
-(BOOL)addFollowUpItems:(id)arg1 error:(id*)arg2;
-(BOOL)removeFollowUpItems:(id)arg1 error:(id*)arg2;
-(BOOL)clearNotificationsForItem:(id)arg1 error:(id*)arg2;

@end

