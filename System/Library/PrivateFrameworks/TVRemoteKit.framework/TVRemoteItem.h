/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:28 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteKit.framework/TVRemoteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVRemoteItem <NSObject>
@optional
-(BOOL)isRemoteItemCollection;
-(id)remoteItems;
-(long long)remoteItemIcon;
-(void)handleRemoteAction;

@required
-(id)remoteItemTitle;

@end

