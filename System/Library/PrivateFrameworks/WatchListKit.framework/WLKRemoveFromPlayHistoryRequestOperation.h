/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSString;

@interface WLKRemoveFromPlayHistoryRequestOperation : WLKUTSNetworkRequestOperation {

	NSString* _deleteID;

}

@property (nonatomic,copy,readonly) NSString * deleteID;              //@synthesize deleteID=_deleteID - In the implementation block
-(id)initWithDeleteID:(id)arg1 caller:(id)arg2 isContinueWatching:(BOOL)arg3 ;
-(NSString *)deleteID;
@end

