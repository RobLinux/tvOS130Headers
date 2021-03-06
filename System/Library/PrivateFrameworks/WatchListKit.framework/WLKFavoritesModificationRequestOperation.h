/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSString;

@interface WLKFavoritesModificationRequestOperation : WLKUTSNetworkRequestOperation {

	unsigned long long _action;
	NSString* _entityID;

}

@property (nonatomic,readonly) unsigned long long action;              //@synthesize action=_action - In the implementation block
@property (nonatomic,copy,readonly) NSString * entityID;               //@synthesize entityID=_entityID - In the implementation block
-(unsigned long long)action;
-(NSString *)entityID;
-(void)processResponse;
-(id)initWithAction:(unsigned long long)arg1 entityId:(id)arg2 caller:(id)arg3 ;
@end

