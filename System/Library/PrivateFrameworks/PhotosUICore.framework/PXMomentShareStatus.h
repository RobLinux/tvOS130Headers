/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PXObservable.h>
#import <PhotosUICore/PXPhotoLibraryUIChangeObserver.h>
#import <PhotosUICore/PXMutableMomentShareStatus.h>

@protocol PXDisplayMomentShare, PXDisplayAssetFetchResult, PXSectionedFetchResult;
@class NSString;

@interface PXMomentShareStatus : PXObservable <PXPhotoLibraryUIChangeObserver, PXMutableMomentShareStatus> {

	id<PXDisplayMomentShare> _momentShare;
	id<PXDisplayAssetFetchResult> _downloadingAssetsFetchResult;
	id<PXDisplayAssetFetchResult> _copiedAssetsFetchResult;
	id<PXDisplayAssetFetchResult> _allAssetsFetchResult;
	id<PXSectionedFetchResult> _participantsFetchResult;

}

@property (nonatomic,readonly) id<PXDisplayMomentShare> momentShare;                                    //@synthesize momentShare=_momentShare - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAssetFetchResult> downloadingAssetsFetchResult;              //@synthesize downloadingAssetsFetchResult=_downloadingAssetsFetchResult - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAssetFetchResult> copiedAssetsFetchResult;                   //@synthesize copiedAssetsFetchResult=_copiedAssetsFetchResult - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAssetFetchResult> allAssetsFetchResult;                      //@synthesize allAssetsFetchResult=_allAssetsFetchResult - In the implementation block
@property (nonatomic,readonly) id<PXSectionedFetchResult> participantsFetchResult;                      //@synthesize participantsFetchResult=_participantsFetchResult - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
-(NSString *)description;
-(id)init;
-(id)owner;
-(id<PXDisplayMomentShare>)momentShare;
-(void)setMomentShare:(id<PXDisplayMomentShare>)arg1 ;
-(void)performChanges:(/*^block*/id)arg1 ;
-(id<PXSectionedFetchResult>)participantsFetchResult;
-(id)initWithMomentShare:(id)arg1 ;
-(id<PXDisplayAssetFetchResult>)downloadingAssetsFetchResult;
-(void)setDownloadingAssetsFetchResult:(id<PXDisplayAssetFetchResult>)arg1 ;
-(id<PXDisplayAssetFetchResult>)copiedAssetsFetchResult;
-(void)setCopiedAssetsFetchResult:(id<PXDisplayAssetFetchResult>)arg1 ;
-(id<PXDisplayAssetFetchResult>)allAssetsFetchResult;
-(void)setAllAssetsFetchResult:(id<PXDisplayAssetFetchResult>)arg1 ;
-(void)setParticipantsFetchResult:(id<PXSectionedFetchResult>)arg1 ;
@end

