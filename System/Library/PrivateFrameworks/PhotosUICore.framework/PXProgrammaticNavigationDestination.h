/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PXDisplayAsset, PXDisplayAssetCollection;
@class NSString;

@interface PXProgrammaticNavigationDestination : NSObject {

	id<PXDisplayAsset> _asset;
	id<PXDisplayAssetCollection> _assetCollection;
	long long _type;
	long long _revealMode;
	NSString* _assetUUID;
	NSString* _assetLocalIdentifier;
	NSString* _assetCollectionUUID;
	long long _assetCollectionType;
	long long _assetCollectionSubtype;

}

@property (nonatomic,readonly) long long type;                                            //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long revealMode;                                      //@synthesize revealMode=_revealMode - In the implementation block
@property (nonatomic,copy,readonly) NSString * assetUUID;                                 //@synthesize assetUUID=_assetUUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * assetLocalIdentifier;                      //@synthesize assetLocalIdentifier=_assetLocalIdentifier - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAsset> asset;                                  //@synthesize asset=_asset - In the implementation block
@property (nonatomic,copy,readonly) NSString * assetCollectionUUID;                       //@synthesize assetCollectionUUID=_assetCollectionUUID - In the implementation block
@property (nonatomic,readonly) long long assetCollectionType;                             //@synthesize assetCollectionType=_assetCollectionType - In the implementation block
@property (nonatomic,readonly) long long assetCollectionSubtype;                          //@synthesize assetCollectionSubtype=_assetCollectionSubtype - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAssetCollection> assetCollection;              //@synthesize assetCollection=_assetCollection - In the implementation block
-(id)description;
-(long long)type;
-(id)initWithURL:(id)arg1 ;
-(id<PXDisplayAsset>)asset;
-(NSString *)assetUUID;
-(long long)assetCollectionType;
-(long long)assetCollectionSubtype;
-(NSString *)assetLocalIdentifier;
-(id<PXDisplayAssetCollection>)assetCollection;
-(id)initWithObject:(id)arg1 revealMode:(long long)arg2 ;
-(id)initWithType:(long long)arg1 revealMode:(long long)arg2 ;
-(id)initWithType:(long long)arg1 revealMode:(long long)arg2 assetUUID:(id)arg3 assetCollectionUUID:(id)arg4 ;
-(long long)revealMode;
-(NSString *)assetCollectionUUID;
@end

