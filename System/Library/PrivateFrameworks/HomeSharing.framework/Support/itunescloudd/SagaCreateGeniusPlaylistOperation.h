/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@class NSString, NSArray;

@interface SagaCreateGeniusPlaylistOperation : CloudLibraryOperation {

	long long _playlistPersistentID;
	NSString* _playlistName;
	NSArray* _seedItemIDs;
	NSArray* _itemIDs;
	unsigned long long _playlistSagaID;

}

@property (nonatomic,readonly) unsigned long long playlistSagaID;              //@synthesize playlistSagaID=_playlistSagaID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)main;
-(BOOL)isPersistent;
-(unsigned long long)playlistSagaID;
-(id)initWithConfiguration:(id)arg1 geniusPlaylistPersistentID:(long long)arg2 playlistName:(id)arg3 seedItemIDs:(id)arg4 itemIDs:(id)arg5 ;
-(id)initWithGeniusPlaylistPersistentID:(long long)arg1 playlistName:(id)arg2 seedItemIDs:(id)arg3 itemIDs:(id)arg4 ;
@end

