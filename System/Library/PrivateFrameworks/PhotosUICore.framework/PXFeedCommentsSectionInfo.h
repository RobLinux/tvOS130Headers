/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXFeedSectionInfo.h>

@interface PXFeedCommentsSectionInfo : PXFeedSectionInfo {

	BOOL __hasLikes;

}

@property (assign,setter=_setHasLikes:,nonatomic) BOOL _hasLikes;              //@synthesize _hasLikes=__hasLikes - In the implementation block
-(id)assets;
-(long long)sectionType;
-(unsigned long long)assetsCount;
-(BOOL)isMine;
-(id)cloudFeedCommentsEntry;
-(void)updateFromCloudFeedEntry;
-(long long)typeForItemAtIndex:(long long)arg1 ;
-(id)assetForItemAtIndex:(long long)arg1 ;
-(BOOL)hasMultipleAssetsForItemAtIndex:(long long)arg1 ;
-(id)assetsForItemAtIndex:(long long)arg1 maximumCount:(long long)arg2 ;
-(id)commentForItemAtIndex:(long long)arg1 ;
-(id)commentTextForItemAtIndex:(long long)arg1 ;
-(id)likesForItemAtIndex:(long long)arg1 ;
-(void)getCommentCount:(out unsigned long long*)arg1 likeCount:(out unsigned long long*)arg2 ;
-(BOOL)containsAsset:(id)arg1 ;
-(long long)indexOfItemWithAsset:(id)arg1 ;
-(long long)indexOfItemWithComment:(id)arg1 ;
-(BOOL)_hasLikes;
-(void)_setHasLikes:(BOOL)arg1 ;
@end

