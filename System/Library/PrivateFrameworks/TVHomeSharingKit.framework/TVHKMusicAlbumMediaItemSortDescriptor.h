/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:19 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSSortDescriptor.h>

@interface TVHKMusicAlbumMediaItemSortDescriptor : NSSortDescriptor
+(long long)_compareMediaItemDiscNumbersWithMediaItem1:(id)arg1 mediaItem2:(id)arg2 ;
+(long long)_compareMediaItemTrackNumbersWithMediaItem1:(id)arg1 mediaItem2:(id)arg2 ;
+(long long)_compareMediaItemTrackOrDiscNumbersWithNumber1:(id)arg1 number2:(id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithKey:(id)arg1 ascending:(BOOL)arg2 selector:(SEL)arg3 ;
-(id)initWithKey:(id)arg1 ascending:(BOOL)arg2 comparator:(/*^block*/id)arg3 ;
-(id)initWithKey:(id)arg1 ascending:(BOOL)arg2 ;
-(id)initWithAscending:(BOOL)arg1 ;
@end

